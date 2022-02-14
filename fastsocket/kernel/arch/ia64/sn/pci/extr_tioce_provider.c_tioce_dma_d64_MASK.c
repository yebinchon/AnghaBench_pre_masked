
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;


 int VAR_0 ;

__attribute__((used)) static u64
FUNC_0(unsigned long VAR_1, int VAR_2)
{
 u64 VAR_3;

 VAR_3 = VAR_1 | (1UL << 63);
 if (VAR_2 & VAR_0)
  VAR_3 |= (1UL << 61);

 return VAR_3;
}
