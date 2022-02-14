
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i24 {long long i24; } ;
typedef long long int8_t ;
typedef long long int64_t ;
typedef long long int32_t ;
typedef long long int16_t ;



__attribute__((used)) static int FUNC_0(long long VAR_0, void *VAR_1, unsigned VAR_2)
{
 switch (VAR_2) {
  case 0:

   break;
  case 1:
   *(int8_t *)VAR_1 = VAR_0;
   break;
  case 2:
   *(int16_t *)VAR_1 = VAR_0;
   break;
  case 3:

   ((struct i24 *)VAR_1)->i24 = VAR_0;
   break;
  case 4:
   *(int32_t *)VAR_1 = VAR_0;
   break;
  case 8:
   *(int64_t *)VAR_1 = VAR_0;
   break;
  default:
   *(int32_t *)VAR_1 = VAR_0;
   VAR_2 = 4;
   break;
 }

 return (int)VAR_2;
}
