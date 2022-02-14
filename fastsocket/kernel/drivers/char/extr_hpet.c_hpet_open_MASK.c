
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct hpets {int hp_ntimer; struct hpet_dev* hp_dev; struct hpets* hp_next; } ;
struct hpet_dev {int hd_flags; scalar_t__ hd_irqdata; } ;
struct file {int f_mode; struct hpet_dev* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hpet_dev*) ;
 struct hpets* VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_6, struct file *VAR_7)
{
 struct hpet_dev *VAR_8;
 struct hpets *VAR_9;
 int VAR_10;

 if (VAR_7->f_mode & VAR_2)
  return -VAR_1;

 FUNC_1();
 FUNC_2(&VAR_4);

 for (VAR_8 = ((void*)0), VAR_9 = VAR_5; VAR_9 && !VAR_8; VAR_9 = VAR_9->hp_next)
  for (VAR_10 = 0; VAR_10 < VAR_9->hp_ntimer; VAR_10++)
   if (VAR_9->hp_dev[VAR_10].hd_flags & VAR_3)
    continue;
   else {
    VAR_8 = &VAR_9->hp_dev[VAR_10];
    break;
   }

 if (!VAR_8) {
  FUNC_3(&VAR_4);
  FUNC_4();
  return -VAR_0;
 }

 VAR_7->private_data = VAR_8;
 VAR_8->hd_irqdata = 0;
 VAR_8->hd_flags |= VAR_3;
 FUNC_3(&VAR_4);
 FUNC_4();

 FUNC_0(VAR_8);

 return 0;
}
