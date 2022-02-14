
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
typedef int user_addr_t ;
typedef int uint64_t ;
typedef int u_int64_t ;
typedef int u_int ;
struct TYPE_5__ {int stsy_return_type; int stsy_return; } ;
typedef TYPE_2__ systrace_sysent_t ;
typedef int dtrace_id_t ;
struct TYPE_4__ {int t_dtrace_errno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 unsigned short VAR_4 ;
 int FUNC_2 (int ,int,int,int,int,int ) ;
 int FUNC_3 (int ,int,int,int,int,int ) ;
 TYPE_2__* VAR_5 ;

void
FUNC_4(unsigned short VAR_6, int VAR_7, int *VAR_8)
{
 systrace_sysent_t *VAR_9;
 dtrace_id_t VAR_10;


 VAR_9 = (VAR_6 >= VAR_4) ? &VAR_5[VAR_3] : &VAR_5[VAR_6];

 if ((VAR_10 = VAR_9->stsy_return) != VAR_0) {
  uint64_t VAR_11, VAR_12;
     uthread_t VAR_13 = (uthread_t)FUNC_1(FUNC_0());

  if (VAR_13)
   VAR_13->t_dtrace_errno = VAR_7;




  if (VAR_7 == VAR_2) {
   VAR_11 = -1LL;
   VAR_12 = -1LL;
  } else if (VAR_7 != VAR_1) {
   if (VAR_7) {
    VAR_11 = -1LL;
    VAR_12 = -1LL;
   } else {
    switch (VAR_9->stsy_return_type) {
    case 134:
     VAR_11 = VAR_8[0];
     VAR_12 = VAR_8[1];
     break;
    case 128:
     VAR_11 = ((u_int)VAR_8[0]);
     VAR_12 = ((u_int)VAR_8[1]);
     break;
    case 132:
    case 129:
     VAR_11 = *(u_int64_t *)VAR_8;
     VAR_12 = 0LL;
     break;
    case 135:
    case 131:
    case 130:
     VAR_11 = *(user_addr_t *)VAR_8;
     VAR_12 = 0LL;
     break;
    case 133:
     VAR_11 = 0LL;
     VAR_12 = 0LL;
     break;
    default:
     VAR_11 = 0LL;
     VAR_12 = 0LL;
     break;
    }
   }
  } else {
   VAR_11 = 0LL;
   VAR_12 = 0LL;
  }

  FUNC_3)(VAR_10, VAR_11, VAR_11, VAR_12, (uint64_t)VAR_7, 0);
 }
}
