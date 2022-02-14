
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32_t ;
typedef int (* sys_timeout_handler ) (void*) ;
typedef int sys_sem_t ;
struct sys_timeouts {struct sys_timeout* next; } ;
struct sys_timeout {scalar_t__ time; void* arg; int (* h ) (void*) ;struct sys_timeout* next; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct sys_timeout*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 struct sys_timeouts* FUNC_3 () ;

void
FUNC_4(sys_sem_t VAR_3)
{
  u32_t VAR_4;
  struct sys_timeouts *VAR_5;
  struct sys_timeout *VAR_6;
  sys_timeout_handler VAR_7;
  void *VAR_8;




 again:

  VAR_5 = FUNC_3();

  if (!VAR_5 || !VAR_5->next) {
    FUNC_2(VAR_3, 0);
  } else {
    if (VAR_5->next->time > 0) {
      VAR_4 = FUNC_2(VAR_3, VAR_5->next->time);
    } else {
      VAR_4 = VAR_1;
    }

    if (VAR_4 == VAR_1) {



      VAR_6 = VAR_5->next;
      VAR_5->next = VAR_6->next;
      VAR_7 = VAR_6->h;
      VAR_8 = VAR_6->arg;
      FUNC_1(VAR_0, VAR_6);
      if (VAR_7 != ((void*)0)) {
        FUNC_0(VAR_2, ("ssw h=%p(%p)\n", (void )VAR_7, (void *)VAR_8));
        VAR_7(VAR_8);
      }


      goto again;
    } else {



      if (VAR_4 <= VAR_5->next->time) {
  VAR_5->next->time -= VAR_4;
      } else {
  VAR_5->next->time = 0;
      }
    }

  }
}
