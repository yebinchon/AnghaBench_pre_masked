
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int spl_t ;
typedef void* mach_timespec_t ;
typedef int event_t ;
typedef TYPE_2__* clock_t ;
typedef TYPE_3__* alarm_t ;
struct TYPE_8__ {void* al_time; scalar_t__ al_status; struct TYPE_8__* al_prev; struct TYPE_8__* al_next; } ;
struct TYPE_7__ {TYPE_1__* cl_ops; } ;
struct TYPE_6__ {int (* c_gettime ) (void**) ;} ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (void**,void**) ;
 int FUNC_1 (int ) ;
 size_t VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 TYPE_2__* VAR_7 ;
 int FUNC_4 (void**) ;
 int FUNC_5 (void**) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(void)
{
 clock_t VAR_8;
 alarm_t VAR_9;
 alarm_t VAR_10;
 mach_timespec_t VAR_11;
 mach_timespec_t *VAR_12;
 spl_t VAR_13;

 VAR_8 = &VAR_7[VAR_3];
 (*VAR_8->cl_ops->c_gettime)(&VAR_11);





 FUNC_1(VAR_13);
 VAR_9 = (alarm_t)&VAR_6;
 while ((VAR_10 = VAR_9->al_next) != ((void*)0)) {
  VAR_12 = &VAR_10->al_time;
  if (FUNC_0(VAR_12, &VAR_11) > 0)
   break;





  if ((VAR_9->al_next = VAR_10->al_next) != ((void*)0))
   (VAR_9->al_next)->al_prev = VAR_9;





  if (VAR_10->al_status == VAR_2) {
   VAR_10->al_next = ((void*)0);
   VAR_10->al_status = VAR_1;
   VAR_10->al_time = VAR_11;
   FUNC_7((event_t)VAR_10);
  }






  else {
   FUNC_3(VAR_10->al_status == VAR_0);
   if ((VAR_10->al_next = VAR_5) != ((void*)0))
    VAR_5->al_prev = VAR_10;
   else
    FUNC_6(&VAR_4);
   VAR_10->al_prev = (alarm_t)&VAR_5;
   VAR_5 = VAR_10;
   VAR_10->al_status = VAR_1;
   VAR_10->al_time = VAR_11;
  }
 }




 if (VAR_10)
  FUNC_4(VAR_12);
 FUNC_2(VAR_13);
}
