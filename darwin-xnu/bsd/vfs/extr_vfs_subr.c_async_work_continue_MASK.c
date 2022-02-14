
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vnode_t ;
typedef int thread_continue_t ;
struct async_work_lst {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct async_work_lst*) ;
 scalar_t__ FUNC_1 (struct async_work_lst*) ;
 int VAR_1 ;
 int FUNC_2 (struct async_work_lst*,int ) ;
 int VAR_2 ;
 int FUNC_3 (char*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int*) ;
 int FUNC_5 (int ) ;
 struct async_work_lst VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) __attribute__((noreturn))
static void
FUNC_8(void)
{
 struct async_work_lst *VAR_4;
 int VAR_5;
 vnode_t VAR_6;

 VAR_4 = &VAR_3;

 for (;;) {

  FUNC_6();

  if ( FUNC_0(VAR_4) ) {
   FUNC_2(VAR_4, (VAR_1));

   FUNC_7();

   FUNC_5((thread_continue_t)FUNC_8);

   continue;
  }
  VAR_2++;

  VAR_6 = FUNC_1(VAR_4);

  VAR_6 = FUNC_4(VAR_6, 0, &VAR_5);

  if (VAR_6 != VAR_0)
   FUNC_3("found VBAD vp (%p) on async queue", VAR_6);
 }
}
