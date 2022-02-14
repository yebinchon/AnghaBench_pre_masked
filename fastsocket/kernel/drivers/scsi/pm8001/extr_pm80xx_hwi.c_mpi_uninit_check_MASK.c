
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm8001_hba_info {int general_stat_tbl_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct pm8001_hba_info*) ;
 int FUNC_2 (struct pm8001_hba_info*,int ,int ) ;
 int FUNC_3 (struct pm8001_hba_info*,int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct pm8001_hba_info *VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 FUNC_1(VAR_5);


 FUNC_3(VAR_5, 0, VAR_3, VAR_4);


 VAR_6 = 2 * 1000 * 1000;
 do {
  FUNC_6(1);
  VAR_7 = FUNC_2(VAR_5, 0, VAR_3);
  VAR_7 &= VAR_4;
 } while ((VAR_7 != 0) && (--VAR_6));

 if (!VAR_6) {
  FUNC_0(VAR_5,
   FUNC_5("TIMEOUT:IBDB value/=%x\n", VAR_7));
  return -1;
 }



 VAR_6 = 2 * 1000 * 1000;
 do {
  FUNC_6(1);
  VAR_8 =
   FUNC_4(VAR_5->general_stat_tbl_addr,
   VAR_0);
  if (VAR_2 ==
   (VAR_8 & VAR_1))
   break;
 } while (--VAR_6);
 if (!VAR_6) {
  FUNC_0(VAR_5,
   FUNC_5(" TIME OUT MPI State = 0x%x\n",
    VAR_8 & VAR_1));
  return -1;
 }

 return 0;
}
