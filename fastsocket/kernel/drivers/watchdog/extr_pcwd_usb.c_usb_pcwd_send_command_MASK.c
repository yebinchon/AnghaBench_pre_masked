
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_pcwd_private {unsigned char cmd_command; unsigned char cmd_data_msb; unsigned char cmd_data_lsb; int cmd_received; int interface_number; int udev; int exists; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,unsigned char,unsigned char,unsigned char) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ,int ,int,int ,unsigned char*,int,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct usb_pcwd_private *VAR_3,
  unsigned char VAR_4, unsigned char *VAR_5, unsigned char *VAR_6)
{
 int VAR_7, VAR_8;
 unsigned char VAR_9[6];



 if ((!VAR_3) || (!VAR_3->exists))
  return -1;



 VAR_9[0] = VAR_4;
 VAR_9[1] = *VAR_5;
 VAR_9[2] = *VAR_6;
 VAR_9[3] = VAR_9[4] = VAR_9[5] = 0;

 FUNC_2("sending following data cmd=0x%02x msb=0x%02x lsb=0x%02x",
  VAR_9[0], VAR_9[1], VAR_9[2]);

 FUNC_1(&VAR_3->cmd_received, 0);

 if (FUNC_4(VAR_3->udev, FUNC_5(VAR_3->udev, 0),
   VAR_1, VAR_0,
   0x0200, VAR_3->interface_number, VAR_9, sizeof(VAR_9),
   VAR_2) != sizeof(VAR_9)) {
  FUNC_2("usb_pcwd_send_command: error in usb_control_msg for "
    "cmd 0x%x 0x%x 0x%x\n", VAR_4, *VAR_5, *VAR_6);
 }


 VAR_7 = 0;
 for (VAR_8 = 0; (VAR_8 < VAR_2) && (!VAR_7);
        VAR_8++) {
  FUNC_3(1);
  if (FUNC_0(&VAR_3->cmd_received))
   VAR_7 = 1;
 }

 if ((VAR_7) && (VAR_4 == VAR_3->cmd_command)) {

  *VAR_5 = VAR_3->cmd_data_msb;
  *VAR_6 = VAR_3->cmd_data_lsb;
 }

 return VAR_7;
}
