
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zcrypt_device {int online; } ;
struct TYPE_4__ {int cprb_ver_id; } ;
struct TYPE_3__ {int type; int reply_code; } ;
struct type86x_reply {TYPE_2__ cprbx; TYPE_1__ hdr; } ;
struct ap_message {struct type86x_reply* message; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct zcrypt_device*,struct ap_message*,char*) ;

__attribute__((used)) static int FUNC_1(struct zcrypt_device *VAR_2,
     struct ap_message *VAR_3,
     char *VAR_4)
{
 struct type86x_reply *VAR_5 = VAR_3->message;

 switch (VAR_5->hdr.type) {
 case 130:
 case 128:
  return -VAR_1;
 case 129:
  if (VAR_5->hdr.reply_code)
   return -VAR_1;
  if (VAR_5->cprbx.cprb_ver_id == 0x02)
   return FUNC_0(VAR_2, VAR_3, VAR_4);


 default:
  VAR_2->online = 0;
  return -VAR_0;
 }
}
