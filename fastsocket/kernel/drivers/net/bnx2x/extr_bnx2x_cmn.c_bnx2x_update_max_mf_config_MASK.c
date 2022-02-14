
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int* mf_config; } ;


 size_t FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*,int) ;
 int FUNC_2 (struct bnx2x*,int ,int) ;

void FUNC_3(struct bnx2x *VAR_3, u32 VAR_4)
{

 u32 VAR_5 = VAR_3->mf_config[FUNC_0(VAR_3)];

 if (VAR_4 != FUNC_1(VAR_3, VAR_5)) {

  VAR_5 &= ~VAR_1;


  VAR_5 |= (VAR_4 << VAR_2)
    & VAR_1;

  FUNC_2(VAR_3, VAR_0, VAR_5);
 }
}
