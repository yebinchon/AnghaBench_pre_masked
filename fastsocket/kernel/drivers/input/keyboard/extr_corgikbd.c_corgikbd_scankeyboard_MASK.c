
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct corgikbd {scalar_t__* keycode; int lock; int timer; int input; scalar_t__ suspend_jiffies; scalar_t__ suspended; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_6 ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int ,int ,scalar_t__,int) ;
 int FUNC_8 (int ,scalar_t__,unsigned int) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (int *,scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16(struct corgikbd *VAR_9)
{
 unsigned int VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13;
 unsigned int VAR_14;

 if (VAR_9->suspended)
  return;

 FUNC_12(&VAR_9->lock, VAR_13);

 VAR_14 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {





  FUNC_5();
  FUNC_15(VAR_5);

  FUNC_4(VAR_11);
  FUNC_15(VAR_3);

  VAR_12 = FUNC_0(VAR_11);
  for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
   unsigned int VAR_15, VAR_16;

   VAR_15 = FUNC_2(VAR_10, VAR_11);
   VAR_16 = VAR_12 & FUNC_1(VAR_10);

   FUNC_8(VAR_9->input, VAR_9->keycode[VAR_15], VAR_16);

   if (VAR_16)
    VAR_14++;

   if (VAR_16 && (VAR_9->keycode[VAR_15] == VAR_0)
     && FUNC_14(VAR_8, VAR_9->suspend_jiffies + VAR_2)) {
    FUNC_7(VAR_9->input, VAR_1, VAR_0, 1);
    VAR_9->suspend_jiffies=VAR_8;
   }
  }
  FUNC_6(VAR_11);
 }

 FUNC_3();

 FUNC_9(VAR_9->input);


 if (VAR_14)
  FUNC_10(&VAR_9->timer, VAR_8 + FUNC_11(VAR_7));

 FUNC_13(&VAR_9->lock, VAR_13);
}
