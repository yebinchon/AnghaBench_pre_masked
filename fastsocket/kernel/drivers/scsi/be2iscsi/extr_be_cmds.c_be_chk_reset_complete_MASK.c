
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct beiscsi_hba {scalar_t__ csr_va; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*) ;

int FUNC_3(struct beiscsi_hba *VAR_4)
{
 unsigned int VAR_5;
 u8 *VAR_6 = 0;
 u32 VAR_7;

 VAR_5 = 1000;
 VAR_6 = (u8 *)VAR_4->csr_va + VAR_3;
 FUNC_1(5000);

 while (VAR_5) {
  VAR_7 = FUNC_2((void *)VAR_6);

  if ((VAR_7 & 0x80000000) || (VAR_7 & 0x0000FFFF) == 0xC000)
   break;
  FUNC_1(60);
  VAR_5--;
 }

 if ((VAR_7 & 0x80000000) || (!VAR_5)) {
  FUNC_0(VAR_4, VAR_2, VAR_0,
       "BC_%d : Failed in be_chk_reset_complete"
       "status = 0x%x\n", VAR_7);
  return -VAR_1;
 }

 return 0;
}
