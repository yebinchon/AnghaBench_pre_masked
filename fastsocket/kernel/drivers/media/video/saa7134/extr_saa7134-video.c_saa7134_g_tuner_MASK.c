
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_tuner {scalar_t__ index; int capability; int rangehigh; int signal; int rxsubchans; int audmode; int type; int name; } ;
struct saa7134_fh {struct saa7134_dev* dev; } ;
struct saa7134_dev {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int * name; scalar_t__ tv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ FUNC_0 (struct saa7134_dev*,int) ;
 int FUNC_1 (struct v4l2_tuner*,int ,int) ;
 int FUNC_2 (struct saa7134_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_8, void *VAR_9,
     struct v4l2_tuner *VAR_10)
{
 struct saa7134_fh *VAR_11 = VAR_9;
 struct saa7134_dev *VAR_12 = VAR_11->dev;
 int VAR_13;

 if (0 != VAR_10->index)
  return -VAR_0;
 FUNC_1(VAR_10, 0, sizeof(*VAR_10));
 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  if (FUNC_0(VAR_12, VAR_13).tv)
   break;
 }
 if (VAR_13 == VAR_1)
  return -VAR_0;
 if (((void*)0) != FUNC_0(VAR_12, VAR_13).name) {
  FUNC_5(VAR_10->name, "Television");
  VAR_10->type = VAR_3;
  VAR_10->capability = VAR_6 |
   VAR_7 |
   VAR_4 |
   VAR_5;
  VAR_10->rangehigh = 0xffffffffUL;
  VAR_10->rxsubchans = FUNC_2(VAR_12);
  VAR_10->audmode = FUNC_3(VAR_10->rxsubchans);
 }
 if (0 != (FUNC_4(VAR_2) & 0x03))
  VAR_10->signal = 0xffff;
 return 0;
}
