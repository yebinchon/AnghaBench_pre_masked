
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct musb {int mregs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(struct musb *VAR_2, u8 VAR_3)
{
 u8 VAR_4 = FUNC_0(VAR_2->mregs, VAR_0);

 VAR_4 |= VAR_1;
 FUNC_1(VAR_2->mregs, VAR_0, VAR_4);

 return 0;
}
