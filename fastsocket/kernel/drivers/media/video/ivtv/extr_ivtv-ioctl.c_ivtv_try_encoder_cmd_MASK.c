
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_encoder_cmd {int cmd; int flags; } ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct ivtv {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;




 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3, struct v4l2_encoder_cmd *VAR_4)
{
 struct ivtv *VAR_5 = ((struct ivtv_open_id *)VAR_3)->itv;

 switch (VAR_4->cmd) {
 case 129:
  FUNC_0("V4L2_ENC_CMD_START\n");
  VAR_4->flags = 0;
  return 0;

 case 128:
  FUNC_0("V4L2_ENC_CMD_STOP\n");
  VAR_4->flags &= VAR_1;
  return 0;

 case 131:
  FUNC_0("V4L2_ENC_CMD_PAUSE\n");
  VAR_4->flags = 0;
  return 0;

 case 130:
  FUNC_0("V4L2_ENC_CMD_RESUME\n");
  VAR_4->flags = 0;
  return 0;
 default:
  FUNC_0("Unknown cmd %d\n", VAR_4->cmd);
  return -VAR_0;
 }
}
