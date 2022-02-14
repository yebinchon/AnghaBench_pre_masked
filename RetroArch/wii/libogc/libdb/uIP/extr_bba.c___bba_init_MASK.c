
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uip_netif {scalar_t__ state; } ;
struct bba_priv {TYPE_1__* ethaddr; int acstart; int devid; int revid; } ;
typedef int s8_t ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int *,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static s8_t FUNC_8(struct uip_netif *VAR_7)
{
 struct bba_priv *VAR_8 = (struct bba_priv*)VAR_7->state;
 if(!VAR_8) return VAR_5;

 FUNC_1();

 VAR_8->revid = FUNC_2(0x01);

 FUNC_4(0x04,&VAR_8->devid,2);
 FUNC_3(0x05,VAR_8->acstart);

 FUNC_7(0x5b, (FUNC_5(0x5b)&~0x80));
 FUNC_7(0x5e, 0x01);
 FUNC_7(0x5c, (FUNC_5(0x5c)|0x04));

 FUNC_0();

 FUNC_6(VAR_4,VAR_8->ethaddr->addr, 6);

 FUNC_7(VAR_3,0xFF);
 FUNC_7(VAR_1,0xFF&~VAR_2);

 FUNC_3(0x02,VAR_0);

 return VAR_6;
}
