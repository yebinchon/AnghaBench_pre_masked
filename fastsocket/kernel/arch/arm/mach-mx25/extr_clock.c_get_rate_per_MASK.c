
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (int *) ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_3(int VAR_2)
{
 unsigned long VAR_3 = (VAR_2 & 0x3) * 8;
 unsigned long VAR_4 = VAR_2 & ~0x3;
 unsigned long VAR_5 = (FUNC_2(VAR_1 + VAR_0 + VAR_4) >> VAR_3) & 0x3f;
 unsigned long VAR_6;

 if (FUNC_2(VAR_1 + 0x64) & (1 << VAR_2))
  VAR_6 = FUNC_1();
 else
  VAR_6 = FUNC_0(((void*)0));

 return VAR_6 / (VAR_5 + 1);
}
