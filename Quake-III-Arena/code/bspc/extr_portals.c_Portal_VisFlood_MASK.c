
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {int * nodes; int onnode; } ;
typedef TYPE_1__ portal_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

qboolean FUNC_2 (portal_t *VAR_3)
{
 int VAR_4, VAR_5;

 if (!VAR_3->onnode)
  return 0;

 VAR_4 = FUNC_0(VAR_3->nodes[0]);
 VAR_5 = FUNC_0(VAR_3->nodes[1]);

 if (!FUNC_1 (VAR_4^VAR_5))
  return 1;

 if (VAR_4 & (VAR_1|VAR_0))
  VAR_4 = 0;
 if (VAR_5 & (VAR_1|VAR_0))
  VAR_5 = 0;

 if ( (VAR_4|VAR_5) & VAR_2 )
  return 0;

 if (! (VAR_4 ^ VAR_5))
  return 1;

 if (!FUNC_1 (VAR_4^VAR_5))
  return 1;
 return 0;
}
