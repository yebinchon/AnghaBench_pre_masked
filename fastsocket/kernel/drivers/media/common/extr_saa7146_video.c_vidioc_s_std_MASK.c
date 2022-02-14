
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct saa7146_vv {int video_status; TYPE_2__* standard; int * ov_suspend; int * video_fh; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {TYPE_1__* ext_vv_data; struct saa7146_vv* vv_data; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int id; int name; } ;
struct TYPE_3__ {int num_stds; int (* std_callback ) (struct saa7146_dev*,TYPE_2__*) ;TYPE_2__* stds; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct saa7146_dev*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4, void *VAR_5, v4l2_std_id *VAR_6)
{
 struct saa7146_dev *VAR_7 = ((struct saa7146_fh *)VAR_5)->dev;
 struct saa7146_vv *VAR_8 = VAR_7->vv_data;
 int VAR_9 = 0;
 int VAR_10, VAR_11;

 FUNC_1(("VIDIOC_S_STD\n"));

 if ((VAR_8->video_status & VAR_2) == VAR_2) {
  FUNC_0(("cannot change video standard while streaming capture is active\n"));
  return -VAR_0;
 }

 if ((VAR_8->video_status & VAR_3) != 0) {
  VAR_8->ov_suspend = VAR_8->video_fh;
  VAR_10 = FUNC_3(VAR_8->video_fh);
  if (0 != VAR_10) {
   FUNC_0(("suspending video failed. aborting\n"));
   return VAR_10;
  }
 }

 for (VAR_11 = 0; VAR_11 < VAR_7->ext_vv_data->num_stds; VAR_11++)
  if (*VAR_6 & VAR_7->ext_vv_data->stds[VAR_11].id)
   break;
 if (VAR_11 != VAR_7->ext_vv_data->num_stds) {
  VAR_8->standard = &VAR_7->ext_vv_data->stds[VAR_11];
  if (((void*)0) != VAR_7->ext_vv_data->std_callback)
   VAR_7->ext_vv_data->std_callback(VAR_7, VAR_8->standard);
  VAR_9 = 1;
 }

 if (VAR_8->ov_suspend != ((void*)0)) {
  FUNC_2(VAR_8->ov_suspend);
  VAR_8->ov_suspend = ((void*)0);
 }

 if (!VAR_9) {
  FUNC_1(("VIDIOC_S_STD: standard not found.\n"));
  return -VAR_1;
 }

 FUNC_1(("VIDIOC_S_STD: set to standard to '%s'\n", VAR_8->standard->name));
 return 0;
}
