
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IsdnCardState {int (* writeisac ) (struct IsdnCardState*,int ,int) ;int (* BC_Write_Reg ) (struct IsdnCardState*,int,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct IsdnCardState*) ;
 int FUNC_1 (struct IsdnCardState*) ;
 int FUNC_2 (struct IsdnCardState*) ;
 int FUNC_3 (struct IsdnCardState*) ;
 int FUNC_4 (struct IsdnCardState*,int ,int) ;
 int FUNC_5 (struct IsdnCardState*,int,int ,int ) ;
 int FUNC_6 (struct IsdnCardState*,int,int ,int ) ;
 int FUNC_7 (struct IsdnCardState*,int ,int) ;

void
FUNC_8(struct IsdnCardState *VAR_3, int VAR_4)
{
 if (VAR_4 & 1) {
  FUNC_1(VAR_3);
  FUNC_0(VAR_3);
  FUNC_3(VAR_3);
  FUNC_2(VAR_3);
 }
 if (VAR_4 & 2) {

  VAR_3->writeisac(VAR_3, VAR_2, 0);
  VAR_3->BC_Write_Reg(VAR_3, 0, VAR_0, 0);
  VAR_3->BC_Write_Reg(VAR_3, 1, VAR_0, 0);

  VAR_3->writeisac(VAR_3, VAR_1, 0x41);
 }
}
