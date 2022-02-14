
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {scalar_t__ open; struct cm4000_dev* priv; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct cm4000_dev {int devq; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct cm4000_dev*,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (struct cm4000_dev*) ;
 struct pcmcia_device** VAR_2 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct cm4000_dev*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_3, struct file *VAR_4)
{
 struct cm4000_dev *VAR_5;
 struct pcmcia_device *VAR_6;
 int VAR_7 = FUNC_3(VAR_3);

 if (VAR_7 >= VAR_0)
  return -VAR_1;

 VAR_6 = VAR_2[VAR_7];
 if (VAR_6 == ((void*)0))
  return -VAR_1;

 VAR_5 = VAR_6->priv;

 FUNC_0(2, VAR_5, "-> cmm_close(maj/min=%d.%d)\n",
        FUNC_2(VAR_3), VAR_7);

 FUNC_4(VAR_5);

 FUNC_1(VAR_5);

 VAR_6->open = 0;
 FUNC_5(&VAR_5->devq);

 FUNC_0(2, VAR_5, "cmm_close\n");
 return 0;
}
