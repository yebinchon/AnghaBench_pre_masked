
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int kobj; int request_fn; } ;
struct gendisk {struct request_queue* queue; } ;
struct device {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 struct device* FUNC_3 (struct gendisk*) ;
 int FUNC_4 (struct request_queue*) ;
 int FUNC_5 (int *,int ,char*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;

int FUNC_9(struct gendisk *VAR_3)
{
 int VAR_4;
 struct device *VAR_5 = FUNC_3(VAR_3);

 struct request_queue *VAR_6 = VAR_3->queue;

 if (FUNC_0(!VAR_6))
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_5(&VAR_6->kobj, FUNC_7(&VAR_5->kobj), "%s", "queue");
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_8(&VAR_6->kobj, VAR_1);

 if (!VAR_6->request_fn)
  return 0;

 VAR_4 = FUNC_4(VAR_6);
 if (VAR_4) {
  FUNC_8(&VAR_6->kobj, VAR_2);
  FUNC_6(&VAR_6->kobj);
  FUNC_2(FUNC_3(VAR_3));
  return VAR_4;
 }

 return 0;
}
