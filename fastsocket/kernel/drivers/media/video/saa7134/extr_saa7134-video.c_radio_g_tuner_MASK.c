
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_tuner {scalar_t__ index; int signal; int rxsubchans; int type; int name; } ;
struct saa7134_fh {struct saa7134_dev* dev; } ;
struct saa7134_dev {TYPE_1__* input; } ;
struct file {struct saa7134_fh* private_data; } ;
struct TYPE_2__ {scalar_t__ amux; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct v4l2_tuner*,int ,int) ;
 int FUNC_1 (struct saa7134_dev*,int ,int ,struct v4l2_tuner*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(struct file *VAR_7, void *VAR_8,
     struct v4l2_tuner *VAR_9)
{
 struct saa7134_fh *VAR_10 = VAR_7->private_data;
 struct saa7134_dev *VAR_11 = VAR_10->dev;

 if (0 != VAR_9->index)
  return -VAR_0;

 FUNC_0(VAR_9, 0, sizeof(*VAR_9));
 FUNC_3(VAR_9->name, "Radio");
 VAR_9->type = VAR_2;

 FUNC_1(VAR_11, VAR_6, VAR_5, VAR_9);
 if (VAR_11->input->amux == VAR_1) {
  VAR_9->signal = 0xf800 - ((FUNC_2(0x581) & 0x1f) << 11);
  VAR_9->rxsubchans = (FUNC_2(0x529) & 0x08) ?
    VAR_4 : VAR_3;
 }
 return 0;
}
