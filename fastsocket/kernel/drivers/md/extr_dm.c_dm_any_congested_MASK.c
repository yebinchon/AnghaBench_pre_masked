
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mapped_device {TYPE_2__* queue; int flags; } ;
struct dm_table {int dummy; } ;
struct TYPE_3__ {int state; } ;
struct TYPE_4__ {TYPE_1__ backing_dev_info; } ;


 int VAR_0 ;
 struct dm_table* FUNC_0 (struct mapped_device*) ;
 scalar_t__ FUNC_1 (struct mapped_device*) ;
 int FUNC_2 (struct dm_table*,int) ;
 int FUNC_3 (struct dm_table*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(void *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_2;
 struct mapped_device *VAR_4 = VAR_1;
 struct dm_table *VAR_5;

 if (!FUNC_4(VAR_0, &VAR_4->flags)) {
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5) {




   if (FUNC_1(VAR_4))
    VAR_3 = VAR_4->queue->backing_dev_info.state &
        VAR_2;
   else
    VAR_3 = FUNC_2(VAR_5, VAR_2);

   FUNC_3(VAR_5);
  }
 }

 return VAR_3;
}
