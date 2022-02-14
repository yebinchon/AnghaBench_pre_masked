
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int ro; int open_mutex; int sysfs_state; int recovery; int gendisk; scalar_t__ pers; int openers; } ;
struct block_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mddev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct block_device*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct mddev *VAR_3, struct block_device *VAR_4)
{
 int VAR_5 = 0;
 FUNC_4(&VAR_3->open_mutex);
 if (FUNC_1(&VAR_3->openers) > !!VAR_4) {
  FUNC_6("md: %s still in use.\n",FUNC_3(VAR_3));
  VAR_5 = -VAR_0;
  goto out;
 }
 if (VAR_4)
  FUNC_8(VAR_4);
 if (VAR_3->pers) {
  FUNC_0(VAR_3);

  VAR_5 = -VAR_1;
  if (VAR_3->ro==1)
   goto out;
  VAR_3->ro = 1;
  FUNC_7(VAR_3->gendisk, 1);
  FUNC_2(VAR_2, &VAR_3->recovery);
  FUNC_9(VAR_3->sysfs_state);
  VAR_5 = 0;
 }
out:
 FUNC_5(&VAR_3->open_mutex);
 return VAR_5;
}
