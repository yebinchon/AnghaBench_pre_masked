
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmac {scalar_t__ offset; } ;
struct port_info {int port_id; struct cmac mac; } ;
struct net_device {int dummy; } ;
struct adapter {struct net_device** port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct adapter*,struct port_info*) ;
 int FUNC_1 (struct adapter*,struct port_info*) ;
 int FUNC_2 (struct net_device*) ;
 struct port_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct cmac*,int ) ;
 int FUNC_8 (struct adapter*,scalar_t__) ;
 int FUNC_9 (struct adapter*,scalar_t__,int ,int ) ;
 int FUNC_10 (struct adapter*,scalar_t__,int ) ;
 int FUNC_11 (struct adapter*,int ) ;
 int FUNC_12 (struct adapter*,int ) ;

void FUNC_13(struct adapter *VAR_5, int VAR_6, int VAR_7)
{
 struct net_device *VAR_8 = VAR_5->port[VAR_6];
 struct port_info *VAR_9 = FUNC_3(VAR_8);

 if (VAR_7 == FUNC_5(VAR_8))
  return;

 if (VAR_7) {
  struct cmac *VAR_10 = &VAR_9->mac;

  FUNC_6(VAR_8);

  FUNC_0(VAR_5, VAR_9);


  FUNC_11(VAR_5, VAR_9->port_id);
  FUNC_8(VAR_5, VAR_2 +
        VAR_9->mac.offset);
  FUNC_10(VAR_5,
        VAR_0 + VAR_9->mac.offset,
        VAR_3);

  FUNC_9(VAR_5,
     VAR_1 +
     VAR_9->mac.offset,
     VAR_3, VAR_3);
  FUNC_12(VAR_5, VAR_9->port_id);

  FUNC_7(VAR_10, VAR_4);
 } else {
  FUNC_4(VAR_8);


  FUNC_1(VAR_5, VAR_9);
 }
 FUNC_2(VAR_8);
}
