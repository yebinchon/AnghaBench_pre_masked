
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ user_addr_t ;
struct TYPE_6__ {int sival_int; } ;
struct TYPE_7__ {TYPE_2__ size_equivalent; } ;
struct user_sigevent {void* sigev_notify_attributes; void* sigev_notify_function; TYPE_3__ sigev_value; int sigev_signo; int sigev_notify; } ;
struct TYPE_5__ {int sival_int; } ;
struct TYPE_8__ {int sival_int; TYPE_1__ size_equivalent; } ;
struct user64_sigevent {void* sigev_notify_attributes; void* sigev_notify_function; TYPE_4__ sigev_value; int sigev_signo; int sigev_notify; } ;
struct user32_sigevent {void* sigev_notify_attributes; void* sigev_notify_function; TYPE_4__ sigev_value; int sigev_signo; int sigev_notify; } ;
typedef int sigevent64 ;
typedef int sigevent32 ;
typedef int proc_t ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,struct user64_sigevent*,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(proc_t VAR_2, user_addr_t VAR_3, struct user_sigevent *VAR_4)
{
 int VAR_5 = 0;

 if (VAR_3 == VAR_1)
  goto out;
 if ( FUNC_2(VAR_2) ) {
  struct user64_sigevent VAR_6;

  VAR_5 = FUNC_1( VAR_3, &VAR_6, sizeof(VAR_6) );
  if ( VAR_5 == 0 ) {
   VAR_4->sigev_notify = VAR_6;
   VAR_4->sigev_signo = VAR_6;
   VAR_4->sigev_value.size_equivalent.sival_int = VAR_6;
   VAR_4->sigev_notify_function = VAR_6;
   VAR_4->sigev_notify_attributes = VAR_6;
  }

 } else {
  struct user32_sigevent VAR_7;

  VAR_5 = FUNC_1( VAR_3, &VAR_7, sizeof(VAR_7) );
  if ( VAR_5 == 0 ) {
   VAR_4->sigev_notify = VAR_7;
   VAR_4->sigev_signo = VAR_7;
   VAR_4->sigev_value.size_equivalent.sival_int = VAR_7;
   VAR_4->sigev_notify_function = FUNC_0(VAR_7);
   VAR_4->sigev_notify_attributes = FUNC_0(VAR_7);
  }
 }

 if ( VAR_5 != 0 ) {
  VAR_5 = VAR_0;
 }

out:
 return (VAR_5);
}
