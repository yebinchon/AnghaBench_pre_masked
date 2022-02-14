
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
 int FUNC_1 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_2(struct task_struct *VAR_7, int VAR_8, int VAR_9, char *VAR_10)
{
 int VAR_11, VAR_12;
 short VAR_13;
 unsigned long VAR_14;

 VAR_11 = FUNC_1(VAR_9, FUNC_0(VAR_3));
 while (VAR_8 < VAR_11) {
  VAR_13 = *((short *)VAR_10);
  if (VAR_8 == FUNC_0(VAR_0)) {
   VAR_7->thread.fcr = (VAR_7->thread.fcr & (~0x1f3f))
      | (VAR_13 & 0x1f3f);
  } else if (VAR_8 == FUNC_0(VAR_5)) {
   VAR_7->thread.fsr = (VAR_7->thread.fsr & (~0xffff)) | VAR_13;
  } else if (VAR_8 == FUNC_0(VAR_6)) {
   VAR_7->thread.fsr = (VAR_7->thread.fsr & (~0xffff0000))
    | (((int)VAR_13) << 16);
  }
  VAR_10 += 2;
  VAR_8 += 2;
 }

 if (VAR_8 == FUNC_0(VAR_3)) {
  VAR_8 += 2;
  VAR_10 += 2;
 }
 while (VAR_8 < VAR_9) {
  VAR_12 = *((int *)VAR_10);
  if (VAR_8 == FUNC_0(VAR_1))
   VAR_7->thread.fir = (VAR_7->thread.fir & (~0xffffffff))
       | VAR_12;
  else if (VAR_8 == FUNC_0(VAR_2))
   VAR_7->thread.fdr = (VAR_7->thread.fdr & (~0xffffffff))
       | VAR_12;
  else if (VAR_8 == FUNC_0(VAR_4)) {
   VAR_14 = VAR_12 & 0xff10;
   VAR_7->thread.fcr = (VAR_7->thread.fcr &
    (~0xff1000000000UL)) | (VAR_14<<32);
   VAR_14 = VAR_12 & 0x3f;
   VAR_7->thread.fsr = (VAR_7->thread.fsr &
    (~0x3f00000000UL)) | (VAR_14<<32);
  }
  VAR_10 += 4;
  VAR_8 += 4;
 }
}
