
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(unsigned long VAR_1)
{
 int VAR_2;

 VAR_1 = (VAR_1 - 1) >> (VAR_0 - 1);
 VAR_2 = VAR_0 - 1;
 do {
  VAR_1 >>= 1;
  VAR_2++;
 } while (VAR_1);
 VAR_1 = 1 << VAR_2;
 return VAR_1;
}
