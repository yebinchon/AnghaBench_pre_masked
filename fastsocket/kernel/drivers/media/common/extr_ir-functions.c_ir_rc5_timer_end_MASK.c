
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_2__ {int tv_sec; int tv_usec; } ;
struct card_ir {int last_bit; int code; int shift_by; scalar_t__ start; scalar_t__ addr; int last_rc5; int timer_keyup; int rc5_key_timeout; int ir; int dev; scalar_t__ active; TYPE_1__ base_time; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct timeval*) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int ,int *,int,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int) ;
 unsigned long VAR_0 ;
 int FUNC_9 (int *,unsigned long) ;
 unsigned long FUNC_10 (int ) ;

void FUNC_11(unsigned long VAR_1)
{
 struct card_ir *VAR_2 = (struct card_ir *)VAR_1;
 struct timeval VAR_3;
 unsigned long VAR_4, VAR_5;
 u32 VAR_6;
 u32 VAR_7 = 0;


 VAR_4 = VAR_0;
 FUNC_4(&VAR_3);


 if (VAR_3.tv_sec - VAR_2->base_time.tv_sec > 1) {
  VAR_6 = 200000;
 } else {
  VAR_6 = 1000000 * (VAR_3.tv_sec - VAR_2->base_time.tv_sec) +
      VAR_3.tv_usec - VAR_2->base_time.tv_usec;
 }


 VAR_2->active = 0;


 if (VAR_6 < 28000) {
  FUNC_5(1, "ir-common: spurious timer_end\n");
  return;
 }

 if (VAR_2->last_bit < 20) {

  FUNC_5(1, "ir-common: short code: %x\n", VAR_2->code);
 } else {
  VAR_2->code = (VAR_2->code << VAR_2->shift_by) | 1;
  VAR_7 = FUNC_8(VAR_2->code);


  if (FUNC_2(VAR_7) != VAR_2->start) {
   FUNC_5(1, "ir-common: rc5 start bits invalid: %u\n", FUNC_2(VAR_7));


  } else if (FUNC_0(VAR_7) == VAR_2->addr) {
   u32 VAR_8 = FUNC_3(VAR_7);
   u32 VAR_9 = FUNC_1(VAR_7);


   if (VAR_8 != FUNC_3(VAR_2->last_rc5) ||
       VAR_9 != FUNC_1(VAR_2->last_rc5)) {
    FUNC_5(1, "ir-common: instruction %x, toggle %x\n", VAR_9,
     VAR_8);
    FUNC_7(VAR_2->dev, &VAR_2->ir);
    FUNC_6(VAR_2->dev, &VAR_2->ir, VAR_9,
       VAR_9);
   }


   VAR_5 = VAR_4 +
      FUNC_10(VAR_2->rc5_key_timeout);
   FUNC_9(&VAR_2->timer_keyup, VAR_5);


   VAR_2->last_rc5 = VAR_7;
  }
 }
}
