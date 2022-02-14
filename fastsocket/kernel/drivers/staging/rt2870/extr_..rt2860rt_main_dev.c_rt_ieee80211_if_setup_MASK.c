
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int * name; int * netdev_ops; int priv_flags; int * wireless_handlers; } ;
struct TYPE_3__ {scalar_t__ OpMode; } ;
typedef TYPE_1__* PRTMP_ADAPTER ;
typedef int NDIS_STATUS ;
typedef int INT ;
typedef int CHAR ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct net_device* FUNC_1 (int ,int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *,char*,int) ;

__attribute__((used)) static NDIS_STATUS FUNC_5(struct net_device *VAR_8, PRTMP_ADAPTER VAR_9)
{
 NDIS_STATUS VAR_10;
 INT VAR_11=0;
 CHAR VAR_12[VAR_0];
 struct net_device *VAR_13;

 if (VAR_9->OpMode == VAR_4)
 {
  VAR_8->wireless_handlers = &VAR_7;
 }

 VAR_8->priv_flags = VAR_1;
 VAR_8->netdev_ops = &VAR_6;

 for (VAR_11 = 0; VAR_11 < 8; VAR_11++)
 {
  FUNC_4(VAR_12, "wlan%d", VAR_11);

  VAR_13 = FUNC_1(FUNC_2(VAR_8), VAR_12);
  if (VAR_13 != ((void*)0))
   FUNC_3(VAR_13);

  if (VAR_13 == ((void*)0))
   break;
 }

 if(VAR_11 == 8)
 {
  FUNC_0(VAR_5, ("No available slot name\n"));
  VAR_10 = VAR_2;
 }
 else
 {
  FUNC_4(VAR_8->name, "wlan%d", VAR_11);
  VAR_10 = VAR_3;
 }

 return VAR_10;

}
