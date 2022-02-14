
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static void FUNC_2(void)
{
 FUNC_0(VAR_0);
 switch((VAR_1>>3)&3)
 {
  case 0:
   FUNC_1(VAR_2, "cinv (illegal scope); (4)");
   break;
  case 1:
   FUNC_1(VAR_2, "cinvl   %d, (A%d); (4)", (VAR_1>>6)&3, VAR_1&7);
   break;
  case 2:
   FUNC_1(VAR_2, "cinvp   %d, (A%d); (4)", (VAR_1>>6)&3, VAR_1&7);
   break;
  case 3:
   FUNC_1(VAR_2, "cinva   %d; (4)", (VAR_1>>6)&3);
   break;
 }
}
