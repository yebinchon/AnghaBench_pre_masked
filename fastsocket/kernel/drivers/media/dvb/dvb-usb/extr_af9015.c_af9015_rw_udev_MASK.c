
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;
struct req_t {int cmd; int i2c_addr; int addr; int mbox; int addr_len; int data_len; int* data; } ;


 size_t VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;

 size_t VAR_6 ;



 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int*,int,int (*) (char*)) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int*,int ,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct usb_device*,int ,int*,int,int*,int ) ;
 int FUNC_8 (struct usb_device*,int) ;
 int FUNC_9 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_10(struct usb_device *VAR_8, struct req_t *VAR_9)
{



 int VAR_10, VAR_11;
 u8 VAR_12[63];
 u8 VAR_13 = 1;
 u8 VAR_14 = 8;
 static u8 VAR_15;

 if (FUNC_5(&VAR_7) < 0)
  return -VAR_3;

 VAR_12[0] = VAR_9->cmd;
 VAR_12[1] = VAR_15++;
 VAR_12[2] = VAR_9->i2c_addr;
 VAR_12[3] = VAR_9->addr >> 8;
 VAR_12[4] = VAR_9->addr & 0xff;
 VAR_12[5] = VAR_9->mbox;
 VAR_12[6] = VAR_9->addr_len;
 VAR_12[7] = VAR_9->data_len;

 switch (VAR_9->cmd) {
 case 135:
 case 132:
 case 131:
 case 134:
  VAR_13 = 0;
  break;
 case 133:
  VAR_13 = 0;
  VAR_12[2] |= 0x01;
 case 130:
  VAR_12[0] = VAR_5;
  break;
 case 129:
  if (((VAR_9->addr & 0xff00) == 0xff00) ||
      ((VAR_9->addr & 0xff00) == 0xae00))
   VAR_12[0] = 128;
 case 128:
 case 137:
 case 136:
 case 138:
  break;
 default:
  FUNC_2("unknown command:%d", VAR_9->cmd);
  VAR_11 = -1;
  goto error_unlock;
 }


 if ((VAR_13 && (VAR_9->data_len > 63 - 8)) ||
  (!VAR_13 && (VAR_9->data_len > 63 - 2))) {
  FUNC_2("too much data; cmd:%d len:%d", VAR_9->cmd, VAR_9->data_len);
  VAR_11 = -VAR_4;
  goto error_unlock;
 }


 if (VAR_13) {
  FUNC_3(&VAR_12[8], VAR_9->data, VAR_9->data_len);
  VAR_14 += VAR_9->data_len;
 }

 FUNC_0(">>> ");
 FUNC_1(VAR_12, VAR_14, FUNC_0);


 VAR_11 = FUNC_7(VAR_8, FUNC_9(VAR_8, 0x02), VAR_12, VAR_14,
  &VAR_10, VAR_1);
 if (VAR_11)
  FUNC_2("bulk message failed:%d (%d/%d)", VAR_11, VAR_14, VAR_10);
 else
  if (VAR_10 != VAR_14)
   VAR_11 = -1;
 if (VAR_11)
  goto error_unlock;


 if (VAR_9->cmd == 136 || VAR_9->cmd == 131)
  goto exit_unlock;



 VAR_14 = 2;
 if (!VAR_13)
  VAR_14 += VAR_9->data_len;

 VAR_11 = FUNC_7(VAR_8, FUNC_8(VAR_8, 0x81), VAR_12, VAR_14,
  &VAR_10, VAR_1);
 if (VAR_11) {
  FUNC_2("recv bulk message failed:%d", VAR_11);
  VAR_11 = -1;
  goto error_unlock;
 }

 FUNC_0("<<< ");
 FUNC_1(VAR_12, VAR_10, FUNC_0);


 if (VAR_9->cmd == 134 && VAR_12[1] == 1) {
  VAR_12[1] = 0;
  FUNC_4(&VAR_12[2], 0, VAR_9->data_len);
  VAR_12[3] = 1;
 }


 if (VAR_12[1]) {
  FUNC_2("command failed:%d", VAR_12[1]);
  VAR_11 = -1;
  goto error_unlock;
 }


 if (!VAR_13)
  FUNC_3(VAR_9->data, &VAR_12[2], VAR_9->data_len);

error_unlock:
exit_unlock:
 FUNC_6(&VAR_7);

 return VAR_11;
}
