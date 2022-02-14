
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_input {unsigned int index; int audioset; int std; int status; int type; int name; } ;
struct saa7134_fh {struct saa7134_dev* dev; } ;
struct saa7134_dev {unsigned int ctl_input; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ tv; int * name; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__ FUNC_0 (struct saa7134_dev*,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_10, void *VAR_11,
     struct v4l2_input *VAR_12)
{
 struct saa7134_fh *VAR_13 = VAR_11;
 struct saa7134_dev *VAR_14 = VAR_13->dev;
 unsigned int VAR_15;

 VAR_15 = VAR_12->index;
 if (VAR_15 >= VAR_1)
  return -VAR_0;
 if (((void*)0) == FUNC_0(VAR_14, VAR_12->index).name)
  return -VAR_0;
 VAR_12->index = VAR_15;
 VAR_12->type = VAR_5;
 FUNC_2(VAR_12->name, FUNC_0(VAR_14, VAR_15).name);
 if (FUNC_0(VAR_14, VAR_15).tv)
  VAR_12->type = VAR_6;
 VAR_12->audioset = 1;
 if (VAR_15 == VAR_14->ctl_input) {
  int VAR_16 = FUNC_1(VAR_3);
  int VAR_17 = FUNC_1(VAR_4);

  if (0 != (VAR_16 & 0x40))
   VAR_12->status |= VAR_8;
  if (0 != (VAR_17 & 0x40))
   VAR_12->status |= VAR_9;
  if (0 != (VAR_17 & 0x0e))
   VAR_12->status |= VAR_7;
 }
 VAR_12->std = VAR_2;
 return 0;
}
