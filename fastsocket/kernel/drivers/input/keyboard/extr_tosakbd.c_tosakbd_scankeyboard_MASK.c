
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tosakbd {int lock; int timer; int input; int * keycode; scalar_t__ suspended; } ;
struct platform_device {int dev; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_3 (int *,char*,unsigned int) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int *,scalar_t__) ;
 struct tosakbd* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 () ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 () ;
 int FUNC_13 (unsigned int) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(struct platform_device *VAR_6)
{
 struct tosakbd *VAR_7 = FUNC_7(VAR_6);
 unsigned int VAR_8, VAR_9, VAR_10;
 unsigned long VAR_11;
 unsigned int VAR_12 = 0;

 FUNC_8(&VAR_7->lock, VAR_11);

 if (VAR_7->suspended)
  goto out;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {




  FUNC_12();
  FUNC_14(VAR_1);

  FUNC_11(VAR_9);
  FUNC_14(VAR_0);

  VAR_10 = FUNC_0(VAR_9);

  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
   unsigned int VAR_13, VAR_14;
   VAR_13 = FUNC_2(VAR_8, VAR_9);
   VAR_14 = VAR_10 & FUNC_1(VAR_8);

   if (VAR_14 && !VAR_7->keycode[VAR_13])
    FUNC_3(&VAR_6->dev,
      "unhandled scancode: 0x%02x\n",
      VAR_13);

   FUNC_4(VAR_7->input,
     VAR_7->keycode[VAR_13],
     VAR_14);
   if (VAR_14)
    VAR_12++;
  }

  FUNC_13(VAR_9);
 }

 FUNC_10();

 FUNC_5(VAR_7->input);


 if (VAR_12)
  FUNC_6(&VAR_7->timer, VAR_5 + VAR_2);

 out:
 FUNC_9(&VAR_7->lock, VAR_11);
}
