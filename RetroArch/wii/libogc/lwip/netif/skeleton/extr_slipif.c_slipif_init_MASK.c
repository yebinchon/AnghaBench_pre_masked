
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif {char* name; int mtu; int state; scalar_t__ num; int flags; int output; } ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,struct netif*,int ) ;

err_t
FUNC_3(struct netif *VAR_7)
{

  FUNC_0(VAR_4, ("slipif_init: netif->num=%x\n", (int)VAR_7->num));

  VAR_7->name[0] = 's';
  VAR_7->name[1] = 'l';
  VAR_7->output = VAR_6;
  VAR_7->mtu = 1500;
  VAR_7->flags = VAR_2;

  VAR_7->state = FUNC_1(VAR_7->num);
  if (!VAR_7->state)
      return VAR_0;

  FUNC_2(VAR_5, VAR_7, VAR_3);
  return VAR_1;
}
