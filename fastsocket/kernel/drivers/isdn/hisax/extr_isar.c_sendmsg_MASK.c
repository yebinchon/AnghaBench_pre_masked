
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct IsdnCardState {int debug; int (* BC_Write_Reg ) (struct IsdnCardState*,int,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int*,int) ;
 int FUNC_1 (struct IsdnCardState*,char*,...) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_4 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_5 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_6 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_7 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_8 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_9 (struct IsdnCardState*,int) ;

__attribute__((used)) static int
FUNC_10(struct IsdnCardState *VAR_7, u_char VAR_8, u_char VAR_9, u_char VAR_10,
 u_char *VAR_11)
{
 int VAR_12;

 if (!FUNC_9(VAR_7, 4000))
  return(0);




 VAR_7->BC_Write_Reg(VAR_7, 0, VAR_0, VAR_9);
 VAR_7->BC_Write_Reg(VAR_7, 0, VAR_1, VAR_10);
 VAR_7->BC_Write_Reg(VAR_7, 0, VAR_4, 0);
 if (VAR_11 && VAR_10) {
  VAR_7->BC_Write_Reg(VAR_7, 1, VAR_3, VAR_11[0]);
  for (VAR_12=1; VAR_12<VAR_10; VAR_12++)
   VAR_7->BC_Write_Reg(VAR_7, 2, VAR_3, VAR_11[VAR_12]);
 }
 VAR_7->BC_Write_Reg(VAR_7, 1, VAR_2, VAR_8);
 FUNC_9(VAR_7, 10000);
 return(1);
}
