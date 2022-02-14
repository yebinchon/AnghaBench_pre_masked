
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct saa7146_format {int depth; } ;
struct TYPE_3__ {int width; int height; int sizeimage; int pixelformat; int field; scalar_t__ bytesperline; } ;
struct saa7146_fh {int video_q; TYPE_1__ video_fmt; } ;
struct saa7146_dev {int v4l2_lock; int slock; TYPE_2__* pci; } ;
struct saa7146_buf {int dummy; } ;
struct file {struct saa7146_fh* private_data; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct saa7146_format* FUNC_0 (struct saa7146_dev*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int *,int *,int *,int *,int ,int ,int,struct file*,int *) ;

__attribute__((used)) static int FUNC_2(struct saa7146_dev *VAR_5, struct file *VAR_6)
{
 struct saa7146_fh *VAR_7 = VAR_6->private_data;
 struct saa7146_format *VAR_8;

 VAR_7->video_fmt.width = 384;
 VAR_7->video_fmt.height = 288;
 VAR_7->video_fmt.pixelformat = VAR_3;
 VAR_7->video_fmt.bytesperline = 0;
 VAR_7->video_fmt.field = VAR_1;
 VAR_8 = FUNC_0(VAR_5,VAR_7->video_fmt.pixelformat);
 VAR_7->video_fmt.sizeimage = (VAR_7->video_fmt.width * VAR_7->video_fmt.height * VAR_8->depth)/8;

 FUNC_1(&VAR_7->video_q, &VAR_4,
       &VAR_5->pci->dev, &VAR_5->slock,
       VAR_0,
       VAR_2,
       sizeof(struct saa7146_buf),
       VAR_6, &VAR_5->v4l2_lock);

 return 0;
}
