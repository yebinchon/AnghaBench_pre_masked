
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iscsi_iface_param_info {int param; int* value; } ;
struct beiscsi_hba {int ipv4_iface; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;
 int FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (struct beiscsi_hba*,int ,int ,char*,int) ;
 int FUNC_2 (struct Scsi_Host*,struct iscsi_iface_param_info*,void*,int ) ;
 int FUNC_3 (struct Scsi_Host*,struct iscsi_iface_param_info*) ;
 int FUNC_4 (int ) ;
 struct beiscsi_hba* FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (struct beiscsi_hba*,struct iscsi_iface_param_info*) ;
 int FUNC_7 (struct beiscsi_hba*,struct iscsi_iface_param_info*,int *,int) ;

__attribute__((used)) static int
FUNC_8(struct Scsi_Host *VAR_5,
  struct iscsi_iface_param_info *VAR_6,
  void *VAR_7, uint32_t VAR_8)
{
 struct beiscsi_hba *VAR_9 = FUNC_5(VAR_5);
 int VAR_10 = 0;


 switch (VAR_6->param) {
 case 131:
  VAR_10 = FUNC_6(VAR_9, VAR_6);
  break;
 case 132:
  if (VAR_6->value[0] == VAR_1)
   VAR_10 = FUNC_7(VAR_9, VAR_6,
     ((void*)0), VAR_1);
  else if (VAR_6->value[0] == VAR_2)
   VAR_10 = FUNC_2(VAR_5, VAR_6,
          VAR_7, VAR_8);
  else
   FUNC_1(VAR_9, VAR_4, VAR_0,
        "BS_%d : Invalid BOOTPROTO: %d\n",
        VAR_6->value[0]);
  break;
 case 134:
  if (VAR_6->value[0] == VAR_3)
   VAR_10 = FUNC_0(VAR_9);
  else
   FUNC_4(VAR_9->ipv4_iface);
  break;
 case 130:
 case 133:
  VAR_10 = FUNC_2(VAR_5, VAR_6,
         VAR_7, VAR_8);
  break;
 case 129:
 case 128:
  VAR_10 = FUNC_3(VAR_5, VAR_6);
  break;
 default:
  FUNC_1(VAR_9, VAR_4, VAR_0,
       "BS_%d : Param %d not supported\n",
       VAR_6->param);
 }

 return VAR_10;
}
