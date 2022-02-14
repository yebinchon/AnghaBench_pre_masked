
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ thread_qos_t ;
struct workqueue {scalar_t__ wq_fulfilled; scalar_t__* wq_thscheduled_count; } ;
struct TYPE_3__ {scalar_t__ fulfilled_snapshot; } ;
struct TYPE_4__ {TYPE_1__ uus_workq_park_data; } ;
struct uthread {TYPE_2__ uu_save; int uu_workq_pri; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct workqueue*,int,scalar_t__,scalar_t__,int ) ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static bool
FUNC_3(struct workqueue *VAR_4, struct uthread *VAR_5)
{
 thread_qos_t VAR_6 = FUNC_2(VAR_5->uu_workq_pri);

 if (VAR_6 >= VAR_0) {
  return 0;
 }

 uint32_t VAR_7 = VAR_5->uu_save.uus_workq_park_data.fulfilled_snapshot;
 if (VAR_4->wq_fulfilled == VAR_7) {
  return 0;
 }

 uint32_t VAR_8 = 0, VAR_9 = VAR_3[FUNC_1(VAR_6)];
 if (VAR_4->wq_fulfilled - VAR_7 > VAR_9) {

  FUNC_0(VAR_1, VAR_4, 1,
    VAR_4->wq_fulfilled, VAR_7, 0);
  return 1;
 }

 for (int VAR_10 = FUNC_1(VAR_6); VAR_10 < VAR_2; VAR_10++) {
  VAR_8 += VAR_4->wq_thscheduled_count[VAR_10];
 }
 if (VAR_9 <= VAR_8) {

  FUNC_0(VAR_1, VAR_4, 2,
    VAR_4->wq_fulfilled, VAR_7, 0);
  return 1;
 }

 return 0;
}
