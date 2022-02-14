
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int open; struct cm4000_dev* priv; } ;
struct inode {int dummy; } ;
struct file {int f_flags; struct cm4000_dev* private_data; } ;
struct cm4000_dev {int mdelay; } ;
struct TYPE_2__ {int pid; int comm; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct cm4000_dev*,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct cm4000_dev*) ;
 TYPE_1__* VAR_6 ;
 struct pcmcia_device** VAR_7 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct inode*,struct file*) ;
 int FUNC_6 (struct pcmcia_device*) ;
 int FUNC_7 (struct cm4000_dev*) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_8, struct file *VAR_9)
{
 struct cm4000_dev *VAR_10;
 struct pcmcia_device *VAR_11;
 int VAR_12 = FUNC_3(VAR_8);
 int VAR_13;

 if (VAR_12 >= VAR_0)
  return -VAR_3;

 FUNC_4();
 VAR_11 = VAR_7[VAR_12];
 if (VAR_11 == ((void*)0) || !FUNC_6(VAR_11)) {
  VAR_13 = -VAR_3;
  goto out;
 }

 if (VAR_11->open) {
  VAR_13 = -VAR_2;
  goto out;
 }

 VAR_10 = VAR_11->priv;
 VAR_9->private_data = VAR_10;

 FUNC_0(2, VAR_10, "-> cmm_open(device=%d.%d process=%s,%d)\n",
       FUNC_2(VAR_8), VAR_12, VAR_6->comm, VAR_6->pid);





 FUNC_1(VAR_10);







 if (VAR_9->f_flags & VAR_4) {
  VAR_13 = -VAR_1;
  goto out;
 }

 VAR_10->mdelay = VAR_5;


 FUNC_7(VAR_10);

 VAR_11->open = 1;

 FUNC_0(2, VAR_10, "<- cmm_open\n");
 VAR_13 = FUNC_5(VAR_8, VAR_9);
out:
 FUNC_8();
 return VAR_13;
}
