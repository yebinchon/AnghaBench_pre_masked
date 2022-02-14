
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spitzkbd {int lock; int timer; int input; scalar_t__ suspend_jiffies; int * keycode; scalar_t__ suspended; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (int ,int ,unsigned int) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 () ;
 int FUNC_12 (unsigned int) ;
 int FUNC_13 () ;
 unsigned int FUNC_14 (unsigned int) ;
 int FUNC_15 (unsigned int) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(struct spitzkbd *VAR_11)
{
 unsigned int VAR_12, VAR_13, VAR_14;
 unsigned long VAR_15;
 unsigned int VAR_16, VAR_17 = ((FUNC_1(VAR_7) & FUNC_0(VAR_7)) != 0);

 if (VAR_11->suspended)
  return;

 FUNC_9(&VAR_11->lock, VAR_15);

 VAR_16 = 0;
 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {





  FUNC_13();
  FUNC_17(VAR_3);

  FUNC_12(VAR_13);
  FUNC_17(VAR_1);

  VAR_14 = FUNC_14(VAR_13);
  for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
   unsigned int VAR_18, VAR_19;

   VAR_18 = FUNC_3(VAR_12, VAR_13);
   VAR_19 = VAR_14 & FUNC_2(VAR_12);

   FUNC_5(VAR_11->input, VAR_11->keycode[VAR_18], VAR_19);

   if (VAR_19)
    VAR_16++;
  }
  FUNC_15(VAR_13);
 }

 FUNC_11();

 FUNC_5(VAR_11->input, VAR_9, (FUNC_1(VAR_8) & FUNC_0(VAR_8)) != 0 );
 FUNC_5(VAR_11->input, VAR_5, VAR_17);

 if (VAR_17 && FUNC_16(VAR_10, VAR_11->suspend_jiffies + FUNC_8(1000))) {
  FUNC_4(VAR_11->input, VAR_0, VAR_5, 1);
  VAR_11->suspend_jiffies = VAR_10;
 }

 FUNC_6(VAR_11->input);


 if (VAR_16)
  FUNC_7(&VAR_11->timer, VAR_10 + FUNC_8(VAR_6));

 FUNC_10(&VAR_11->lock, VAR_15);
}
