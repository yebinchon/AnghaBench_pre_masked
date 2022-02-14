
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int changed; int gendisk; int array_sectors; int sync_thread; int thread; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (struct mddev*) ;
 int FUNC_1 (struct mddev*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct mddev*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct mddev *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2)
  goto out;
 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_1);
  goto out;
 }

 FUNC_5(VAR_1->thread);
 FUNC_5(VAR_1->sync_thread);

 FUNC_7(VAR_1->gendisk, VAR_1->array_sectors);
 FUNC_6(VAR_1->gendisk);
 VAR_1->changed = 1;
 FUNC_3(&FUNC_2(VAR_1->gendisk)->kobj, VAR_0);
out:
 return VAR_2;
}
