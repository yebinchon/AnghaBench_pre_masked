
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct TYPE_3__ {scalar_t__ v_name; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 char* FUNC_3 (scalar_t__,int ,int ,int ) ;

const char *
FUNC_4(vnode_t VAR_0)
{
        const char *VAR_1 = ((void*)0);

 FUNC_0();

 if (VAR_0->v_name)
         VAR_1 = FUNC_3(VAR_0->v_name, FUNC_2(VAR_0->v_name), 0, 0);
 FUNC_1();

 return (VAR_1);
}
