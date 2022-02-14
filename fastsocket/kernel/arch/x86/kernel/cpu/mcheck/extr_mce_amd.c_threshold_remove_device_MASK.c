
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  if (!(FUNC_0(VAR_1, VAR_2) & (1 << VAR_3)))
   continue;
  FUNC_1(VAR_2, VAR_3);
 }
}
