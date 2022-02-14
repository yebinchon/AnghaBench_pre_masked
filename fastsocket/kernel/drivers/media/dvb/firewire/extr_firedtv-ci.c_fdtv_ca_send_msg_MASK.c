
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv {int ca_last_command; int device; } ;
struct ca_msg {int* msg; } ;


 int VAR_0 ;




 int FUNC_0 (struct firedtv*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct firedtv*,void*) ;

__attribute__((used)) static int FUNC_3(struct firedtv *VAR_1, void *VAR_2)
{
 struct ca_msg *VAR_3 = VAR_2;
 int VAR_4;


 VAR_1->ca_last_command =
  (VAR_3->msg[0] << 16) + (VAR_3->msg[1] << 8) + VAR_3->msg[2];
 switch (VAR_1->ca_last_command) {
 case 129:
  VAR_4 = FUNC_2(VAR_1, VAR_2);
  break;
 case 131:

  VAR_4 = 0;
  break;
 case 130:

  VAR_4 = 0;
  break;
 case 128:
  VAR_4 = FUNC_0(VAR_1);
  break;
 default:
  FUNC_1(VAR_1->device, "unhandled CA message 0x%08x\n",
   VAR_1->ca_last_command);
  VAR_4 = -VAR_0;
 }
 return VAR_4;
}
