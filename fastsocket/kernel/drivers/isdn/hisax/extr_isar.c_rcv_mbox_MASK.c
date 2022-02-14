
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct isar_reg {int clsb; } ;
struct IsdnCardState {int debug; int (* BC_Write_Reg ) (struct IsdnCardState*,int,int ,int ) ;int (* BC_Read_Reg ) (struct IsdnCardState*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int *,int) ;
 int FUNC_1 (struct IsdnCardState*,char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (struct IsdnCardState*,int,int ,int ) ;
 int FUNC_4 (struct IsdnCardState*,int,int ) ;
 int FUNC_5 (struct IsdnCardState*,int,int ) ;
 int FUNC_6 (struct IsdnCardState*,int,int ,int ) ;

__attribute__((used)) static inline void
FUNC_7(struct IsdnCardState *VAR_4, struct isar_reg *VAR_5, u_char *VAR_6)
{
 int VAR_7;

 VAR_4->BC_Write_Reg(VAR_4, 1, VAR_2, 0);
 if (VAR_6 && VAR_5->clsb) {
  VAR_6[0] = VAR_4->BC_Read_Reg(VAR_4, 1, VAR_1);
  for (VAR_7=1; VAR_7 < VAR_5->clsb; VAR_7++)
    VAR_6[VAR_7] = VAR_4->BC_Read_Reg(VAR_4, 2, VAR_1);
 }
 VAR_4->BC_Write_Reg(VAR_4, 1, VAR_0, 0);
}
