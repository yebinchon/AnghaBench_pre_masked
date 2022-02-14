
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {size_t dicPos; size_t dicBufSize; scalar_t__ dic; } ;
typedef scalar_t__ SRes ;
typedef int ELzmaStatus ;
typedef int ELzmaFinishMode ;
typedef TYPE_1__ CLzmaDec ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,size_t,int const*,size_t*,int ,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__,size_t) ;

SRes FUNC_2(CLzmaDec *VAR_2, uint8_t *VAR_3, size_t *VAR_4, const uint8_t *VAR_5, size_t *VAR_6, ELzmaFinishMode VAR_7, ELzmaStatus *VAR_8)
{
   size_t VAR_9 = *VAR_4;
   size_t VAR_10 = *VAR_6;
   *VAR_6 = *VAR_4 = 0;
   for (;;)
   {
      size_t VAR_11 = VAR_10, VAR_12, VAR_13;
      ELzmaFinishMode VAR_14;
      SRes VAR_15;
      if (VAR_2->dicPos == VAR_2->dicBufSize)
         VAR_2->dicPos = 0;
      VAR_13 = VAR_2->dicPos;
      if (VAR_9 > VAR_2->dicBufSize - VAR_13)
      {
         VAR_12 = VAR_2->dicBufSize;
         VAR_14 = VAR_0;
      }
      else
      {
         VAR_12 = VAR_13 + VAR_9;
         VAR_14 = VAR_7;
      }

      VAR_15 = FUNC_0(VAR_2, VAR_12, VAR_5, &VAR_11, VAR_14, VAR_8);
      VAR_5 += VAR_11;
      VAR_10 -= VAR_11;
      *VAR_6 += VAR_11;
      VAR_12 = VAR_2->dicPos - VAR_13;
      FUNC_1(VAR_3, VAR_2->dic + VAR_13, VAR_12);
      VAR_3 += VAR_12;
      VAR_9 -= VAR_12;
      *VAR_4 += VAR_12;
      if (VAR_15 != 0)
         return VAR_15;
      if (VAR_12 == 0 || VAR_9 == 0)
         return VAR_1;
   }
}
