
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint16_t ;
struct workqueue {scalar_t__ wq_thdying_count; int wq_thidlecount; } ;
struct TYPE_3__ {scalar_t__ idle_stamp; } ;
struct TYPE_4__ {TYPE_1__ uus_workq_park_data; } ;
struct uthread {TYPE_2__ uu_save; int uu_workq_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct workqueue*,int,int ,int ,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct workqueue*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct workqueue*) ;
 struct uthread* FUNC_5 (struct workqueue*) ;
 int FUNC_6 (struct uthread*) ;

__attribute__((used)) static void
FUNC_7(struct workqueue *VAR_3, uint16_t VAR_4)
{
 struct uthread *VAR_5;

 FUNC_1(VAR_3->wq_thdying_count >= VAR_4);
 if ((VAR_3->wq_thdying_count -= VAR_4) > 0)
  return;

 if (VAR_3->wq_thidlecount <= 1)
  return;

 if ((VAR_5 = FUNC_5(VAR_3)) == ((void*)0))
  return;

 uint64_t VAR_6 = FUNC_2();
 uint64_t VAR_7 = FUNC_4(VAR_3);

 if (VAR_6 - VAR_5->uu_save.uus_workq_park_data.idle_stamp > VAR_7) {
  FUNC_0(VAR_1 | VAR_0,
    VAR_3, VAR_3->wq_thidlecount, 0, 0, 0);
  VAR_3->wq_thdying_count++;
  VAR_5->uu_workq_flags |= VAR_2;
  FUNC_6(VAR_5);
  return;
 }

 FUNC_3(VAR_3,
   VAR_5->uu_save.uus_workq_park_data.idle_stamp + VAR_7);
}
