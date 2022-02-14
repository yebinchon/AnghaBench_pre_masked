
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_2__ {int tflags; int timer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 TYPE_1__* VAR_13 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ VAR_17 ;
 int FUNC_7 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_8(ulong VAR_18)
{
 int VAR_19 = VAR_13->tflags;
 if (VAR_19 & VAR_3) {
  if (VAR_19 & VAR_5)
   FUNC_6();
  if (VAR_19 & VAR_4)
   FUNC_3();
  if (VAR_19 & VAR_7)
   FUNC_5();
 }
 if (VAR_19 & VAR_12) {
  if (++VAR_14 >= VAR_0) {
   VAR_14 = 0;
   if (VAR_19 & VAR_8)
    FUNC_1();
  }
  if (++VAR_15 >= VAR_1) {
   VAR_15 = 0;
   if (VAR_19 & VAR_9)
    FUNC_0();
   if (++VAR_16 >= VAR_11) {
    VAR_16 = 0;
    if (VAR_19 & VAR_6)
     FUNC_4();
   }
   if (VAR_19 & VAR_2)
    FUNC_2();
  }
 }
 if (VAR_19)
  FUNC_7(&VAR_13->timer, VAR_17+VAR_10);
}
