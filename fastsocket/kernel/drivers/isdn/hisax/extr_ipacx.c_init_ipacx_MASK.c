
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IsdnCardState {int (* BC_Write_Reg ) (struct IsdnCardState*,int,int ,int) ;int (* writeisac ) (struct IsdnCardState*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct IsdnCardState*,int) ;
 int FUNC_1 (struct IsdnCardState*) ;
 int FUNC_2 (struct IsdnCardState*) ;
 int FUNC_3 (struct IsdnCardState*,int ) ;
 int FUNC_4 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_5 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_6 (struct IsdnCardState*,int ,int) ;
 int FUNC_7 (struct IsdnCardState*,int ,int) ;
 int FUNC_8 (struct IsdnCardState*,int ,int) ;
 int FUNC_9 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_10 (struct IsdnCardState*,int,int ,int) ;

void
FUNC_11(struct IsdnCardState *VAR_9, int VAR_10)
{
 if (VAR_10 &1) {



  FUNC_1(VAR_9);
  FUNC_0(VAR_9, 0);
  FUNC_0(VAR_9, 1);
  FUNC_2(VAR_9);
 }
 if (VAR_10 &2) {
  VAR_9->BC_Write_Reg(VAR_9, 0, VAR_4, VAR_6);
  VAR_9->BC_Write_Reg(VAR_9, 1, VAR_4, VAR_6);
  VAR_9->writeisac(VAR_9, VAR_5, VAR_7);
  VAR_9->writeisac(VAR_9, VAR_3, VAR_8);


  VAR_9->writeisac(VAR_9, VAR_1, 0x41);
  VAR_9->BC_Write_Reg(VAR_9, 0, VAR_0, 0x41);
  VAR_9->BC_Write_Reg(VAR_9, 1, VAR_0, 0x41);
  FUNC_3(VAR_9, VAR_2);
 }
}
