
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tss_struct {int io_bitmap; } ;
struct thread_struct {int io_bitmap_max; int io_bitmap_ptr; int debugreg7; int debugreg6; int debugreg3; int debugreg2; int debugreg1; int debugreg0; } ;
struct task_struct {struct thread_struct thread; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (struct task_struct*,struct task_struct*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct task_struct*,int ) ;
 int FUNC_9 (unsigned long) ;

void FUNC_10(struct task_struct *VAR_5, struct task_struct *VAR_6,
        struct tss_struct *VAR_7)
{
 struct thread_struct *VAR_8, *VAR_9;

 VAR_8 = &VAR_5->thread;
 VAR_9 = &VAR_6->thread;

 if (FUNC_8(VAR_6, VAR_2)) {
  FUNC_7(VAR_9->debugreg0, 0);
  FUNC_7(VAR_9->debugreg1, 1);
  FUNC_7(VAR_9->debugreg2, 2);
  FUNC_7(VAR_9->debugreg3, 3);

  FUNC_7(VAR_9->debugreg6, 6);
  FUNC_7(VAR_9->debugreg7, 7);
 }

 if (FUNC_8(VAR_5, VAR_1) ^
     FUNC_8(VAR_6, VAR_1)) {
  unsigned long VAR_10 = FUNC_0();

  VAR_10 &= ~VAR_0;
  if (FUNC_8(VAR_6, VAR_1))
   VAR_10 |= VAR_0;

  FUNC_9(VAR_10);
 }

 if (FUNC_8(VAR_5, VAR_4) ^
     FUNC_8(VAR_6, VAR_4)) {

  if (FUNC_8(VAR_6, VAR_4))
   FUNC_1();
  else
   FUNC_2();
 }

 if (FUNC_8(VAR_6, VAR_3)) {




  FUNC_4(VAR_7->io_bitmap, VAR_9->io_bitmap_ptr,
         FUNC_3(VAR_8->io_bitmap_max, VAR_9->io_bitmap_max));
 } else if (FUNC_8(VAR_5, VAR_3)) {



  FUNC_5(VAR_7->io_bitmap, 0xff, VAR_8->io_bitmap_max);
 }
 FUNC_6(VAR_5, VAR_6);
}
