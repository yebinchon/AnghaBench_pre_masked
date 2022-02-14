
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif {scalar_t__ state; } ;
struct bba_priv {int revid; int devid; int acstart; } ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netif*) ;

__attribute__((used)) static err_t FUNC_1(struct netif *VAR_2)
{
 struct bba_priv *VAR_3 = (struct bba_priv*)VAR_2->state;

 if(!VAR_3) return VAR_0;

 VAR_3->revid = 0xf0;
 VAR_3->devid = 0xD107;
 VAR_3->acstart = 0x4E;

 FUNC_0(VAR_2);

 return VAR_1;
}
