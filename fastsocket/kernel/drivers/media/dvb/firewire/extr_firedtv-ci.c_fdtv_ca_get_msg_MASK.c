
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv_tuner_status {int ca_mmi; } ;
struct firedtv {int ca_last_command; int device; } ;


 int VAR_0 ;


 int FUNC_0 (struct firedtv*,struct firedtv_tuner_status*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct firedtv*,void*) ;
 int FUNC_3 (struct firedtv*,void*) ;
 int FUNC_4 (struct firedtv*,void*) ;

__attribute__((used)) static int FUNC_5(struct firedtv *VAR_1, void *VAR_2)
{
 struct firedtv_tuner_status VAR_3;
 int VAR_4;

 switch (VAR_1->ca_last_command) {
 case 129:
  VAR_4 = FUNC_2(VAR_1, VAR_2);
  break;
 case 128:
  VAR_4 = FUNC_4(VAR_1, VAR_2);
  break;
 default:
  if (FUNC_0(VAR_1, &VAR_3))
   VAR_4 = -VAR_0;
  else if (VAR_3.ca_mmi == 1)
   VAR_4 = FUNC_3(VAR_1, VAR_2);
  else {
   FUNC_1(VAR_1->device, "unhandled CA message 0x%08x\n",
     VAR_1->ca_last_command);
   VAR_4 = -VAR_0;
  }
 }
 VAR_1->ca_last_command = 0;
 return VAR_4;
}
