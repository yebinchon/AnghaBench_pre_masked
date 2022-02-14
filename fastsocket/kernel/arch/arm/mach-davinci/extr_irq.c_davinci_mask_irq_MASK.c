
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_2)
{
 unsigned int VAR_3;
 u32 VAR_4;

 VAR_3 = 1 << FUNC_0(VAR_2);

 if (VAR_2 > 31) {
  VAR_4 = FUNC_1(VAR_1);
  VAR_4 &= ~VAR_3;
  FUNC_2(VAR_4, VAR_1);
 } else {
  VAR_4 = FUNC_1(VAR_0);
  VAR_4 &= ~VAR_3;
  FUNC_2(VAR_4, VAR_0);
 }
}
