
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct driver_data {int index; int * queue; TYPE_2__* disk; TYPE_1__* pdev; } ;
struct TYPE_5__ {scalar_t__ queue; int disk_name; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct driver_data*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct driver_data *VAR_2)
{

 if (VAR_2->disk) {
  FUNC_2(&VAR_2->pdev->dev,
   "Shutting down %s ...\n", VAR_2->disk->disk_name);

  if (VAR_2->disk->queue) {
   FUNC_1(VAR_2->disk);
   FUNC_0(VAR_2->queue);
  } else
   FUNC_5(VAR_2->disk);
  VAR_2->disk = ((void*)0);
  VAR_2->queue = ((void*)0);
 }

 FUNC_6(&VAR_1);
 FUNC_3(&VAR_0, VAR_2->index);
 FUNC_7(&VAR_1);

 FUNC_4(VAR_2);
 return 0;
}
