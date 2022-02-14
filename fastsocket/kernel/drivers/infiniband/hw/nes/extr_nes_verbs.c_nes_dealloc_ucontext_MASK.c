
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nes_ucontext {int usecnt; } ;
struct ib_ucontext {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nes_ucontext*) ;
 struct nes_ucontext* FUNC_2 (struct ib_ucontext*) ;

__attribute__((used)) static int FUNC_3(struct ib_ucontext *VAR_0)
{


 struct nes_ucontext *VAR_1 = FUNC_2(VAR_0);

 if (!FUNC_0(&VAR_1->usecnt))
   return 0;
 FUNC_1(VAR_1);
 return 0;
}
