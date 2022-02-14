
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_8__ {scalar_t__ remainLen; scalar_t__ needFlush; scalar_t__ tempBufSize; scalar_t__* tempBuf; size_t dicPos; scalar_t__ code; scalar_t__ const* buf; scalar_t__ needInitState; } ;
typedef int SRes ;
typedef int ELzmaStatus ;
typedef scalar_t__ ELzmaFinishMode ;
typedef TYPE_1__ CLzmaDec ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_1__*,size_t,scalar_t__ const*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__ const*,unsigned int) ;
 int FUNC_4 (TYPE_1__*,size_t) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_5 (scalar_t__*,scalar_t__ const*,size_t) ;

SRes FUNC_6(CLzmaDec *VAR_13, size_t VAR_14, const uint8_t *VAR_15, size_t *VAR_16,
      ELzmaFinishMode VAR_17, ELzmaStatus *VAR_18)
{
   size_t VAR_19 = *VAR_16;
   (*VAR_16) = 0;
   FUNC_4(VAR_13, VAR_14);

   *VAR_18 = VAR_8;

   while (VAR_13->remainLen != VAR_12)
   {
      int VAR_20;

      if (VAR_13->needFlush != 0)
      {
         for (; VAR_19 > 0 && VAR_13->tempBufSize < VAR_9; (*VAR_16)++, VAR_19--)
            VAR_13->tempBuf[VAR_13->tempBufSize++] = *VAR_15++;
         if (VAR_13->tempBufSize < VAR_9)
         {
            *VAR_18 = VAR_6;
            return VAR_11;
         }
         if (VAR_13->tempBuf[0] != 0)
            return VAR_10;

         FUNC_1(VAR_13, VAR_13->tempBuf);
         VAR_13->tempBufSize = 0;
      }

      VAR_20 = 0;
      if (VAR_13->dicPos >= VAR_14)
      {
         if (VAR_13->remainLen == 0 && VAR_13->code == 0)
         {
            *VAR_18 = VAR_5;
            return VAR_11;
         }
         if (VAR_17 == VAR_2)
         {
            *VAR_18 = VAR_7;
            return VAR_11;
         }
         if (VAR_13->remainLen != 0)
         {
            *VAR_18 = VAR_7;
            return VAR_10;
         }
         VAR_20 = 1;
      }

      if (VAR_13->needInitState)
         FUNC_2(VAR_13);

      if (VAR_13->tempBufSize == 0)
      {
         size_t VAR_21;
         const uint8_t *VAR_22;
         if (VAR_19 < VAR_3 || VAR_20)
         {
            int VAR_23 = FUNC_3(VAR_13, VAR_15, VAR_19);
            if (VAR_23 == VAR_0)
            {
               FUNC_5(VAR_13->tempBuf, VAR_15, VAR_19);
               VAR_13->tempBufSize = (unsigned)VAR_19;
               (*VAR_16) += VAR_19;
               *VAR_18 = VAR_6;
               return VAR_11;
            }
            if (VAR_20 && VAR_23 != VAR_1)
            {
               *VAR_18 = VAR_7;
               return VAR_10;
            }
            VAR_22 = VAR_15;
         }
         else
            VAR_22 = VAR_15 + VAR_19 - VAR_3;
         VAR_13->buf = VAR_15;
         if (FUNC_0(VAR_13, VAR_14, VAR_22) != 0)
            return VAR_10;
         VAR_21 = (size_t)(VAR_13->buf - VAR_15);
         (*VAR_16) += VAR_21;
         VAR_15 += VAR_21;
         VAR_19 -= VAR_21;
      }
      else
      {
         unsigned VAR_24 = VAR_13->tempBufSize, VAR_25 = 0;
         while (VAR_24 < VAR_3 && VAR_25 < VAR_19)
            VAR_13->tempBuf[VAR_24++] = VAR_15[VAR_25++];
         VAR_13->tempBufSize = VAR_24;
         if (VAR_24 < VAR_3 || VAR_20)
         {
            int VAR_26 = FUNC_3(VAR_13, VAR_13->tempBuf, VAR_24);
            if (VAR_26 == VAR_0)
            {
               (*VAR_16) += VAR_25;
               *VAR_18 = VAR_6;
               return VAR_11;
            }
            if (VAR_20 && VAR_26 != VAR_1)
            {
               *VAR_18 = VAR_7;
               return VAR_10;
            }
         }
         VAR_13->buf = VAR_13->tempBuf;
         if (FUNC_0(VAR_13, VAR_14, VAR_13->buf) != 0)
            return VAR_10;
         VAR_25 -= (VAR_24 - (unsigned)(VAR_13->buf - VAR_13->tempBuf));
         (*VAR_16) += VAR_25;
         VAR_15 += VAR_25;
         VAR_19 -= VAR_25;
         VAR_13->tempBufSize = 0;
      }
   }
   if (VAR_13->code == 0)
      *VAR_18 = VAR_4;
   return (VAR_13->code == 0) ? VAR_11 : VAR_10;
}
