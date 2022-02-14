
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int,unsigned long*) ;
 int FUNC_1 (unsigned int,unsigned long*) ;

__attribute__((used)) static void FUNC_2(unsigned long *VAR_0, unsigned int VAR_1,
         unsigned int VAR_2, int VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = VAR_1; VAR_4 < VAR_1 + VAR_2; VAR_4++) {
  if (VAR_3)
   FUNC_1(VAR_4, VAR_0);
  else
   FUNC_0(VAR_4, VAR_0);
 }
}
