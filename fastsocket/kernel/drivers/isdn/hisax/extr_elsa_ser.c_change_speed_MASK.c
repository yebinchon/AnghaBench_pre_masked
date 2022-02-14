
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int IER; } ;
struct TYPE_4__ {TYPE_1__ elsa; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct IsdnCardState*,char*,int) ;
 int FUNC_1 (struct IsdnCardState*,int ) ;
 int FUNC_2 (struct IsdnCardState*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct IsdnCardState *VAR_12, int VAR_13)
{
 int VAR_14 = 0, VAR_15;
 unsigned VAR_16, VAR_17 = 0;
 int VAR_18;



 VAR_16 = 0x03; VAR_18 = 10;

 VAR_15 = VAR_0;
 VAR_14 = VAR_15 / VAR_13;

 if (!VAR_14)
  VAR_14 = VAR_15 / 9600;


 if ((VAR_15 / VAR_14) < 2400)
  VAR_17 = VAR_4 | VAR_5;
 else
  VAR_17 = VAR_4 | VAR_6;
 FUNC_2(VAR_12, VAR_3, VAR_17);

 VAR_12->hw.elsa.IER &= ~VAR_8;
 VAR_12->hw.elsa.IER |= VAR_8;
 FUNC_2(VAR_12, VAR_7, VAR_12->hw.elsa.IER);

 FUNC_0(VAR_12,"modem quot=0x%x", VAR_14);
 FUNC_2(VAR_12, VAR_9, VAR_16 | VAR_10);
 FUNC_2(VAR_12, VAR_1, VAR_14 & 0xff);
 FUNC_2(VAR_12, VAR_2, VAR_14 >> 8);
 FUNC_2(VAR_12, VAR_9, VAR_16);
 FUNC_1(VAR_12, VAR_11);
}
