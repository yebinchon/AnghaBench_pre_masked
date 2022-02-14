
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
struct user_ucontext32 {int uc_mcsize; scalar_t__ uc_mcontext; } ;
typedef struct user_ucontext32 mcontext32_t ;


 int VAR_0 ;

 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct user_ucontext32*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct user_ucontext32 *VAR_1, mcontext32_t *VAR_2, user_addr_t VAR_3)
{
 int VAR_4;

 FUNC_0(!FUNC_3(FUNC_2()));

 VAR_4 = FUNC_1(VAR_3, VAR_1, sizeof(*VAR_1));
 if (VAR_4) {
  return (VAR_4);
 }


 switch (VAR_1->uc_mcsize) {
 case 128:
  break;
 default:
  return (VAR_0);
 }

 FUNC_0(VAR_1->uc_mcsize == sizeof(*VAR_2));
 VAR_4 = FUNC_1((user_addr_t)VAR_1->uc_mcontext, VAR_2, VAR_1->uc_mcsize);
 if (VAR_4) {
  return (VAR_4);
 }

 return 0;
}
