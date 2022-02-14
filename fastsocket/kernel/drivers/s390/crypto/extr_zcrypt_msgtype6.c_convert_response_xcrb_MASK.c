
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct zcrypt_device {int online; } ;
struct TYPE_6__ {int cprb_ver_id; } ;
struct TYPE_5__ {int apfs; } ;
struct TYPE_4__ {int reply_code; } ;
struct type86x_reply {TYPE_3__ cprbx; TYPE_2__ fmt2; TYPE_1__ hdr; } ;
struct ica_xcRB {int status; } ;
struct ap_message {struct type86x_reply* message; } ;


 int VAR_0 ;



 int FUNC_0 (struct zcrypt_device*,struct ap_message*) ;
 int FUNC_1 (struct zcrypt_device*,struct ap_message*,struct ica_xcRB*) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct zcrypt_device *VAR_1,
       struct ap_message *VAR_2,
       struct ica_xcRB *VAR_3)
{
 struct type86x_reply *VAR_4 = VAR_2->message;


 switch (((unsigned char *) VAR_2->message)[1]) {
 case 130:
 case 128:
  VAR_3->status = 0x0008044DL;
  return FUNC_0(VAR_1, VAR_2);
 case 129:
  if (VAR_4->hdr.reply_code) {
   FUNC_2(&(VAR_3->status), VAR_4->fmt2.apfs, sizeof(u32));
   return FUNC_0(VAR_1, VAR_2);
  }
  if (VAR_4->cprbx.cprb_ver_id == 0x02)
   return FUNC_1(VAR_1, VAR_2, VAR_3);


 default:
  VAR_3->status = 0x0008044DL;
  VAR_1->online = 0;
  return -VAR_0;
 }
}
