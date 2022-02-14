
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint64_t ;



__attribute__((used)) static int FUNC_0(const int VAR_0, const int VAR_1, const uint64_t* const VAR_2, const int VAR_3, const uint64_t* const VAR_4, const int VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = 0;
 int VAR_9 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  for (VAR_7 = 0; VAR_7 < 64; VAR_7++)
   if (VAR_4[VAR_6] & (uint64_t)1 << VAR_7)
   {
    if (VAR_8)
     return 0;
   } else
    break;
  VAR_9 += VAR_7;


  if (VAR_7 < 64)
   VAR_8 = 1;

  for (; VAR_7 < 64; VAR_7++)
   if (VAR_4[VAR_6] & (uint64_t)1 << VAR_7)
    return 0;
 }
 return VAR_1 == VAR_9;
}
