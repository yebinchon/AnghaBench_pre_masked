
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct iscsi_iface_param_info {int param; int * value; } ;
struct beiscsi_hba {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*,...) ;
 struct beiscsi_hba* FUNC_1 (struct Scsi_Host*) ;
 scalar_t__ FUNC_2 (struct beiscsi_hba*) ;
 int FUNC_3 (struct beiscsi_hba*,int ) ;

__attribute__((used)) static int
FUNC_4(struct Scsi_Host *VAR_7,
        struct iscsi_iface_param_info *VAR_8)
{
 struct beiscsi_hba *VAR_9 = FUNC_1(VAR_7);
 int VAR_10 = 0;


 if (FUNC_2(VAR_9)) {
  FUNC_0(VAR_9, VAR_5, VAR_0,
       "BS_%d : Getting Interface Handle Failed\n");
  return -VAR_2;
 }

 switch (VAR_8->param) {
 case 129:
  if (VAR_8->value[0] != VAR_4)
   VAR_10 = FUNC_3(VAR_9, VAR_1);
  break;
 case 128:
  VAR_10 = FUNC_3(VAR_9,
        *((uint16_t *)VAR_8->value));
  break;
 default:
  FUNC_0(VAR_9, VAR_6, VAR_0,
       "BS_%d : Unkown Param Type : %d\n",
       VAR_8->param);
  return -VAR_3;
 }
 return VAR_10;
}
