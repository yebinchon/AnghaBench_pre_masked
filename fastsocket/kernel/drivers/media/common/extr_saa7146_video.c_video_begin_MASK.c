
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7146_vv {int video_status; struct saa7146_fh* video_fh; struct saa7146_fh* ov_suspend; } ;
struct saa7146_format {int flags; } ;
struct TYPE_2__ {int pixelformat; } ;
struct saa7146_fh {TYPE_1__ video_fmt; struct saa7146_dev* dev; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_4 (struct saa7146_dev*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 struct saa7146_format* FUNC_5 (struct saa7146_dev*,int ) ;
 int FUNC_6 (struct saa7146_fh*,unsigned int) ;
 int FUNC_7 (struct saa7146_fh*) ;
 int FUNC_8 (struct saa7146_fh*) ;
 int FUNC_9 (struct saa7146_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct saa7146_fh *VAR_9)
{
 struct saa7146_dev *VAR_10 = VAR_9->dev;
 struct saa7146_vv *VAR_11 = VAR_10->vv_data;
 struct saa7146_format *VAR_12 = ((void*)0);
 unsigned int VAR_13;
 int VAR_14 = 0, VAR_15 = 0;

 FUNC_2(("dev:%p, fh:%p\n",VAR_10,VAR_9));

 if ((VAR_11->video_status & VAR_7) != 0) {
  if (VAR_11->video_fh == VAR_9) {
   FUNC_3(("already capturing.\n"));
   return 0;
  }
  FUNC_3(("already capturing in another open.\n"));
  return -VAR_0;
 }

 if ((VAR_11->video_status & VAR_8) != 0) {
  FUNC_3(("warning: suspending overlay video for streaming capture.\n"));
  VAR_11->ov_suspend = VAR_11->video_fh;
  VAR_15 = FUNC_8(VAR_11->video_fh);
  if (0 != VAR_15) {
   FUNC_1(("suspending video failed. aborting\n"));
   return VAR_15;
  }
 }

 VAR_12 = FUNC_5(VAR_10,VAR_9->video_fmt.pixelformat);

 FUNC_0(((void*)0) == VAR_12);

 if (0 != (VAR_12->flags & VAR_1)) {
  VAR_13 = VAR_4|VAR_5|VAR_6;
 } else {
  VAR_13 = VAR_4;
 }

 VAR_14 = FUNC_6(VAR_9, VAR_13);
 if (0 == VAR_14) {
  FUNC_3(("cannot get capture resource %d\n",VAR_13));
  if (VAR_11->ov_suspend != ((void*)0)) {
   FUNC_7(VAR_11->ov_suspend);
   VAR_11->ov_suspend = ((void*)0);
  }
  return -VAR_0;
 }


 FUNC_9(VAR_10, VAR_3, VAR_2 );


 FUNC_4(VAR_10, VAR_2);

 VAR_11->video_fh = VAR_9;
 VAR_11->video_status = VAR_7;

 return 0;
}
