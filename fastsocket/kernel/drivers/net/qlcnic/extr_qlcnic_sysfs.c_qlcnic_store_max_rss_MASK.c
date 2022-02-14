
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int flags; unsigned long max_sds_rings; int state; struct net_device* netdev; } ;
struct net_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 struct qlcnic_adapter* FUNC_1 (struct device*) ;
 int FUNC_2 (struct net_device*,char*,...) ;
 int FUNC_3 (struct net_device*,char*,unsigned long) ;
 int FUNC_4 (struct qlcnic_adapter*,unsigned long,size_t) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*,unsigned long) ;
 scalar_t__ FUNC_7 (char const*,int,unsigned long*) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_6,
        struct device_attribute *VAR_7,
        const char *VAR_8, size_t VAR_9)
{
 struct qlcnic_adapter *VAR_10 = FUNC_1(VAR_6);
 struct net_device *VAR_11 = VAR_10->netdev;
 unsigned long VAR_12;
 int VAR_13;

 if (FUNC_5(VAR_10))
  return -VAR_2;

 if (FUNC_8(VAR_5, &VAR_10->state))
  return -VAR_0;

 if (FUNC_7(VAR_8, 10, &VAR_12)) {
  VAR_13 = -VAR_1;
  goto done;
 }

 if (!(VAR_10->flags & (VAR_4 | VAR_3))) {
  FUNC_2(VAR_11, "no msix or msi support, hence no rss\n");
  VAR_13 = -VAR_1;
  goto done;
 }

 if (VAR_12 == VAR_10->max_sds_rings) {
  VAR_13 = VAR_9;
  goto done;
 }

 VAR_13 = FUNC_6(VAR_10, VAR_12);
 if (VAR_13) {
  FUNC_2(VAR_11,
      "rss_ring valid range[1 - %d] in powers of 2\n",
       VAR_13);
  VAR_13 = -VAR_1;
  goto done;
 }

 VAR_13 = FUNC_4(VAR_10, VAR_12, VAR_9);
 done:
 FUNC_0(VAR_5, &VAR_10->state);
 FUNC_3(VAR_11, "allocated 0x%x sds rings\n",
   VAR_10->max_sds_rings);
 return VAR_13;
}
