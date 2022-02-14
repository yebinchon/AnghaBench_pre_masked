
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef int host_info64_t ;
typedef int host_flavor_t ;
struct TYPE_6__ {scalar_t__ last_access; int current_requests; scalar_t__ max_requests; } ;
struct TYPE_5__ {int t_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 TYPE_3__* VAR_6 ;
 int FUNC_2 (int,int ,int *) ;
 int FUNC_3 (int,int ,int *,int *) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static bool
FUNC_8(bool VAR_10, host_flavor_t VAR_11, host_info64_t VAR_12, mach_msg_type_number_t* VAR_13, kern_return_t* VAR_14, int *VAR_15)
{
 task_t VAR_16 = FUNC_1();

 FUNC_0(VAR_16 != VAR_9);

 *VAR_14 = VAR_3;


 if (VAR_16->t_flags & VAR_4) {
  return VAR_0;
 }


 bool VAR_17 = VAR_0;
 bool VAR_18 = VAR_5;


 int VAR_19 = FUNC_3(VAR_10, VAR_11, VAR_13, VAR_14);
 if (VAR_19 == -1)
  goto out;

 *VAR_15 = VAR_19;
 FUNC_4(&VAR_7);
 if (VAR_6[VAR_19].last_access > FUNC_7() - VAR_8) {
  VAR_18 = VAR_0;
  if (VAR_6[VAR_19].current_requests++ >= VAR_6[VAR_19].max_requests) {
   VAR_17 = VAR_5;
   FUNC_2(VAR_19, VAR_12, VAR_13);
  }
 }
 if (VAR_18) {
  VAR_6[VAR_19].current_requests = 1;






  VAR_6[VAR_19].max_requests = (FUNC_6() % (VAR_1 - VAR_2 + 1)) + VAR_2;
  VAR_6[VAR_19].last_access = FUNC_7();
 }
 FUNC_5(&VAR_7);
out:
 return VAR_17;
}
