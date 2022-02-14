
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct driver_data {int * queue; TYPE_2__* disk; int index; int dd_flag; scalar_t__ mtip_svc_handler; TYPE_1__* port; } ;
struct TYPE_8__ {int kobj; } ;
struct TYPE_7__ {scalar_t__ queue; } ;
struct TYPE_6__ {int svc_wait; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_3__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ) ;
 struct kobject* FUNC_4 (int *) ;
 int FUNC_5 (struct kobject*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct driver_data*) ;
 int FUNC_8 (struct driver_data*) ;
 int FUNC_9 (struct driver_data*,struct kobject*) ;
 int FUNC_10 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct driver_data *VAR_4)
{
 struct kobject *VAR_5;

 if (VAR_4->mtip_svc_handler) {
  FUNC_11(VAR_1, &VAR_4->port->flags);
  FUNC_15(&VAR_4->port->svc_wait);
  FUNC_6(VAR_4->mtip_svc_handler);
 }


 if (FUNC_14(VAR_0, &VAR_4->dd_flag)) {
  VAR_5 = FUNC_4(&FUNC_2(VAR_4->disk)->kobj);
  if (VAR_5) {
   FUNC_9(VAR_4, VAR_5);
   FUNC_5(VAR_5);
  }
 }
 FUNC_7(VAR_4);





 if (VAR_4->disk) {
  if (VAR_4->disk->queue)
   FUNC_1(VAR_4->disk);
  else
   FUNC_10(VAR_4->disk);
 }

 FUNC_12(&VAR_3);
 FUNC_3(&VAR_2, VAR_4->index);
 FUNC_13(&VAR_3);

 FUNC_0(VAR_4->queue);
 VAR_4->disk = ((void*)0);
 VAR_4->queue = ((void*)0);


 FUNC_8(VAR_4);

 return 0;
}
