
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct saa7146_vv {int video_status; int * ov_suspend; struct saa7146_fh* video_fh; } ;
struct saa7146_format {int flags; } ;
struct TYPE_2__ {int pixelformat; } ;
struct saa7146_fh {TYPE_1__ video_fmt; struct saa7146_dev* dev; } ;
struct saa7146_dev {int slock; struct saa7146_vv* vv_data; } ;
struct file {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_3 (struct saa7146_dev*,int ) ;
 int VAR_11 ;
 struct saa7146_format* FUNC_4 (struct saa7146_dev*,int ) ;
 int FUNC_5 (struct saa7146_fh*,unsigned int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct saa7146_dev*,int ,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct saa7146_fh *VAR_12, struct file *VAR_13)
{
 struct saa7146_dev *VAR_14 = VAR_12->dev;
 struct saa7146_vv *VAR_15 = VAR_14->vv_data;
 struct saa7146_format *VAR_16 = ((void*)0);
 unsigned long VAR_17;
 unsigned int VAR_18;
 u32 VAR_19 = 0;
 FUNC_1(("dev:%p, fh:%p\n",VAR_14,VAR_12));

 if ((VAR_15->video_status & VAR_11) != VAR_11) {
  FUNC_2(("not capturing.\n"));
  return 0;
 }

 if (VAR_15->video_fh != VAR_12) {
  FUNC_2(("capturing, but in another open.\n"));
  return -VAR_0;
 }

 VAR_16 = FUNC_4(VAR_14,VAR_12->video_fmt.pixelformat);

 FUNC_0(((void*)0) == VAR_16);

 if (0 != (VAR_16->flags & VAR_1)) {
  VAR_18 = VAR_8|VAR_9|VAR_10;
  VAR_19 = VAR_4 | VAR_3 | VAR_2;
 } else {
  VAR_18 = VAR_8;
  VAR_19 = VAR_4;
 }
 FUNC_8(&VAR_14->slock,VAR_17);


 FUNC_7(VAR_14, VAR_7, VAR_6);


 FUNC_3(VAR_14, VAR_5);


 FUNC_7(VAR_14, VAR_7, VAR_19);

 FUNC_9(&VAR_14->slock, VAR_17);

 VAR_15->video_fh = ((void*)0);
 VAR_15->video_status = 0;

 FUNC_5(VAR_12, VAR_18);

 if (VAR_15->ov_suspend != ((void*)0)) {
  FUNC_6(VAR_15->ov_suspend);
  VAR_15->ov_suspend = ((void*)0);
 }

 return 0;
}
