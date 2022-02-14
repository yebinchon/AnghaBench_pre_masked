
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_usb_card {int udev; struct cmd_ds_command* ep_out_buf; } ;
struct cmd_header {int dummy; } ;
struct cmd_ds_command {void* seqnum; void* result; void* size; void* command; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct if_usb_card*,struct cmd_ds_command*,int) ;

__attribute__((used)) static int FUNC_9(struct if_usb_card *VAR_3)
{
 struct cmd_ds_command *VAR_4 = VAR_3->ep_out_buf + 4;
 int VAR_5;

 FUNC_3(VAR_2);

 *(__le32 *)VAR_3->ep_out_buf = FUNC_1(VAR_1);

 VAR_4->command = FUNC_0(VAR_0);
 VAR_4->size = FUNC_0(sizeof(struct cmd_header));
 VAR_4->result = FUNC_0(0);
 VAR_4->seqnum = FUNC_0(0x5a5a);
 FUNC_8(VAR_3, VAR_3->ep_out_buf, 4 + sizeof(struct cmd_header));

 FUNC_6(100);
 VAR_5 = FUNC_7(VAR_3->udev);
 FUNC_6(100);






 FUNC_4(VAR_2, "ret %d", VAR_5);

 return VAR_5;
}
