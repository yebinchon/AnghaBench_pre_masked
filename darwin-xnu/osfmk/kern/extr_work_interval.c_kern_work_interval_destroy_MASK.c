
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_2__* thread_t ;
typedef int kern_return_t ;
struct TYPE_6__ {TYPE_1__* th_work_interval; } ;
struct TYPE_5__ {scalar_t__ wi_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *) ;

kern_return_t
FUNC_1(thread_t VAR_2, uint64_t VAR_3)
{
 if (VAR_3 == 0)
  return VAR_0;

 if (VAR_2->th_work_interval == ((void*)0) ||
     VAR_2->th_work_interval->wi_id != VAR_3) {

  return (VAR_0);
 }

 FUNC_0(VAR_2, ((void*)0));

 return VAR_1;
}
