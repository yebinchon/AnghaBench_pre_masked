
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vnode_t ;
struct bufhashhdr {int dummy; } ;
typedef int daddr64_t ;
typedef TYPE_1__* buf_t ;
struct TYPE_4__ {scalar_t__ b_shadow_ref; int b_lflags; } ;


 int VAR_0 ;
 struct bufhashhdr* FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int ,int ,struct bufhashhdr*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ,int,char*,int *) ;

void
FUNC_6(vnode_t VAR_4, daddr64_t VAR_5)
{
 buf_t VAR_6;
 struct bufhashhdr *VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_5);

 FUNC_3(VAR_3);

 for (;;) {
  if ((VAR_6 = FUNC_2(VAR_4, VAR_5, VAR_7)) == ((void*)0))
   break;

  if (VAR_6->b_shadow_ref == 0)
   break;

  FUNC_1(VAR_6->b_lflags, VAR_0);

  (void) FUNC_5(VAR_6, VAR_3, VAR_2 | (VAR_1+1), "buf_wait_for_shadow", ((void*)0));
 }
 FUNC_4(VAR_3);
}
