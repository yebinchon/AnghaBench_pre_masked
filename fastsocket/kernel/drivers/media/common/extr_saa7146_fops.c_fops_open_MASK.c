
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct video_device {scalar_t__ vfl_type; } ;
struct saa7146_fh {int type; struct saa7146_dev* dev; } ;
struct saa7146_dev {TYPE_3__* ext; TYPE_2__* ext_vv_data; } ;
struct file {struct saa7146_fh* private_data; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_10__ {int (* open ) (struct saa7146_dev*,struct file*) ;} ;
struct TYPE_9__ {int (* open ) (struct saa7146_dev*,struct file*) ;} ;
struct TYPE_8__ {int module; } ;
struct TYPE_6__ {int (* open ) (struct file*) ;} ;
struct TYPE_7__ {int capabilities; TYPE_1__ vbi_fops; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct saa7146_fh*) ;
 struct saa7146_fh* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_9 ;
 TYPE_5__ VAR_10 ;
 TYPE_4__ VAR_11 ;
 int FUNC_7 (struct saa7146_dev*,struct file*) ;
 int FUNC_8 (struct file*) ;
 int FUNC_9 (struct saa7146_dev*,struct file*) ;
 scalar_t__ FUNC_10 (int ) ;
 struct video_device* FUNC_11 (struct file*) ;
 int FUNC_12 (struct video_device*) ;
 struct saa7146_dev* FUNC_13 (struct file*) ;

__attribute__((used)) static int FUNC_14(struct file *VAR_12)
{
 struct video_device *VAR_13 = FUNC_11(VAR_12);
 struct saa7146_dev *VAR_14 = FUNC_13(VAR_12);
 struct saa7146_fh *VAR_15 = ((void*)0);
 int VAR_16 = 0;

 enum v4l2_buf_type VAR_17;

 FUNC_1(("file:%p, dev:%s\n", VAR_12, FUNC_12(VAR_13)));

 if (FUNC_5(&VAR_9))
  return -VAR_3;

 FUNC_0(("using: %p\n",VAR_14));

 VAR_17 = VAR_13->vfl_type == VAR_8
      ? VAR_6
      : VAR_5;


 if( ((void*)0) == VAR_14->ext ) {
  FUNC_2(("no extension registered for this device.\n"));
  VAR_16 = -VAR_1;
  goto out;
 }


 VAR_15 = FUNC_4(sizeof(*VAR_15),VAR_4);
 if (((void*)0) == VAR_15) {
  FUNC_2(("cannot allocate memory for per open data.\n"));
  VAR_16 = -VAR_2;
  goto out;
 }

 VAR_12->private_data = VAR_15;
 VAR_15->dev = VAR_14;
 VAR_15->type = VAR_17;

 if( VAR_15->type == VAR_5) {
  FUNC_2(("initializing vbi...\n"));
  if (VAR_14->ext_vv_data->capabilities & VAR_7)
   VAR_16 = VAR_10.open(VAR_14,VAR_12);
  if (VAR_14->ext_vv_data->vbi_fops.open)
   VAR_14->ext_vv_data->vbi_fops.open(VAR_12);
 } else {
  FUNC_2(("initializing video...\n"));
  VAR_16 = VAR_11.open(VAR_14,VAR_12);
 }

 if (0 != VAR_16) {
  goto out;
 }

 if( 0 == FUNC_10(VAR_14->ext->module)) {
  VAR_16 = -VAR_0;
  goto out;
 }

 VAR_16 = 0;
out:
 if (VAR_15 && VAR_16 != 0) {
  FUNC_3(VAR_15);
  VAR_12->private_data = ((void*)0);
 }
 FUNC_6(&VAR_9);
 return VAR_16;
}
