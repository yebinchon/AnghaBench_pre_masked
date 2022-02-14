
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ubd {TYPE_4__* queue; int size; int lock; int sg; int restart; int * file; } ;
struct TYPE_8__ {struct ubd* queuedata; } ;
struct TYPE_7__ {int disk_name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int VAR_3 ;
 TYPE_1__** VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 struct ubd* VAR_7 ;
 int FUNC_7 (scalar_t__,int ,int,TYPE_1__**) ;
 int FUNC_8 (struct ubd*,int *) ;
 TYPE_1__** VAR_8 ;

__attribute__((used)) static int FUNC_9(int VAR_9, char **VAR_10)
{
 struct ubd *VAR_11 = &VAR_7[VAR_9];
 int VAR_12 = 0;

 if(VAR_11->file == ((void*)0))
  goto out;

 VAR_12 = FUNC_8(VAR_11, &VAR_11->size);
 if(VAR_12 < 0){
  *VAR_10 = "Couldn't determine size of device's file";
  goto out;
 }

 VAR_11->size = FUNC_1(VAR_11->size);

 FUNC_0(&VAR_11->restart);
 FUNC_6(VAR_11->sg, VAR_1);

 VAR_12 = -VAR_0;
 VAR_11->queue = FUNC_3(VAR_3, &VAR_11->lock);
 if (VAR_11->queue == ((void*)0)) {
  *VAR_10 = "Failed to initialize device queue";
  goto out;
 }
 VAR_11->queue->queuedata = VAR_11;

 FUNC_4(VAR_11->queue, VAR_1);
 VAR_12 = FUNC_7(VAR_2, VAR_11->size, VAR_9, &VAR_8[VAR_9]);
 if(VAR_12){
  *VAR_10 = "Failed to register device";
  goto out_cleanup;
 }

 if (VAR_6 != VAR_2)
  FUNC_7(VAR_6, VAR_11->size, VAR_9,
      &VAR_4[VAR_9]);





 if (VAR_5)
  FUNC_5(VAR_8[VAR_9]->disk_name);

 VAR_12 = 0;
out:
 return VAR_12;

out_cleanup:
 FUNC_2(VAR_11->queue);
 goto out;
}
