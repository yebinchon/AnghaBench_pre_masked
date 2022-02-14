
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isar_reg {int clsb; int cmsb; int iis; } ;
struct IsdnCardState {int debug; int (* BC_Read_Reg ) (struct IsdnCardState*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct IsdnCardState*,char*,int ,int ,int ) ;
 int FUNC_1 (struct IsdnCardState*,int,int ) ;
 int FUNC_2 (struct IsdnCardState*,int,int ) ;
 int FUNC_3 (struct IsdnCardState*,int,int ) ;

__attribute__((used)) static inline void
FUNC_4(struct IsdnCardState *VAR_4, struct isar_reg *VAR_5)
{
 VAR_5->iis = VAR_4->BC_Read_Reg(VAR_4, 1, VAR_2);
 VAR_5->cmsb = VAR_4->BC_Read_Reg(VAR_4, 1, VAR_0);
 VAR_5->clsb = VAR_4->BC_Read_Reg(VAR_4, 1, VAR_1);





}
