
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct saa7134_fh* read_buf; } ;
struct saa7134_fh {int prio; int pt_vbi; int pt_cap; TYPE_1__ vbi; TYPE_1__ cap; scalar_t__ radio; struct saa7134_dev* dev; } ;
struct saa7134_dev {int prio; int pci; int slock; } ;
struct saa6588_command {int dummy; } ;
struct file {struct saa7134_fh* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,struct saa7134_fh*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct saa7134_fh*) ;
 scalar_t__ FUNC_2 (struct saa7134_fh*,int ) ;
 int FUNC_3 (struct saa7134_dev*,struct saa7134_fh*,int ) ;
 int VAR_10 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (struct saa7134_dev*,int ,int ,int ,...) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct saa7134_dev*,struct saa7134_fh*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_14(struct file *VAR_11)
{
 struct saa7134_fh *VAR_12 = VAR_11->private_data;
 struct saa7134_dev *VAR_13 = VAR_12->dev;
 struct saa6588_command VAR_14;
 unsigned long VAR_15;


 if (FUNC_2(VAR_12, VAR_0)) {
  FUNC_7(&VAR_13->slock,VAR_15);
  FUNC_9(VAR_13,VAR_12);
  FUNC_8(&VAR_13->slock,VAR_15);
  FUNC_3(VAR_13,VAR_12,VAR_0);
 }


 if (FUNC_2(VAR_12, VAR_2)) {
  FUNC_13(&VAR_12->cap);
  FUNC_3(VAR_13,VAR_12,VAR_2);
 }
 if (VAR_12->cap.read_buf) {
  FUNC_0(&VAR_12->cap,VAR_12->cap.read_buf);
  FUNC_1(VAR_12->cap.read_buf);
 }


 if (FUNC_2(VAR_12, VAR_1)) {
  FUNC_12(&VAR_12->vbi);
  FUNC_3(VAR_13,VAR_12,VAR_1);
 }


 FUNC_5(VAR_6, 0x1f, 0);
 FUNC_5(VAR_7, 0x1f, 0);
 FUNC_5(VAR_4, 0x1f, 0);
 FUNC_5(VAR_5, 0x1f, 0);

 FUNC_6(VAR_13, VAR_8, VAR_10, 0);
 if (VAR_12->radio)
  FUNC_6(VAR_13, VAR_8, VAR_9, VAR_3, &VAR_14);


 FUNC_11(&VAR_12->cap);
 FUNC_11(&VAR_12->vbi);
 FUNC_4(VAR_13->pci,&VAR_12->pt_cap);
 FUNC_4(VAR_13->pci,&VAR_12->pt_vbi);

 FUNC_10(&VAR_13->prio, VAR_12->prio);
 VAR_11->private_data = ((void*)0);
 FUNC_1(VAR_12);
 return 0;
}
