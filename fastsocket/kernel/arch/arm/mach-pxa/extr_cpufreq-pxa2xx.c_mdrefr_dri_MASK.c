
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_2(unsigned int VAR_2)
{
 u32 VAR_3 = 0;

 if (FUNC_0())
  VAR_3 = ((VAR_2 * VAR_0) / (VAR_1 * 32));
 if (FUNC_1())
  VAR_3 = ((VAR_2 * VAR_0) / (VAR_1 - 31)) / 32;
 return VAR_3;
}
