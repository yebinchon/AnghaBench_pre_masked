
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;


 int const VAR_0 ;

__attribute__((used)) static bool FUNC_0(enum AVSampleFormat VAR_1,
      const enum AVSampleFormat *VAR_2)
{
   unsigned VAR_3;

   for (VAR_3 = 0; VAR_2[VAR_3] != VAR_0; VAR_3++)
      if (VAR_1 == VAR_2[VAR_3])
         return 1;
   return 0;
}
