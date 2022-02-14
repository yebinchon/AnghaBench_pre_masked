
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ref; } ;
struct request_queue {TYPE_1__ bsg_dev; } ;
struct bsg_device {int flags; int name; int dev_list; int ref_count; struct request_queue* queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct bsg_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct bsg_device*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct bsg_device *VAR_3)
{
 int VAR_4 = 0, VAR_5;
 struct request_queue *VAR_6 = VAR_3->queue;

 FUNC_7(&VAR_2);

 VAR_5 = FUNC_0(&VAR_3->ref_count);
 if (!VAR_5) {
  FUNC_8(&VAR_2);
  goto out;
 }

 FUNC_4(&VAR_3->dev_list);
 FUNC_8(&VAR_2);

 FUNC_3("%s: tearing down\n", VAR_3->name);




 FUNC_9(VAR_0, &VAR_3->flags);






 VAR_4 = FUNC_2(VAR_3);

 FUNC_5(VAR_3);
out:
 FUNC_6(&VAR_6->bsg_dev.ref, VAR_1);
 if (VAR_5)
  FUNC_1(VAR_6);
 return VAR_4;
}
