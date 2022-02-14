
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,unsigned long) ;
 unsigned long FUNC_2 (int ,unsigned int,unsigned long) ;
 unsigned long FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned long) ;
 unsigned long FUNC_7 (int ) ;
 unsigned long FUNC_8 (int ) ;
 int FUNC_9 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_10, pte_t VAR_11)
{
 u32 VAR_12;
 u32 VAR_13;





 VAR_12 = FUNC_8(VAR_6);
 VAR_12 = FUNC_0(VAR_0, FUNC_1(VAR_0, VAR_12));
 VAR_12 |= VAR_10 & VAR_4;
 VAR_12 |= FUNC_3(VAR_7);
 FUNC_9(VAR_6, VAR_12);


 FUNC_4();
 VAR_13 = FUNC_8(VAR_2);

 if (VAR_13 & FUNC_3(VAR_3)) {

  unsigned int VAR_14;
  u32 VAR_15 = FUNC_8(VAR_5);

  VAR_14 = 32 - FUNC_6(VAR_15);
  if (VAR_14 == 32) {
   VAR_14 = 0;
   FUNC_9(VAR_5, -1L);
  }

  VAR_13 = FUNC_2(VAR_1, VAR_14, VAR_13);
  FUNC_9(VAR_2, VAR_13);
 }

 FUNC_9(VAR_8, FUNC_7(VAR_11) & VAR_9);


 FUNC_5();
}
