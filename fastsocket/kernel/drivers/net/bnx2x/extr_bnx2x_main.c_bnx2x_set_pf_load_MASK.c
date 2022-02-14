
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int pf_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*,int ,int) ;
 int FUNC_4 (struct bnx2x*,int ) ;
 int FUNC_5 (struct bnx2x*,int ) ;

void FUNC_6(struct bnx2x *VAR_7)
{
 u32 VAR_8, VAR_9;
 u32 VAR_10 = FUNC_0(VAR_7) ? VAR_2 :
        VAR_0;
 u32 VAR_11 = FUNC_0(VAR_7) ? VAR_3 :
        VAR_1;

 FUNC_4(VAR_7, VAR_5);
 VAR_9 = FUNC_2(VAR_7, VAR_4);

 FUNC_1(VAR_6, "Old GEN_REG_VAL=0x%08x\n", VAR_9);


 VAR_8 = (VAR_9 & VAR_10) >> VAR_11;


 VAR_8 |= (1 << VAR_7->pf_num);


 VAR_9 &= ~VAR_10;


 VAR_9 |= ((VAR_8 << VAR_11) & VAR_10);

 FUNC_3(VAR_7, VAR_4, VAR_9);
 FUNC_5(VAR_7, VAR_5);
}
