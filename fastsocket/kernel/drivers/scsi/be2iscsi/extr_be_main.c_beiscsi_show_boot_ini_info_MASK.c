
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* initiator_iscsiname; } ;
struct beiscsi_hba {TYPE_1__ boot_sess; } ;
typedef int ssize_t ;


 int VAR_0 ;

 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(void *VAR_1, int VAR_2, char *VAR_3)
{
 struct beiscsi_hba *VAR_4 = VAR_1;
 char *VAR_5 = VAR_3;
 int VAR_6;

 switch (VAR_2) {
 case 128:
  VAR_6 = FUNC_0(VAR_5, "%s\n", VAR_4->boot_sess.initiator_iscsiname);
  break;
 default:
  VAR_6 = -VAR_0;
  break;
 }
 return VAR_6;
}
