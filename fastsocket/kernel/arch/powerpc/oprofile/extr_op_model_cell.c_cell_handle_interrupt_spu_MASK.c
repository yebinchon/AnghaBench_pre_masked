
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pt_regs {int dummy; } ;
struct op_counter_config {scalar_t__ enabled; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int*) ;
 int FUNC_8 (int,int ,int ) ;
 int FUNC_9 (int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int VAR_9 ;
 int FUNC_14 (int,int*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_15 (int) ;

__attribute__((used)) static void FUNC_16(struct pt_regs *VAR_12,
          struct op_counter_config *VAR_13)
{
 u32 VAR_14, VAR_15;
 u64 VAR_16;
 u32 VAR_17;
 u64 VAR_18[2];
 u64 VAR_19;
 u32 VAR_20;
 u32 VAR_21;
 unsigned long VAR_22;
 int VAR_23;
 unsigned long VAR_24;




 VAR_14 = FUNC_10();
 FUNC_12(&VAR_3, VAR_24);

 VAR_15 = VAR_14;
 FUNC_2(VAR_14);

 VAR_17 = FUNC_5(VAR_14);

 VAR_20 = 0xABCDEF;
 VAR_16 = 0xfedcba;
 VAR_19 = 0xdeadbeaf;

 if ((VAR_6 == 1) && (VAR_17 != 0)) {

  FUNC_9(VAR_14, VAR_7, 0);


  if ((VAR_17 & FUNC_0(0))
      && VAR_13[0].enabled)




   FUNC_8(VAR_14, 0, VAR_8[0]);

  VAR_21 = FUNC_6(VAR_14, VAR_10);

  while (!(VAR_21 & VAR_0)) {





   FUNC_7(VAR_14, VAR_18);
   VAR_21 = FUNC_6(VAR_14, VAR_10);
  }
  VAR_16 = VAR_18[0]
   & 0x00000000FFFF0000;




  VAR_20 = VAR_16 >> 14;
  VAR_19 = VAR_18[0];

  VAR_23 = VAR_9
   + (FUNC_1(VAR_14) * VAR_2);




  FUNC_12(&VAR_5,
      VAR_22);
  FUNC_14(VAR_23, &VAR_20, 1);
  FUNC_13(&VAR_5,
           VAR_22);

  FUNC_11();





  FUNC_9(VAR_14, VAR_7, VAR_1);
  FUNC_4(VAR_14, VAR_4,
      VAR_11);


  FUNC_9(VAR_14, VAR_10, 0);
  FUNC_9(VAR_14, VAR_7, VAR_1);
  FUNC_15(VAR_14);
  FUNC_3(VAR_14);
 }
 FUNC_13(&VAR_3, VAR_24);
}
