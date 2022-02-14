
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct ethtool_test {int flags; } ;
struct efx_self_tests {int dummy; } ;
struct efx_nic {scalar_t__ state; TYPE_1__* net_dev; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_2 (struct efx_nic*,struct efx_self_tests*,int *,int *) ;
 int FUNC_3 (struct efx_nic*,struct efx_self_tests*,int) ;
 int FUNC_4 (struct efx_self_tests*) ;
 struct efx_self_tests* FUNC_5 (int,int ) ;
 struct efx_nic* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct efx_nic*,int ,TYPE_1__*,char*) ;
 int FUNC_8 (struct efx_nic*,int ,TYPE_1__*,char*,char*,...) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_8,
      struct ethtool_test *VAR_9, u64 *VAR_10)
{
 struct efx_nic *VAR_11 = FUNC_6(VAR_8);
 struct efx_self_tests *VAR_12;
 int VAR_13;
 int VAR_14 = -VAR_1;

 VAR_12 = FUNC_5(sizeof(*VAR_12), VAR_4);
 if (!VAR_12)
  goto fail;

 if (VAR_11->state != VAR_6) {
  VAR_14 = -VAR_0;
  goto fail1;
 }

 FUNC_8(VAR_11, VAR_7, VAR_11->net_dev, "starting %sline testing\n",
     (VAR_9->flags & VAR_3) ? "off" : "on");


 VAR_13 = (VAR_11->net_dev->flags & VAR_5);
 if (!VAR_13) {
  VAR_14 = FUNC_1(VAR_11->net_dev);
  if (VAR_14) {
   FUNC_7(VAR_11, VAR_7, VAR_11->net_dev,
      "failed opening device.\n");
   goto fail1;
  }
 }

 VAR_14 = FUNC_3(VAR_11, VAR_12, VAR_9->flags);

 if (!VAR_13)
  FUNC_0(VAR_11->net_dev);

 FUNC_8(VAR_11, VAR_7, VAR_11->net_dev, "%s %sline self-tests\n",
     VAR_14 == 0 ? "passed" : "failed",
     (VAR_9->flags & VAR_3) ? "off" : "on");

fail1:

 FUNC_2(VAR_11, VAR_12, ((void*)0), VAR_10);
 FUNC_4(VAR_12);
fail:
 if (VAR_14)
  VAR_9->flags |= VAR_2;
}
