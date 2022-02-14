
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct if_usb_card {int udev; struct cmd_ds_802_11_reset* ep_out_buf; } ;
struct TYPE_2__ {void* seqnum; void* result; void* size; void* command; } ;
struct cmd_ds_802_11_reset {void* action; TYPE_1__ hdr; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct if_usb_card*,struct cmd_ds_802_11_reset*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct if_usb_card *VAR_4)
{
 struct cmd_ds_802_11_reset *VAR_5 = VAR_4->ep_out_buf + 4;
 int VAR_6;

 FUNC_2(VAR_3);

 *(__le32 *)VAR_4->ep_out_buf = FUNC_1(VAR_2);

 VAR_5->hdr.command = FUNC_0(VAR_0);
 VAR_5->hdr.size = FUNC_0(sizeof(struct cmd_ds_802_11_reset));
 VAR_5->hdr.result = FUNC_0(0);
 VAR_5->hdr.seqnum = FUNC_0(0x5a5a);
 VAR_5->action = FUNC_0(VAR_1);
 FUNC_6(VAR_4, VAR_4->ep_out_buf,
       4 + sizeof(struct cmd_ds_802_11_reset), 0);

 FUNC_4(100);
 VAR_6 = FUNC_5(VAR_4->udev);
 FUNC_4(100);

 FUNC_3(VAR_3, "ret %d", VAR_6);

 return VAR_6;
}
