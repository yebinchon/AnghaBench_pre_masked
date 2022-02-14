
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int modem; } ;
struct stlport {scalar_t__ uartaddr; TYPE_1__ stats; } ;
struct stlpanel {unsigned int ackmask; struct stlport** ports; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned char VAR_6 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (char*,struct stlpanel*) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (struct stlport*) ;

__attribute__((used)) static void FUNC_5(struct stlpanel *VAR_7, int VAR_8)
{
 struct stlport *VAR_9;
 unsigned int VAR_10;
 unsigned char VAR_11;

 FUNC_2("stl_cd1400mdmisr(panelp=%p)\n", VAR_7);

 VAR_10 = FUNC_0(VAR_8 + VAR_4);
 if (((VAR_10 & VAR_7->ackmask) != 0) ||
     ((VAR_10 & VAR_0) != VAR_1)) {
  FUNC_3("STALLION: bad MODEM interrupt ack value=%x\n", VAR_10);
  return;
 }
 VAR_9 = VAR_7->ports[(VAR_10 >> 3)];

 FUNC_1((VAR_5 + VAR_9->uartaddr), VAR_8);
 VAR_11 = FUNC_0(VAR_8 + VAR_3);
 if (VAR_11 & VAR_6) {
  FUNC_4(VAR_9);
  VAR_9->stats.modem++;
 }

 FUNC_1((VAR_2 + VAR_9->uartaddr), VAR_8);
 FUNC_1(0, (VAR_8 + VAR_3));
}
