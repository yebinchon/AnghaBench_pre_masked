
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7134_fh {int prio; struct saa7134_dev* dev; } ;
struct saa7134_dev {int lock; int prio; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int * name; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__ FUNC_0 (struct saa7134_dev*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct saa7134_dev*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2, void *VAR_3, unsigned int VAR_4)
{
 struct saa7134_fh *VAR_5 = VAR_3;
 struct saa7134_dev *VAR_6 = VAR_5->dev;
 int VAR_7;

 VAR_7 = FUNC_3(&VAR_6->prio, VAR_5->prio);
 if (0 != VAR_7)
  return VAR_7;

 if (VAR_4 >= VAR_1)
  return -VAR_0;
 if (((void*)0) == FUNC_0(VAR_6, VAR_4).name)
  return -VAR_0;
 FUNC_1(&VAR_6->lock);
 FUNC_4(VAR_6, VAR_4);
 FUNC_2(&VAR_6->lock);
 return 0;
}
