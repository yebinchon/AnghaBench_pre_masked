
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int,int *,scalar_t__) ;
 int * VAR_3 ;
 int FUNC_2 (unsigned int) ;
 unsigned int VAR_4 ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_5)
{
 int VAR_6 = VAR_5 & (~(VAR_2 - 1));

 if (FUNC_0()) {
  int VAR_7 = 0;





  if (VAR_5 == VAR_1)
   VAR_7 = FUNC_2(VAR_5);

  if (!VAR_7)
   VAR_4 = VAR_5;
 }

 VAR_5 &= (VAR_2 - 1);

 FUNC_1(1 << VAR_5, &VAR_3[0], VAR_0 + VAR_6);
}
