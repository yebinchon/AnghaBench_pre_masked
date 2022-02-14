
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef TYPE_1__* proc_t ;
typedef scalar_t__ pid_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {scalar_t__ p_pid; int task; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(proc_t VAR_12, void * VAR_13)
{
 uint32_t VAR_14 = *(uint32_t *)VAR_13;
 pid_t VAR_15 = VAR_12->p_pid;
 boolean_t VAR_16 = (VAR_14 == VAR_6)? VAR_11 : VAR_2;

 if (VAR_15 == 0) {
  return VAR_3;
 }

 if (VAR_16) {
  FUNC_0(FUNC_1(VAR_1, VAR_5) | VAR_0, VAR_15, 0, 0, 0, 0);
 } else {
  FUNC_0(FUNC_1(VAR_1, VAR_4) | VAR_0, VAR_15, 0, 0, 0, 0);
 }

 FUNC_2(VAR_12->task,
                      VAR_7, VAR_10,
                      VAR_16 ? VAR_9 : VAR_8);

 return VAR_3;
}
