
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nlattr {int dummy; } ;
struct iscsi_iface_param_info {int param; } ;
struct beiscsi_hba {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*,...) ;
 struct beiscsi_hba* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (struct beiscsi_hba*,struct iscsi_iface_param_info*,struct iscsi_iface_param_info*,int ) ;
 struct iscsi_iface_param_info* FUNC_3 (struct nlattr*) ;
 struct nlattr* FUNC_4 (void*,int ,int const) ;

__attribute__((used)) static int
FUNC_5(struct Scsi_Host *VAR_4,
  struct iscsi_iface_param_info *VAR_5,
  void *VAR_6, uint32_t VAR_7)
{
 struct beiscsi_hba *VAR_8 = FUNC_1(VAR_4);
 struct iscsi_iface_param_info *VAR_9 = ((void*)0);
 struct iscsi_iface_param_info *VAR_10 = ((void*)0);
 struct nlattr *VAR_11;
 int VAR_12;


 switch (VAR_5->param) {
 case 129:
  VAR_11 = FUNC_4(VAR_6, VAR_7, 130);
  if (VAR_11)
   VAR_9 = FUNC_3(VAR_11);

  VAR_11 = FUNC_4(VAR_6, VAR_7, 128);
  if (VAR_11)
   VAR_10 = FUNC_3(VAR_11);
  break;
 case 130:
  VAR_9 = VAR_5;
  VAR_11 = FUNC_4(VAR_6, VAR_7, 128);
  if (VAR_11)
   VAR_10 = FUNC_3(VAR_11);
  break;
 case 128:
  VAR_10 = VAR_5;
  VAR_11 = FUNC_4(VAR_6, VAR_7, 130);
  if (VAR_11)
   VAR_9 = FUNC_3(VAR_11);
  break;
 default:
  FUNC_0(VAR_8, VAR_3, VAR_0,
       "BS_%d : Unsupported param %d\n",
       VAR_5->param);
 }

 if (!VAR_9 || !VAR_10) {
  FUNC_0(VAR_8, VAR_3, VAR_0,
       "BS_%d : IP and Subnet Mask required\n");
  return -VAR_1;
 }

 VAR_12 = FUNC_2(VAR_8, VAR_9, VAR_10,
   VAR_2);

 return VAR_12;
}
