
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct TYPE_6__ {scalar_t__ v_writecount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(vnode_t VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 FUNC_1(VAR_2);

 if ((VAR_4 & VAR_1) && (VAR_2->v_writecount == 0))



         VAR_5 = VAR_0;
 else
         VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);

 FUNC_2(VAR_2);

 return (VAR_5);
}
