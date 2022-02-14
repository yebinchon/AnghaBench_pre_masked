
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_encoder_cmd {int cmd; int flags; } ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct ivtv {int i_flags; int capturing; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ivtv*) ;
 int FUNC_3 (struct ivtv_open_id*) ;
 int FUNC_4 (struct ivtv_open_id*,int) ;
 int FUNC_5 (struct ivtv*) ;
 int FUNC_6 (struct ivtv*,int ,int,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_5, void *VAR_6, struct v4l2_encoder_cmd *VAR_7)
{
 struct ivtv_open_id *VAR_8 = VAR_6;
 struct ivtv *VAR_9 = VAR_8->itv;


 switch (VAR_7->cmd) {
 case 129:
  FUNC_0("V4L2_ENC_CMD_START\n");
  VAR_7->flags = 0;
  return FUNC_3(VAR_8);

 case 128:
  FUNC_0("V4L2_ENC_CMD_STOP\n");
  VAR_7->flags &= VAR_4;
  FUNC_4(VAR_8, VAR_7->flags & VAR_4);
  return 0;

 case 131:
  FUNC_0("V4L2_ENC_CMD_PAUSE\n");
  VAR_7->flags = 0;

  if (!FUNC_1(&VAR_9->capturing))
   return -VAR_2;
  if (FUNC_8(VAR_3, &VAR_9->i_flags))
   return 0;

  FUNC_2(VAR_9);
  FUNC_6(VAR_9, VAR_0, 1, 0);
  break;

 case 130:
  FUNC_0("V4L2_ENC_CMD_RESUME\n");
  VAR_7->flags = 0;

  if (!FUNC_1(&VAR_9->capturing))
   return -VAR_2;

  if (!FUNC_7(VAR_3, &VAR_9->i_flags))
   return 0;

  FUNC_6(VAR_9, VAR_0, 1, 1);
  FUNC_5(VAR_9);
  break;
 default:
  FUNC_0("Unknown cmd %d\n", VAR_7->cmd);
  return -VAR_1;
 }

 return 0;
}
