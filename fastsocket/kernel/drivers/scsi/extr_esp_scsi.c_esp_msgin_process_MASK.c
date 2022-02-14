
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct esp_cmd_priv {int cur_residue; int tot_residue; int cur_sg; } ;
struct esp_cmd_entry {int message; int cmd; } ;
struct esp {int* msg_in; int msg_in_len; int* msg_out; int msg_out_len; int flags; struct esp_cmd_entry* active_cmd; } ;




 struct esp_cmd_priv* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int FUNC_1 (struct esp*,int ) ;
 int FUNC_2 (struct esp*) ;
 int FUNC_3 (struct esp*) ;
 int FUNC_4 (struct esp*,struct esp_cmd_entry*) ;
 int FUNC_5 (struct esp*,struct esp_cmd_entry*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct esp*,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct esp *VAR_3)
{
 u8 VAR_4 = VAR_3->msg_in[0];
 int VAR_5 = VAR_3->msg_in_len;

 if (VAR_4 & 0x80) {

  FUNC_6("ESP: Unexpected msgin identify\n");
  return 0;
 }

 switch (VAR_4) {
 case 133:
  if (VAR_5 == 1)
   return 1;
  if (VAR_5 < VAR_3->msg_in[1] + 2)
   return 1;
  FUNC_2(VAR_3);
  return 0;

 case 132: {
  struct esp_cmd_entry *VAR_6;
  struct esp_cmd_priv *VAR_7;
  if (VAR_5 == 1)
   return 1;

  if (VAR_3->msg_in[1] != 1)
   goto do_reject;

  VAR_6 = VAR_3->active_cmd;
  VAR_7 = FUNC_0(VAR_6->cmd);

  if (VAR_7->cur_residue == FUNC_8(VAR_7->cur_sg)) {
   VAR_7->cur_sg--;
   VAR_7->cur_residue = 1;
  } else
   VAR_7->cur_residue++;
  VAR_7->tot_residue++;
  return 0;
 }
 case 130:
  return 0;
 case 129:
  FUNC_4(VAR_3, VAR_3->active_cmd);
  return 0;
 case 128:
  FUNC_5(VAR_3, VAR_3->active_cmd);
  return 0;

 case 135:
 case 134: {
  struct esp_cmd_entry *VAR_8 = VAR_3->active_cmd;

  VAR_8->message = VAR_4;
  FUNC_1(VAR_3, VAR_1);
  VAR_3->flags |= VAR_2;
  return 0;
 }
 case 131:
  FUNC_3(VAR_3);
  return 0;

 default:
 do_reject:
  VAR_3->msg_out[0] = 131;
  VAR_3->msg_out_len = 1;
  FUNC_7(VAR_3, VAR_0);
  return 0;
 }
}
