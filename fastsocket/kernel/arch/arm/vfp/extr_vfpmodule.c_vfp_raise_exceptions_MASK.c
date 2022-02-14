
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_16 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int,struct pt_regs*) ;

__attribute__((used)) static void FUNC_5(u32 VAR_17, u32 VAR_18, u32 VAR_19, struct pt_regs *VAR_20)
{
 int VAR_21 = 0;

 FUNC_2("VFP: raising exceptions %08x\n", VAR_17);

 if (VAR_17 == VAR_16) {
  FUNC_3("unhandled bounce", VAR_18);
  FUNC_4(0, VAR_20);
  return;
 }






 VAR_19 |= VAR_17;

 FUNC_1(VAR_5, VAR_19);
 if (VAR_17 & VAR_6 && VAR_19 & VAR_7) VAR_21 = VAR_0;;
 if (VAR_17 & VAR_10 && VAR_19 & VAR_11) VAR_21 = VAR_3;;
 if (VAR_17 & VAR_14 && VAR_19 & VAR_15) VAR_21 = VAR_4;;
 if (VAR_17 & VAR_12 && VAR_19 & VAR_13) VAR_21 = VAR_2;;
 if (VAR_17 & VAR_8 && VAR_19 & VAR_9) VAR_21 = VAR_1;;

 if (VAR_21)
  FUNC_4(VAR_21, VAR_20);
}
