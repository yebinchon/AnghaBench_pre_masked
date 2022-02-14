
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm8001_hba_info {int dummy; } ;


 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pm8001_hba_info*,int ,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct pm8001_hba_info *VAR_1)
{
  u32 VAR_2;

 FUNC_0(VAR_1,
  FUNC_3("chip reset start\n"));


 FUNC_2(VAR_1, 0, VAR_0, 0x11);
 FUNC_0(VAR_1,
  FUNC_3("SPC soft reset Complete\n"));



 FUNC_4(10);


 VAR_2 = 20;
 do {
  FUNC_1(1);
 } while ((--VAR_2) != 0);

 FUNC_0(VAR_1,
  FUNC_3("chip reset finished\n"));
}
