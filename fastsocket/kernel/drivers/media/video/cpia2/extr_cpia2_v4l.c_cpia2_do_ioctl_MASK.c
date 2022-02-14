
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_window {int dummy; } ;
struct video_picture {int dummy; } ;
struct file {struct cpia2_fh* private_data; } ;
struct cpia2_fh {int prio; } ;
struct TYPE_3__ {int stream_mode; } ;
struct TYPE_4__ {TYPE_1__ camera_state; } ;
struct camera_data {int busy_lock; int streaming; int mmapped; TYPE_2__ params; int prio; int vw; int vp; int present; } ;
typedef enum v4l2_priority { ____Placeholder_v4l2_priority } v4l2_priority ;



 int FUNC_0 (char*,int ) ;
 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long FUNC_1 (struct camera_data*,int ) ;
 long FUNC_2 (struct camera_data*) ;
 long FUNC_3 (void*,struct camera_data*) ;
 long FUNC_4 (void*,struct camera_data*) ;
 long FUNC_5 (void*,struct camera_data*,struct file*) ;
 long FUNC_6 (void*,struct camera_data*) ;
 long FUNC_7 (void*,struct camera_data*) ;
 long FUNC_8 (void*,struct camera_data*) ;
 long FUNC_9 (void*) ;
 long FUNC_10 (void*,struct camera_data*) ;
 long FUNC_11 (void*,struct camera_data*) ;
 long FUNC_12 (unsigned int,void*,struct camera_data*) ;
 long FUNC_13 (void*,struct camera_data*,struct cpia2_fh*) ;
 long FUNC_14 (void*,struct camera_data*) ;
 long FUNC_15 (void*,struct camera_data*) ;
 long FUNC_16 (void*,struct camera_data*) ;
 long FUNC_17 (void*,struct camera_data*) ;
 long FUNC_18 (void*,struct camera_data*) ;
 long FUNC_19 (void*,struct camera_data*) ;
 long FUNC_20 (void*,struct camera_data*) ;
 long FUNC_21 (void*,struct camera_data*) ;
 long FUNC_22 (void*) ;
 long FUNC_23 (void*,struct camera_data*,struct cpia2_fh*) ;
 long FUNC_24 (void*,struct camera_data*) ;
 long FUNC_25 (void*,struct camera_data*) ;
 long FUNC_26 (void*,struct camera_data*,struct cpia2_fh*) ;
 long FUNC_27 (void*,struct camera_data*) ;
 long FUNC_28 (void*,struct camera_data*) ;
 int FUNC_29 (void*,int *,int) ;
 scalar_t__ FUNC_30 (int *) ;
 int FUNC_31 (int *) ;
 long FUNC_32 (int *,int*,int) ;
 long FUNC_33 (int *,int*) ;
 int FUNC_34 (int *) ;
 struct camera_data* FUNC_35 (struct file*) ;

__attribute__((used)) static long FUNC_36(struct file *VAR_8, unsigned int VAR_9, void *VAR_10)
{
 struct camera_data *VAR_11 = FUNC_35(VAR_8);
 long VAR_12 = 0;

 if (!VAR_11)
  return -VAR_4;


 if (FUNC_30(&VAR_11->busy_lock))
  return -VAR_5;

 if (!VAR_11->present) {
  FUNC_31(&VAR_11->busy_lock);
  return -VAR_2;
 }


 switch (VAR_9) {
 case 178:
 case 185:
 case 138:
 {
  struct cpia2_fh *VAR_13 = VAR_8->private_data;
  VAR_12 = FUNC_33(&VAR_11->prio, &VAR_13->prio);
  if(VAR_12) {
   FUNC_31(&VAR_11->busy_lock);
   return VAR_12;
  }
  break;
 }
 case 190:
 case 177:
 {
  struct cpia2_fh *VAR_14 = VAR_8->private_data;
  if(VAR_14->prio != VAR_7) {
   FUNC_31(&VAR_11->busy_lock);
   return -VAR_0;
  }
  break;
 }
 default:
  break;
 }

 switch (VAR_9) {
 case 194:
  VAR_12 = FUNC_3(VAR_10, VAR_11);
  break;

 case 193:
  VAR_12 = FUNC_9(VAR_10);
  break;
 case 183:
  VAR_12 = FUNC_22(VAR_10);
  break;
 case 189:
  FUNC_29(VAR_10, &VAR_11->vp, sizeof(struct video_picture));
  break;
 case 180:
  VAR_12 = FUNC_25(VAR_10, VAR_11);
  break;
 case 187:
  FUNC_29(VAR_10, &VAR_11->vw, sizeof(struct video_window));
  break;
 case 178:
  VAR_12 = FUNC_26(VAR_10, VAR_11, VAR_8->private_data);
  break;
 case 190:
  VAR_12 = FUNC_11(VAR_10, VAR_11);
  break;
 case 185:
  VAR_12 = FUNC_13(VAR_10, VAR_11, VAR_8->private_data);
  break;
 case 177:
  VAR_12 = FUNC_27(VAR_10, VAR_11);
  break;

 case 196:
 case 192:
 case 182:
 case 186:
  VAR_12 = -VAR_1;
  break;


 case 188:
 case 179:
 case 191:
 case 181:
  VAR_12 = -VAR_1;
  break;


 case 195:
 case 184:
  VAR_12 = -VAR_1;
  break;


 case 197:
  VAR_12 = FUNC_24(VAR_10, VAR_11);
  break;
 case 150:
  VAR_12 = FUNC_16(VAR_10,VAR_11);
  break;

 case 172:
 case 161:
 case 136:
  VAR_12 = FUNC_12(VAR_9, VAR_10, VAR_11);
  break;

 case 169:
  VAR_12 = FUNC_6(VAR_10,VAR_11);
  break;
 case 128:
  VAR_12 = FUNC_28(VAR_10,VAR_11);
  break;
 case 163:
  VAR_12 = FUNC_10(VAR_10,VAR_11);
  break;
 case 138:
  VAR_12 = FUNC_23(VAR_10,VAR_11,VAR_8->private_data);
  break;

 case 176:
  VAR_12 = FUNC_4(VAR_10,VAR_11);
  break;
 case 166:
 case 141:

  VAR_12 = -VAR_1;
  break;

 case 149:
  VAR_12 = FUNC_17(VAR_10,VAR_11);
  break;
 case 148:
  VAR_12 = FUNC_18(VAR_10,VAR_11);
  break;
 case 165:
  VAR_12 = FUNC_7(VAR_10,VAR_11);
  break;
 case 140:
  VAR_12 = FUNC_20(VAR_10,VAR_11);
  break;

 case 160:
  VAR_12 = FUNC_8(VAR_10,VAR_11);
  break;
 case 135:
  VAR_12 = FUNC_21(VAR_10,VAR_11);
  break;

 case 156:
 {
  struct cpia2_fh *VAR_15 = VAR_8->private_data;
  *(enum v4l2_priority*)VAR_10 = VAR_15->prio;
  break;
 }
 case 131:
 {
  struct cpia2_fh *VAR_16 = VAR_8->private_data;
  enum v4l2_priority VAR_17;
  VAR_17 = *(enum v4l2_priority*)VAR_10;
  if(VAR_11->streaming &&
     VAR_17 != VAR_16->prio &&
     VAR_16->prio == VAR_7) {

   VAR_12 = -VAR_0;
  } else if(VAR_17 == VAR_7 &&
     VAR_17 != VAR_16->prio &&
     FUNC_34(&VAR_11->prio) == VAR_7) {

   VAR_12 = -VAR_0;
  } else {
   VAR_12 = FUNC_32(&VAR_11->prio, &VAR_16->prio, VAR_17);
  }
  break;
 }

 case 146:
  VAR_12 = FUNC_19(VAR_10,VAR_11);
  break;
 case 151:
  VAR_12 = FUNC_15(VAR_10,VAR_11);
  break;
 case 152:
  VAR_12 = FUNC_14(VAR_10,VAR_11);
  break;
 case 175:
  VAR_12 = FUNC_5(VAR_10,VAR_11,VAR_8);
  break;
 case 144:
 {
  int VAR_18;
  FUNC_0("VIDIOC_STREAMON, streaming=%d\n", VAR_11->streaming);
  VAR_18 = *(int*)VAR_10;
  if(!VAR_11->mmapped || VAR_18 != VAR_6)
   VAR_12 = -VAR_1;

  if(!VAR_11->streaming) {
   VAR_12 = FUNC_1(VAR_11,
       VAR_11->params.camera_state.stream_mode);
  } else {
   VAR_12 = -VAR_1;
  }

  break;
 }
 case 145:
 {
  int VAR_19;
  FUNC_0("VIDIOC_STREAMOFF, streaming=%d\n", VAR_11->streaming);
  VAR_19 = *(int*)VAR_10;
  if(!VAR_11->mmapped || VAR_19 != VAR_6)
   VAR_12 = -VAR_1;

  if(VAR_11->streaming) {
   VAR_12 = FUNC_2(VAR_11);
  } else {
   VAR_12 = -VAR_1;
  }

  break;
 }

 case 171:
 case 158:
 case 133:
 case 159:
 case 134:

 case 174:
 case 168:
 case 143:

 case 173:
 case 167:
 case 142:

 case 170:
 case 147:
 case 155:
 case 130:

 case 154:
 case 129:
 case 162:
 case 137:

 case 153:
 case 164:
 case 139:

 case 157:
 case 132:
  VAR_12 = -VAR_1;
  break;
 default:
  VAR_12 = -VAR_3;
  break;
 }

 FUNC_31(&VAR_11->busy_lock);
 return VAR_12;
}
