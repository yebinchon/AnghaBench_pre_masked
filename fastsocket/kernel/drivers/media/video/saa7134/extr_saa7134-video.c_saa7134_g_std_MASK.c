
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct saa7134_fh {struct saa7134_dev* dev; } ;
struct saa7134_dev {TYPE_1__* tvnorm; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int id; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0, void *VAR_1, v4l2_std_id *VAR_2)
{
 struct saa7134_fh *VAR_3 = VAR_1;
 struct saa7134_dev *VAR_4 = VAR_3->dev;

 *VAR_2 = VAR_4->tvnorm->id;
 return 0;
}
