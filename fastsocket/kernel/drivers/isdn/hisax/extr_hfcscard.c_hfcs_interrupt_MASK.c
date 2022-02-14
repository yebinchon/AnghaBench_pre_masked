
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_char ;
struct IsdnCardState {int (* BC_Read_Reg ) (struct IsdnCardState*,int ,int ) ;int debug; int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct IsdnCardState*,char*,int,...) ;
 int FUNC_1 (struct IsdnCardState*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct IsdnCardState*,int ,int ) ;
 int FUNC_5 (struct IsdnCardState*,int ,int ) ;

__attribute__((used)) static irqreturn_t
FUNC_6(int VAR_7, void *VAR_8)
{
 struct IsdnCardState *VAR_9 = VAR_8;
 u_char VAR_10, VAR_11;
 u_long VAR_12;

 FUNC_2(&VAR_9->lock, VAR_12);
 if ((VAR_0 | VAR_1) &
  (VAR_11 = VAR_9->BC_Read_Reg(VAR_9, VAR_2, VAR_4))) {
  VAR_10 = VAR_9->BC_Read_Reg(VAR_9, VAR_2, VAR_3);
  if (VAR_9->debug & VAR_6)
   FUNC_0(VAR_9, "HFCS: stat(%02x) s1(%02x)", VAR_11, VAR_10);
  FUNC_1(VAR_9, VAR_10);
 } else {
  if (VAR_9->debug & VAR_6)
   FUNC_0(VAR_9, "HFCS: irq_no_irq stat(%02x)", VAR_11);
 }
 FUNC_3(&VAR_9->lock, VAR_12);
 return VAR_5;
}
