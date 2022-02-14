
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gendisk {int flags; TYPE_3__* queue; scalar_t__ minors; scalar_t__ first_minor; scalar_t__ major; int part0; } ;
struct backing_dev_info {TYPE_1__* dev; } ;
typedef int dev_t ;
struct TYPE_6__ {struct backing_dev_info backing_dev_info; } ;
struct TYPE_5__ {int kobj; int devt; } ;
struct TYPE_4__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct backing_dev_info*,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct gendisk*) ;
 int FUNC_8 (int ,scalar_t__,int *,int ,int ,struct gendisk*) ;
 int FUNC_9 (struct gendisk*) ;
 TYPE_2__* FUNC_10 (struct gendisk*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (struct gendisk*) ;
 int FUNC_12 (int *,int *,char*) ;

void FUNC_13(struct gendisk *VAR_4)
{
 struct backing_dev_info *VAR_5;
 dev_t VAR_6;
 int VAR_7;





 FUNC_2(VAR_4->minors && !(VAR_4->major || VAR_4->first_minor));
 FUNC_2(!VAR_4->minors && !(VAR_4->flags & VAR_0));

 VAR_4->flags |= VAR_1;

 VAR_7 = FUNC_5(&VAR_4->part0, &VAR_6);
 if (VAR_7) {
  FUNC_2(1);
  return;
 }
 FUNC_10(VAR_4)->devt = VAR_6;




 VAR_4->major = FUNC_0(VAR_6);
 VAR_4->first_minor = FUNC_1(VAR_6);


 VAR_5 = &VAR_4->queue->backing_dev_info;
 FUNC_4(VAR_5, FUNC_9(VAR_4));

 FUNC_8(FUNC_9(VAR_4), VAR_4->minors, ((void*)0),
       VAR_3, VAR_2, VAR_4);
 FUNC_11(VAR_4);
 FUNC_7(VAR_4);





 FUNC_3(FUNC_6(VAR_4->queue));

 VAR_7 = FUNC_12(&FUNC_10(VAR_4)->kobj, &VAR_5->dev->kobj,
       "bdi");
 FUNC_2(VAR_7);
}
