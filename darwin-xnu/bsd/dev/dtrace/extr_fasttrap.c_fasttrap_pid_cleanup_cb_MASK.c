
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timespec {int member_0; int member_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 unsigned int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (void (*) (),int *,int ,char*,struct timespec*) ;

__attribute__((used)) __attribute__((noreturn))
static void
FUNC_7(void)
{
 uint32_t VAR_5 = 0;
 FUNC_4(&VAR_3);
 FUNC_6(&FUNC_7, &VAR_3, VAR_2, "fasttrap_pid_cleanup_cb", ((void*)0));
 while (1) {
  unsigned int VAR_6 = 0;

  VAR_5 = FUNC_0(&VAR_4, 0);
  FUNC_5(&VAR_3);
  if (VAR_5 & VAR_0) {
   VAR_6 = FUNC_2();
  }
  if (VAR_5 & VAR_1) {
   FUNC_3();
  }
  FUNC_4(&VAR_3);

  FUNC_1();
  if (!VAR_4) {
   if (VAR_6 > 0) {
    struct timespec VAR_7 = {1, 0};
    FUNC_6(&FUNC_7, &VAR_3, VAR_2, "fasttrap_pid_cleanup_cb", &VAR_7);
   }
   else
    FUNC_6(&FUNC_7, &VAR_3, VAR_2, "fasttrap_pid_cleanup_cb", ((void*)0));
  }
 }

}
