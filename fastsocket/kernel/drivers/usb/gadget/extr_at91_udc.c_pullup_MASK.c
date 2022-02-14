
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pullup_pin; int pullup_active_low; } ;
struct at91_udc {TYPE_1__ board; int vbus; int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct at91_udc*,int ) ;
 int FUNC_4 (struct at91_udc*,int ,int ) ;
 int FUNC_5 (struct at91_udc*) ;
 int FUNC_6 (struct at91_udc*) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (struct at91_udc*) ;

__attribute__((used)) static void FUNC_14(struct at91_udc *VAR_8, int VAR_9)
{
 int VAR_10 = !VAR_8->board.pullup_active_low;

 if (!VAR_8->enabled || !VAR_8->vbus)
  VAR_9 = 0;
 FUNC_0("%sactive\n", VAR_9 ? "" : "in");

 if (VAR_9) {
  FUNC_6(VAR_8);
  FUNC_4(VAR_8, VAR_2, VAR_4);
  FUNC_4(VAR_8, VAR_5, 0);
  if (FUNC_7())
   FUNC_12(VAR_8->board.pullup_pin, VAR_10);
  else if (FUNC_8() || FUNC_10() || FUNC_11()) {
   u32 VAR_11 = FUNC_3(VAR_8, VAR_5);

   VAR_11 |= VAR_6;
   FUNC_4(VAR_8, VAR_5, VAR_11);
  } else if (FUNC_9()) {
   u32 VAR_12;

   VAR_12 = FUNC_1(VAR_0);
   VAR_12 |= VAR_1;
   FUNC_2(VAR_0, VAR_12);
  }
 } else {
  FUNC_13(VAR_8);
  FUNC_4(VAR_8, VAR_3, VAR_4);
  FUNC_4(VAR_8, VAR_5, VAR_7);
  if (FUNC_7())
   FUNC_12(VAR_8->board.pullup_pin, !VAR_10);
  else if (FUNC_8() || FUNC_10() || FUNC_11()) {
   u32 VAR_13 = FUNC_3(VAR_8, VAR_5);

   VAR_13 &= ~VAR_6;
   FUNC_4(VAR_8, VAR_5, VAR_13);
  } else if (FUNC_9()) {
   u32 VAR_14;

   VAR_14 = FUNC_1(VAR_0);
   VAR_14 &= ~VAR_1;
   FUNC_2(VAR_0, VAR_14);
  }
  FUNC_5(VAR_8);
 }
}
