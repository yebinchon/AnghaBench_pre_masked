
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IsdnCardState {int (* readisac ) (struct IsdnCardState*,int ) ;int (* BC_Read_Reg ) (struct IsdnCardState*,int,int ) ;int (* BC_Write_Reg ) (struct IsdnCardState*,int,int ,int) ;int (* writeisac ) (struct IsdnCardState*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct IsdnCardState*,int ,int) ;
 int FUNC_1 (struct IsdnCardState*,int ,int) ;
 int FUNC_2 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_3 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_4 (struct IsdnCardState*,int ) ;
 int FUNC_5 (struct IsdnCardState*,int,int ) ;
 int FUNC_6 (struct IsdnCardState*,int,int ) ;
 int FUNC_7 (struct IsdnCardState*,int ) ;
 int FUNC_8 (struct IsdnCardState*,int ) ;

__attribute__((used)) static void
FUNC_9(struct IsdnCardState *VAR_7)
{
 int VAR_8;


  VAR_7->writeisac(VAR_7, VAR_4, 0xff);
 VAR_7->writeisac(VAR_7, VAR_6, 0xff);
 VAR_7->BC_Write_Reg(VAR_7, 0, VAR_5, 0xff);
 VAR_7->BC_Write_Reg(VAR_7, 1, VAR_5, 0xff);

  VAR_8 = VAR_7->readisac(VAR_7, VAR_1);
  if (VAR_8 &0x80) VAR_7->BC_Read_Reg(VAR_7, 0, VAR_2);
  if (VAR_8 &0x40) VAR_7->BC_Read_Reg(VAR_7, 1, VAR_2);
  if (VAR_8 &0x10) VAR_7->readisac(VAR_7, VAR_0);
  if (VAR_8 &0x01) VAR_7->readisac(VAR_7, VAR_3);
}
