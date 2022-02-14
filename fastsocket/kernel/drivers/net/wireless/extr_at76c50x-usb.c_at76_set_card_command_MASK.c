
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;
struct at76_command {int data; int size; scalar_t__ reserved; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct at76_command*,int,char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct at76_command*) ;
 struct at76_command* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,void*,int) ;
 int FUNC_6 (struct usb_device*,int ,int,int,int ,int ,struct at76_command*,int,int ) ;
 int FUNC_7 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_8(struct usb_device *VAR_7, u8 VAR_8, void *VAR_9,
     int VAR_10)
{
 int VAR_11;
 struct at76_command *VAR_12 = FUNC_4(sizeof(struct at76_command) +
            VAR_10, VAR_2);

 if (!VAR_12)
  return -VAR_1;

 VAR_12->cmd = VAR_8;
 VAR_12->reserved = 0;
 VAR_12->size = FUNC_2(VAR_10);
 FUNC_5(VAR_12->data, VAR_9, VAR_10);

 FUNC_0(VAR_0, VAR_12, sizeof(struct at76_command) + VAR_10,
        "issuing command %s (0x%02x)",
        FUNC_1(VAR_8), VAR_8);

 VAR_11 = FUNC_6(VAR_7, FUNC_7(VAR_7, 0), 0x0e,
         VAR_6 | VAR_4 | VAR_5,
         0, 0, VAR_12,
         sizeof(struct at76_command) + VAR_10,
         VAR_3);
 FUNC_3(VAR_12);
 return VAR_11;
}
