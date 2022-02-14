
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uip_netif {scalar_t__ state; } ;
struct bba_priv {int revid; int devid; int acstart; } ;
typedef int s8_t ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct uip_netif*) ;

__attribute__((used)) static s8_t FUNC_1(struct uip_netif *VAR_1)
{
 s32 VAR_2;
 struct bba_priv *VAR_3 = (struct bba_priv*)VAR_1->state;

 if(!VAR_3) return VAR_0;

 VAR_3->revid = 0x00;
 VAR_3->devid = 0xD107;
 VAR_3->acstart = 0x4E;

 VAR_2 = FUNC_0(VAR_1);

 return VAR_2;
}
