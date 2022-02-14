
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00_ts {int * rtask; int irq_wait; scalar_t__ restart; int ucb; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *) ;
 int VAR_6 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (long) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (struct ucb1x00_ts*) ;
 int FUNC_16 (struct ucb1x00_ts*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_17 (struct ucb1x00_ts*) ;
 scalar_t__ FUNC_18 (struct ucb1x00_ts*) ;
 unsigned int FUNC_19 (struct ucb1x00_ts*) ;
 unsigned int FUNC_20 (struct ucb1x00_ts*) ;
 unsigned int FUNC_21 (struct ucb1x00_ts*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_22(void *VAR_8)
{
 struct ucb1x00_ts *VAR_9 = VAR_8;
 FUNC_0(VAR_7, VAR_6);
 int VAR_10 = 0;

 FUNC_8();
 FUNC_1(&VAR_9->irq_wait, &VAR_7);
 while (!FUNC_2()) {
  unsigned int VAR_11, VAR_12, VAR_13;
  signed long VAR_14;

  VAR_9->restart = 0;

  FUNC_11(VAR_9->ucb);

  VAR_11 = FUNC_20(VAR_9);
  VAR_12 = FUNC_21(VAR_9);
  VAR_13 = FUNC_19(VAR_9);




  FUNC_17(VAR_9);
  FUNC_10(VAR_9->ucb);

  FUNC_4(10);

  FUNC_13(VAR_9->ucb);


  if (FUNC_18(VAR_9)) {
   FUNC_7(VAR_2);

   FUNC_14(VAR_9->ucb, VAR_4, FUNC_3() ? VAR_5 : VAR_3);
   FUNC_12(VAR_9->ucb);





   if (VAR_10) {
    FUNC_15(VAR_9);
    VAR_10 = 0;
   }

   VAR_14 = VAR_1;
  } else {
   FUNC_12(VAR_9->ucb);






   if (!VAR_9->restart) {
    FUNC_16(VAR_9, VAR_13, VAR_11, VAR_12);
    VAR_10 = 1;
   }

   FUNC_7(VAR_2);
   VAR_14 = VAR_0 / 100;
  }

  FUNC_9();

  FUNC_6(VAR_14);
 }

 FUNC_5(&VAR_9->irq_wait, &VAR_7);

 VAR_9->rtask = ((void*)0);
 return 0;
}
