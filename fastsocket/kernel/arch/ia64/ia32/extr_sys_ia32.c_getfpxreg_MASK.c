
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fcr; int fsr; int fir; int fdr; } ;
struct task_struct {TYPE_1__ thread; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_2(struct task_struct *VAR_9, int VAR_10, int VAR_11, char *VAR_12)
{
 int VAR_13;

 VAR_13 = FUNC_1(VAR_11, FUNC_0(VAR_4));
 while (VAR_10 < VAR_13) {
  if (VAR_10 == FUNC_0(VAR_0))
   *((short *)VAR_12) = VAR_9->thread.fcr & 0xffff;
  else if (VAR_10 == FUNC_0(VAR_7))
   *((short *)VAR_12) = VAR_9->thread.fsr & 0xffff;
  else if (VAR_10 == FUNC_0(VAR_8))
   *((short *)VAR_12) = (VAR_9->thread.fsr>>16) & 0xffff;
  VAR_12 += 2;
  VAR_10 += 2;
 }

 if (VAR_10 == FUNC_0(VAR_4)) {
  VAR_10 += 2;
  VAR_12 += 2;
 }
 while (VAR_10 < VAR_11) {
  if (VAR_10 == FUNC_0(VAR_2))
   *((int *)VAR_12) = VAR_9->thread.fir;
  else if (VAR_10 == FUNC_0(VAR_1))
   *((int *)VAR_12) = (VAR_9->thread.fir>>32) & 0xffff;
  else if (VAR_10 == FUNC_0(VAR_3))
   *((int *)VAR_12) = VAR_9->thread.fdr;
  else if (VAR_10 == FUNC_0(VAR_5))
   *((int *)VAR_12) = (VAR_9->thread.fdr>>32) & 0xffff;
  else if (VAR_10 == FUNC_0(VAR_6))
   *((int *)VAR_12) = ((VAR_9->thread.fcr>>32) & 0xff80)
      | ((VAR_9->thread.fsr>>32) & 0x3f);
  VAR_12 += 4;
  VAR_10 += 4;
 }
}
