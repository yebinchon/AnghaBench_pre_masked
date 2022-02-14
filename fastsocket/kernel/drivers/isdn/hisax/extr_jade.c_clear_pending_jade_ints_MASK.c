
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IsdnCardState {int (* BC_Read_Reg ) (struct IsdnCardState*,int,int ) ;int (* BC_Write_Reg ) (struct IsdnCardState*,int,int ,int) ;} ;


 int FUNC_0 (struct IsdnCardState*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_3 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_4 (struct IsdnCardState*,int,int ) ;
 int FUNC_5 (struct IsdnCardState*,int,int ) ;
 int FUNC_6 (struct IsdnCardState*,int,int ) ;
 int FUNC_7 (struct IsdnCardState*,int,int ) ;
 int FUNC_8 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_9 (struct IsdnCardState*,int,int ,int) ;

void
FUNC_10(struct IsdnCardState *VAR_3)
{
 int VAR_4;
 char VAR_5[64];

 VAR_3->BC_Write_Reg(VAR_3, 0, VAR_0, 0x00);
 VAR_3->BC_Write_Reg(VAR_3, 1, VAR_0, 0x00);

 VAR_4 = VAR_3->BC_Read_Reg(VAR_3, 1, VAR_1);
 FUNC_1(VAR_5, "jade B ISTA %x", VAR_4);
 FUNC_0(VAR_3, VAR_5);
 VAR_4 = VAR_3->BC_Read_Reg(VAR_3, 0, VAR_1);
 FUNC_1(VAR_5, "jade A ISTA %x", VAR_4);
 FUNC_0(VAR_3, VAR_5);
 VAR_4 = VAR_3->BC_Read_Reg(VAR_3, 1, VAR_2);
 FUNC_1(VAR_5, "jade B STAR %x", VAR_4);
 FUNC_0(VAR_3, VAR_5);
 VAR_4 = VAR_3->BC_Read_Reg(VAR_3, 0, VAR_2);
 FUNC_1(VAR_5, "jade A STAR %x", VAR_4);
 FUNC_0(VAR_3, VAR_5);

 VAR_3->BC_Write_Reg(VAR_3, 0, VAR_0, 0xF8);
 VAR_3->BC_Write_Reg(VAR_3, 1, VAR_0, 0xF8);
}
