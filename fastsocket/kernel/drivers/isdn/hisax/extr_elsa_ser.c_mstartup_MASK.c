
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int MCR; int IER; int MFlag; scalar_t__ rcvp; scalar_t__ rcvcnt; scalar_t__ transp; scalar_t__ transcnt; } ;
struct TYPE_4__ {TYPE_1__ elsa; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct IsdnCardState*,int ) ;
 int FUNC_1 (struct IsdnCardState*,int ) ;
 int FUNC_2 (struct IsdnCardState*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct IsdnCardState *VAR_19)
{
 int VAR_20=0;





 FUNC_2(VAR_19, VAR_2, (VAR_3 | VAR_4));






 if (FUNC_1(VAR_19, VAR_12) == 0xff) {
  VAR_20 = -VAR_1;
  goto errout;
 }




 (void) FUNC_1(VAR_19, VAR_18);
 (void) FUNC_1(VAR_19, VAR_9);
 (void) FUNC_1(VAR_19, VAR_17);




 FUNC_2(VAR_19, VAR_10, VAR_11);

 VAR_19->hw.elsa.MCR = 0;
 VAR_19->hw.elsa.MCR = VAR_14 | VAR_16 | VAR_15;
 FUNC_2(VAR_19, VAR_13, VAR_19->hw.elsa.MCR);




 VAR_19->hw.elsa.IER = VAR_6 | VAR_8 | VAR_7;
 FUNC_2(VAR_19, VAR_5, VAR_19->hw.elsa.IER);




 (void)FUNC_1(VAR_19, VAR_12);
 (void)FUNC_1(VAR_19, VAR_18);
 (void)FUNC_1(VAR_19, VAR_9);
 (void)FUNC_1(VAR_19, VAR_17);

 VAR_19->hw.elsa.transcnt = VAR_19->hw.elsa.transp = 0;
 VAR_19->hw.elsa.rcvcnt = VAR_19->hw.elsa.rcvp =0;




 FUNC_0(VAR_19, VAR_0);
 VAR_19->hw.elsa.MFlag = 1;
errout:
 return VAR_20;
}
