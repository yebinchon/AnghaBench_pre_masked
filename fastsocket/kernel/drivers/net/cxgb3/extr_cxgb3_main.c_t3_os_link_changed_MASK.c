
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ops; } ;
struct cmac {scalar_t__ offset; } ;
struct port_info {int link_config; TYPE_2__ phy; struct cmac mac; int port_id; } ;
struct net_device {int dummy; } ;
struct adapter {struct net_device** port; } ;
struct TYPE_4__ {int (* power_down ) (TYPE_2__*,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct adapter*,struct port_info*) ;
 int FUNC_1 (struct adapter*,struct port_info*) ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct net_device*) ;
 struct port_info* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (TYPE_2__*,struct cmac*,int *) ;
 int FUNC_11 (struct cmac*,int ) ;
 int FUNC_12 (struct cmac*,int ) ;
 int FUNC_13 (struct adapter*,scalar_t__) ;
 int FUNC_14 (struct adapter*,scalar_t__,int ,int ) ;
 int FUNC_15 (struct adapter*,scalar_t__,int ) ;
 int FUNC_16 (struct adapter*,int ) ;
 int FUNC_17 (struct adapter*,int ) ;

void FUNC_18(struct adapter *VAR_5, int VAR_6, int VAR_7,
   int VAR_8, int VAR_9, int VAR_10)
{
 struct net_device *VAR_11 = VAR_5->port[VAR_6];
 struct port_info *VAR_12 = FUNC_4(VAR_11);
 struct cmac *VAR_13 = &VAR_12->mac;


 if (!FUNC_8(VAR_11))
  return;

 if (VAR_7 != FUNC_6(VAR_11)) {
  if (VAR_7) {
   FUNC_0(VAR_5, VAR_12);

   FUNC_12(VAR_13, VAR_4);


   FUNC_16(VAR_5, VAR_12->port_id);
   FUNC_13(VAR_5, VAR_2 +
        VAR_12->mac.offset);
   FUNC_15(VAR_5,
         VAR_0 + VAR_12->mac.offset,
         VAR_3);

   FUNC_14(VAR_5,
      VAR_1 + VAR_12->mac.offset,
      VAR_3, VAR_3);
   FUNC_17(VAR_5, VAR_12->port_id);

   FUNC_7(VAR_11);
  } else {
   FUNC_5(VAR_11);

   FUNC_16(VAR_5, VAR_12->port_id);
   FUNC_13(VAR_5, VAR_2 + VAR_12->mac.offset);
   FUNC_14(VAR_5,
      VAR_1 + VAR_12->mac.offset,
      VAR_3, 0);

   if (FUNC_2(VAR_5))
    VAR_12->phy.ops->power_down(&VAR_12->phy, 1);

   FUNC_13(VAR_5, VAR_2 + VAR_12->mac.offset);
   FUNC_11(VAR_13, VAR_4);
   FUNC_10(&VAR_12->phy, VAR_13, &VAR_12->link_config);


   FUNC_1(VAR_5, VAR_12);
  }

  FUNC_3(VAR_11);
 }
}
