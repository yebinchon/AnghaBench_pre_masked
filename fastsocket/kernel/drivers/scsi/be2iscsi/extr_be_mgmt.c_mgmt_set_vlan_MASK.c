
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct beiscsi_hba {int dummy; } ;
struct be_mcc_wrb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct beiscsi_hba*,int ) ;
 int FUNC_1 (struct beiscsi_hba*,int ,int,char*) ;
 int FUNC_2 (struct beiscsi_hba*,unsigned int,struct be_mcc_wrb**,int *) ;

int FUNC_3(struct beiscsi_hba *VAR_4,
     uint16_t VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;
 struct be_mcc_wrb *VAR_8 = ((void*)0);

 VAR_7 = FUNC_0(VAR_4, VAR_5);
 if (!VAR_7) {
  FUNC_1(VAR_4, VAR_3,
       (VAR_0 | VAR_1),
       "BG_%d : VLAN Setting Failed\n");
  return -VAR_2;
 }

 VAR_6 = FUNC_2(VAR_4, VAR_7, &VAR_8, ((void*)0));
 if (VAR_6) {
  FUNC_1(VAR_4, VAR_3,
       (VAR_0 | VAR_1),
       "BS_%d : VLAN MBX Cmd Failed\n");
  return VAR_6;
 }
 return VAR_6;
}
