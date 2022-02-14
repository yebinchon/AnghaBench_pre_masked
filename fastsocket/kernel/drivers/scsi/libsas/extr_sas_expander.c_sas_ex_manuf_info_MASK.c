
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct domain_device {int sas_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int* FUNC_2 (int ) ;
 int* FUNC_3 (int ) ;
 int FUNC_4 (struct domain_device*,int*) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (struct domain_device*,int*,int ,int*,int ) ;

__attribute__((used)) static int FUNC_7(struct domain_device *VAR_5)
{
 u8 *VAR_6;
 u8 *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_2);
 if (!VAR_7) {
  FUNC_5(VAR_6);
  return -VAR_0;
 }

 VAR_6[1] = VAR_3;

 VAR_8 = FUNC_6(VAR_5, VAR_6, VAR_1, VAR_7,VAR_2);
 if (VAR_8) {
  FUNC_1("MI: ex %016llx failed:0x%x\n",
       FUNC_0(VAR_5->sas_addr), VAR_8);
  goto out;
 } else if (VAR_7[2] != VAR_4) {
  FUNC_1("MI ex %016llx returned SMP result:0x%x\n",
       FUNC_0(VAR_5->sas_addr), VAR_7[2]);
  goto out;
 }

 FUNC_4(VAR_5, VAR_7);
out:
 FUNC_5(VAR_6);
 FUNC_5(VAR_7);
 return VAR_8;
}
