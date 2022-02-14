
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct esp {int sreg; int flags; int ireg; scalar_t__ rev; scalar_t__ select_state; scalar_t__ event; int sreg2; scalar_t__ active_cmd; int seqreg; int * eh_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct esp*) ;
 int FUNC_2 (struct esp*) ;
 int FUNC_3 (struct esp*) ;
 int FUNC_4 (struct esp*) ;
 int FUNC_5 (char*,int,int ,int,int) ;
 int FUNC_6 (struct esp*) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (struct esp*) ;
 int FUNC_9 (struct esp*) ;
 int FUNC_10 (struct esp*) ;
 int FUNC_11 (struct esp*) ;
 int FUNC_12 (char*,int) ;

__attribute__((used)) static void FUNC_13(struct esp *VAR_18)
{
 int VAR_19, VAR_20;
 u8 VAR_21;

 VAR_18->sreg = FUNC_7(VAR_14);

 if (VAR_18->flags & VAR_4) {
  VAR_19 = 1;
 } else {
  if (FUNC_1(VAR_18))
   return;

  VAR_19 = FUNC_2(VAR_18);
  if (VAR_19 < 0)
   return;
 }

 VAR_18->ireg = FUNC_7(VAR_5);

 if (VAR_18->ireg & VAR_10)
  VAR_19 = 1;

 if (VAR_19) {
  FUNC_9(VAR_18);
  if (VAR_18->eh_reset) {
   FUNC_0(VAR_18->eh_reset);
   VAR_18->eh_reset = ((void*)0);
  }
  return;
 }

 VAR_21 = (VAR_18->sreg & VAR_16);
 if (VAR_18->rev == VAR_17) {
  if (((VAR_21 != VAR_0 && VAR_21 != VAR_1) &&
       VAR_18->select_state == VAR_11 &&
       VAR_18->event != VAR_3 &&
       VAR_18->event != VAR_2) ||
      (VAR_18->ireg & VAR_7)) {
   VAR_18->sreg2 = FUNC_7(VAR_15);
   if (!(VAR_18->sreg2 & VAR_13) ||
       (VAR_18->sreg2 & VAR_12))
    FUNC_11(VAR_18);
  }
 }

 FUNC_5("ESP: intr sreg[%02x] seqreg[%02x] "
       "sreg2[%02x] ireg[%02x]\n",
       VAR_18->sreg, VAR_18->seqreg, VAR_18->sreg2, VAR_18->ireg);

 VAR_20 = 0;

 if (VAR_18->ireg & (VAR_8 | VAR_9 | VAR_6)) {
  FUNC_12("ESP: unexpected IREG %02x\n", VAR_18->ireg);
  if (VAR_18->ireg & VAR_6)
   FUNC_3(VAR_18);

  FUNC_10(VAR_18);
 } else {
  if (!(VAR_18->ireg & VAR_7)) {

   if (VAR_18->select_state != VAR_11)
    VAR_20 = FUNC_4(VAR_18);
  } else if (VAR_18->ireg & VAR_7) {
   if (VAR_18->active_cmd)
    (void) FUNC_4(VAR_18);
   VAR_20 = FUNC_8(VAR_18);
  }
 }
 while (!VAR_20)
  VAR_20 = FUNC_6(VAR_18);
}
