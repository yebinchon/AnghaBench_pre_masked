
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32_t ;
typedef int (* sys_timeout_handler ) (void*) ;
typedef int sys_mbox_t ;
struct sys_timeouts {struct sys_timeout* next; } ;
struct sys_timeout {scalar_t__ time; void* arg; int (* h ) (void*) ;struct sys_timeout* next; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct sys_timeout*) ;
 scalar_t__ FUNC_2 (int ,void**,scalar_t__) ;
 struct sys_timeouts* FUNC_3 () ;

void
FUNC_4(sys_mbox_t VAR_3, void **VAR_4)
{
  u32_t VAR_5;
  struct sys_timeouts *VAR_6;
  struct sys_timeout *VAR_7;
  sys_timeout_handler VAR_8;
  void *VAR_9;

 again:
  VAR_6 = FUNC_3();

  if (!VAR_6 || !VAR_6->next) {
    FUNC_2(VAR_3, VAR_4, 0);
  } else {
    if (VAR_6->next->time > 0) {
      VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_6->next->time);
    } else {
      VAR_5 = VAR_1;
    }

    if (VAR_5 == VAR_1) {



      VAR_7 = VAR_6->next;
      VAR_6->next = VAR_7->next;
      VAR_8 = VAR_7->h;
      VAR_9 = VAR_7->arg;
      FUNC_1(VAR_0, VAR_7);
      if (VAR_8 != ((void*)0)) {
        FUNC_0(VAR_2, ("smf calling h=%p(%p)\n", (void )VAR_8, (void *)VAR_9));
       VAR_8(VAR_9);
      }


      goto again;
    } else {



      if (VAR_5 <= VAR_6->next->time) {
  VAR_6->next->time -= VAR_5;
      } else {
  VAR_6->next->time = 0;
      }
    }

  }
}
