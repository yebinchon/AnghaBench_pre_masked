
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static size_t
FUNC_1(void * VAR_0, size_t VAR_1)
{
 uint64_t * VAR_2;
 size_t VAR_3;

 if (VAR_1 > 8) {
  VAR_1 = 8;
 }

 VAR_2 = VAR_0;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3 += 1) {
  if (!FUNC_0(VAR_2 + VAR_3, 10)) {
   return VAR_3;
  }
 }

 return VAR_1;
}
