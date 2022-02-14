
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int ,unsigned long,unsigned long*) ;

__attribute__((used)) static unsigned long FUNC_2(unsigned long VAR_0)
{
 unsigned long VAR_1;
 unsigned long VAR_2;
 u64 VAR_3[5];

 VAR_2 = FUNC_1(0, VAR_0 & ~3UL, VAR_3);

 VAR_1 = VAR_3[VAR_0&3];

 FUNC_0(VAR_2 != 0);

 return VAR_1;
}
