
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int ARM_pc; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int,struct pt_regs*) ;
 int FUNC_6 (int,int,int,struct pt_regs*) ;

void FUNC_7(u32 VAR_18, u32 VAR_19, struct pt_regs *VAR_20)
{
 u32 VAR_21, VAR_22, VAR_23, VAR_24;

 FUNC_3("VFP: bounce: trigger %08x fpexc %08x\n", VAR_18, VAR_19);
 FUNC_2(VAR_0, VAR_19 & ~(VAR_2|VAR_1|VAR_3|VAR_7|VAR_6));

 VAR_23 = FUNC_1(VAR_14);
 VAR_22 = VAR_21 = FUNC_1(VAR_10);




 if ((VAR_23 & VAR_16) == (1 << VAR_15)
     && (VAR_21 & VAR_11)) {



  goto emulate;
 }

 if (VAR_19 & VAR_2) {





  VAR_18 = FUNC_1(VAR_8);
  VAR_20->ARM_pc -= 4;

 } else if (!(VAR_19 & VAR_1)) {





   FUNC_6(VAR_17, VAR_18, VAR_21, VAR_20);
  goto exit;
 }






 if (VAR_19 & (VAR_2 | VAR_7)) {
  u32 VAR_25;

  VAR_25 = VAR_19 + (1 << VAR_4);

  VAR_21 &= ~VAR_13;
  VAR_21 |= (VAR_25 & VAR_5) << (VAR_12 - VAR_4);
 }






 VAR_24 = FUNC_5(VAR_18, VAR_21, VAR_20);
 if (VAR_24)
  FUNC_6(VAR_24, VAR_18, VAR_22, VAR_20);





 if (VAR_19 ^ (VAR_2 | VAR_3))
  goto exit;





 FUNC_0();
 VAR_18 = FUNC_1(VAR_9);

 emulate:
 VAR_24 = FUNC_5(VAR_18, VAR_22, VAR_20);
 if (VAR_24)
  FUNC_6(VAR_24, VAR_18, VAR_22, VAR_20);
 exit:
 FUNC_4();
}
