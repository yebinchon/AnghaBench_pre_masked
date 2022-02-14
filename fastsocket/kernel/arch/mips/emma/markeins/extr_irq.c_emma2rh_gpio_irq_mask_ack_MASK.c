
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_3)
{
 u32 VAR_4;

 VAR_3 -= VAR_2;
 FUNC_1(VAR_1, ~(1 << VAR_3));

 VAR_4 = FUNC_0(VAR_0);
 VAR_4 &= ~(1 << VAR_3);
 FUNC_1(VAR_0, VAR_4);
}
