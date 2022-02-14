
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *,scalar_t__) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_3)
{
 int VAR_4 = VAR_3 & (~(VAR_1 - 1));

 VAR_3 &= (VAR_1 - 1);

 FUNC_0(1 << VAR_3, &VAR_2[0], VAR_0 + VAR_4);
}
