
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int n ;


 int FUNC_0 (int,int) ;

int
FUNC_1(uint64_t VAR_0)
{




 if (VAR_0 == 0)
  return sizeof(VAR_0) * 8;
 int VAR_1 = 0;
 while (!FUNC_0(VAR_0, 1)) {
  VAR_0 >>= 1;
  ++VAR_1;
 }
 return VAR_1;
}
