
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int user_addr_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int thread_t ;
struct uthread {int * uu_kqr_bound; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_3__ {int p_flag; int p_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*,int ,size_t) ;
 int FUNC_2 () ;
 struct uthread* FUNC_3 (int ) ;
 int FUNC_4 (char*,int,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(proc_t VAR_2, thread_t VAR_3)
{
 uint64_t VAR_4;
 bool VAR_5 = !!(VAR_2->p_flag & VAR_0);
 size_t VAR_6 = VAR_5 ? 8 : 4;
 uint32_t VAR_7 = 0;
 uint64_t VAR_8 = 0;
 struct uthread *VAR_9 = FUNC_3(VAR_3);

 if (VAR_9->uu_kqr_bound != ((void*)0)) {
  VAR_8 |= VAR_1;
 }

 if (VAR_8 == 0) {
  return;
 }

 if (!(VAR_2->p_flag & VAR_0)) {
  VAR_7 = (uint32_t)VAR_8;
  FUNC_0(VAR_8 < 0x100000000ull);
 }

 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4 == 0) {
  return;
 }

 if (FUNC_1((VAR_5 ? (void *)&VAR_8 : (void *)&VAR_7),
             (user_addr_t)VAR_4,
             VAR_6) != 0) {
  FUNC_4("pid %d (tid:%llu): copyout of return_to_kernel ast flags failed with "
         "ast_addr = %llu\n", VAR_2->p_pid, FUNC_6(FUNC_2()), VAR_4);
 }
}
