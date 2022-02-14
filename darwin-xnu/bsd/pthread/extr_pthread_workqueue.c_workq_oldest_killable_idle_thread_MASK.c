
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct workqueue {int wq_thidlelist; } ;
struct TYPE_3__ {int has_stack; } ;
struct TYPE_4__ {TYPE_1__ uus_workq_park_data; } ;
struct uthread {TYPE_2__ uu_save; } ;


 struct uthread* FUNC_0 (int *,int ) ;
 struct uthread* FUNC_1 (struct uthread*,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline struct uthread *
FUNC_3(struct workqueue *VAR_2)
{
 struct uthread *VAR_3 = FUNC_0(&VAR_2->wq_thidlelist, VAR_1);

 if (VAR_3 && !VAR_3->uu_save.uus_workq_park_data.has_stack) {
  VAR_3 = FUNC_1(VAR_3, VAR_1, VAR_0);
  if (VAR_3) {
   FUNC_2(VAR_3->uu_save.uus_workq_park_data.has_stack);
  }
 }
 return VAR_3;
}
