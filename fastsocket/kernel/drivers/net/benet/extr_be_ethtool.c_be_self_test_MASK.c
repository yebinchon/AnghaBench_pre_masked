
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
struct net_device {int dummy; } ;
struct ethtool_test {int flags; } ;
struct be_adapter {int function_caps; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int BE_FUNCTION_CAPS_SUPER_NIC ;
 int BE_MAC_LOOPBACK ;
 int BE_ONE_PORT_EXT_LOOPBACK ;
 int BE_PHY_LOOPBACK ;
 int ETHTOOL_TESTS_NUM ;
 int ETH_TEST_FL_FAILED ;
 int ETH_TEST_FL_OFFLINE ;
 int be_cmd_link_status_query (struct be_adapter*,int *,scalar_t__*,int ) ;
 scalar_t__ be_loopback_test (struct be_adapter*,int ,int*) ;
 scalar_t__ be_test_ddr_dma (struct be_adapter*) ;
 int dev_err (int *,char*) ;
 int lancer_chip (struct be_adapter*) ;
 int memset (int*,int ,int) ;
 struct be_adapter* netdev_priv (struct net_device*) ;

__attribute__((used)) static void
be_self_test(struct net_device *netdev, struct ethtool_test *test, u64 *data)
{
 struct be_adapter *adapter = netdev_priv(netdev);
 int status;
 u8 link_status = 0;

 if (adapter->function_caps & BE_FUNCTION_CAPS_SUPER_NIC) {
  dev_err(&adapter->pdev->dev, "Self test not supported\n");
  test->flags |= ETH_TEST_FL_FAILED;
  return;
 }

 memset(data, 0, sizeof(u64) * ETHTOOL_TESTS_NUM);

 if (test->flags & ETH_TEST_FL_OFFLINE) {
  if (be_loopback_test(adapter, BE_MAC_LOOPBACK,
      &data[0]) != 0) {
   test->flags |= ETH_TEST_FL_FAILED;
  }
  if (be_loopback_test(adapter, BE_PHY_LOOPBACK,
      &data[1]) != 0) {
   test->flags |= ETH_TEST_FL_FAILED;
  }
  if (be_loopback_test(adapter, BE_ONE_PORT_EXT_LOOPBACK,
      &data[2]) != 0) {
   test->flags |= ETH_TEST_FL_FAILED;
  }
 }

 if (!lancer_chip(adapter) && be_test_ddr_dma(adapter) != 0) {
  data[3] = 1;
  test->flags |= ETH_TEST_FL_FAILED;
 }

 status = be_cmd_link_status_query(adapter, ((void*)0), &link_status, 0);
 if (status) {
  test->flags |= ETH_TEST_FL_FAILED;
  data[4] = -1;
 } else if (!link_status) {
  test->flags |= ETH_TEST_FL_FAILED;
  data[4] = 1;
 }
}
