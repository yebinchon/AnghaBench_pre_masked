
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iscsi_iface_param_info {int param; int * value; } ;
struct beiscsi_hba {int ipv6_iface; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (struct beiscsi_hba*,int ,int ,char*,int) ;
 int FUNC_2 (int ) ;
 struct beiscsi_hba* FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (struct beiscsi_hba*,struct iscsi_iface_param_info*,int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct Scsi_Host *VAR_4,
  struct iscsi_iface_param_info *VAR_5,
  void *VAR_6, uint32_t VAR_7)
{
 struct beiscsi_hba *VAR_8 = FUNC_3(VAR_4);
 int VAR_9 = 0;

 switch (VAR_5->param) {
 case 129:
  if (VAR_5->value[0] == VAR_2)
   VAR_9 = FUNC_0(VAR_8);
  else {
   FUNC_2(VAR_8->ipv6_iface);
   VAR_9 = 0;
  }
  break;
 case 128:
  VAR_9 = FUNC_4(VAR_8, VAR_5, ((void*)0),
      VAR_1);
  break;
 default:
  FUNC_1(VAR_8, VAR_3, VAR_0,
       "BS_%d : Param %d not supported\n",
       VAR_5->param);
 }

 return VAR_9;
}
