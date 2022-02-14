
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigjmp_buf ;
typedef int * MemoryContext ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_19 (int) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_20 (long) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ,int) ;

void
FUNC_24(Datum VAR_15)
{
 MemoryContext VAR_16 = ((void*)0);
 sigjmp_buf VAR_17;
 static bool VAR_18 = 1;


 FUNC_21(VAR_6, VAR_11);
 FUNC_21(VAR_7, VAR_10);


 FUNC_3();






 VAR_16 = FUNC_0(VAR_9, "Task Tracker",
                VAR_2,
                VAR_0,
                VAR_1);
 FUNC_10(VAR_16);
 if (FUNC_23(VAR_17, 1) != 0)
 {

  VAR_12 = ((void*)0);


  FUNC_6();


  FUNC_4();






  FUNC_7();
  FUNC_1(0);
  FUNC_2(0);





  FUNC_10(VAR_16);
  FUNC_5();


  FUNC_9(VAR_16);


  FUNC_13();






  FUNC_20(1000000L);
 }


 VAR_5 = &VAR_17;





 if (VAR_18)
 {
  VAR_18 = 0;


  FUNC_15();


  FUNC_16();
 }


 for (;;)
 {
  if (!FUNC_11())
  {
   FUNC_19(1);
  }


  if (VAR_13)
  {
   VAR_13 = 0;


   FUNC_12(VAR_4);
  }
  if (VAR_14)
  {




   VAR_3 = 1;


   FUNC_14(VAR_8);


   FUNC_18(VAR_8);


   FUNC_22(0);
  }


  FUNC_8(VAR_8);


  FUNC_17();
 }
}
