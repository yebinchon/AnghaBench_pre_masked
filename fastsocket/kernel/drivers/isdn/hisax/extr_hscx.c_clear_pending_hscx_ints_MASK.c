
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IsdnCardState {int (* BC_Read_Reg ) (struct IsdnCardState*,int,int ) ;int (* BC_Write_Reg ) (struct IsdnCardState*,int,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct IsdnCardState*,char*,int) ;
 int FUNC_1 (struct IsdnCardState*,int,int ) ;
 int FUNC_2 (struct IsdnCardState*,int,int ) ;
 int FUNC_3 (struct IsdnCardState*,int,int ) ;
 int FUNC_4 (struct IsdnCardState*,int,int ) ;
 int FUNC_5 (struct IsdnCardState*,int,int ) ;
 int FUNC_6 (struct IsdnCardState*,int,int ) ;
 int FUNC_7 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_8 (struct IsdnCardState*,int,int ,int) ;

void
FUNC_9(struct IsdnCardState *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = VAR_4->BC_Read_Reg(VAR_4, 1, VAR_1);
 FUNC_0(VAR_4, "HSCX B ISTA %x", VAR_5);
 if (VAR_5 & 0x01) {
  VAR_6 = VAR_4->BC_Read_Reg(VAR_4, 1, VAR_0);
  FUNC_0(VAR_4, "HSCX B EXIR %x", VAR_6);
 }
 if (VAR_5 & 0x02) {
  VAR_6 = VAR_4->BC_Read_Reg(VAR_4, 0, VAR_0);
  FUNC_0(VAR_4, "HSCX A EXIR %x", VAR_6);
 }
 VAR_5 = VAR_4->BC_Read_Reg(VAR_4, 0, VAR_1);
 FUNC_0(VAR_4, "HSCX A ISTA %x", VAR_5);
 VAR_5 = VAR_4->BC_Read_Reg(VAR_4, 1, VAR_3);
 FUNC_0(VAR_4, "HSCX B STAR %x", VAR_5);
 VAR_5 = VAR_4->BC_Read_Reg(VAR_4, 0, VAR_3);
 FUNC_0(VAR_4, "HSCX A STAR %x", VAR_5);

 VAR_4->BC_Write_Reg(VAR_4, 0, VAR_2, 0xFF);
 VAR_4->BC_Write_Reg(VAR_4, 1, VAR_2, 0xFF);
}
