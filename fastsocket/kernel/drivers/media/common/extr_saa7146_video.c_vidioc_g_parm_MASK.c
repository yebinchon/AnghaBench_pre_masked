
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int readbuffers; int timeperframe; } ;
struct TYPE_6__ {TYPE_2__ capture; } ;
struct v4l2_streamparm {TYPE_3__ parm; } ;
struct saa7146_vv {TYPE_1__* standard; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int id; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
  struct v4l2_streamparm *VAR_2)
{
 struct saa7146_dev *VAR_3 = ((struct saa7146_fh *)VAR_1)->dev;
 struct saa7146_vv *VAR_4 = VAR_3->vv_data;

 VAR_2->parm.capture.readbuffers = 1;
 FUNC_0(VAR_4->standard->id,
        &VAR_2->parm.capture.timeperframe);
 return 0;
}
