
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_10__ {size_t dicPos; } ;
struct TYPE_9__ {scalar_t__ state; size_t unpackSize; scalar_t__ control; int needInitProp; int needInitState; int needInitDic; size_t packSize; TYPE_2__ decoder; } ;
typedef int SRes ;
typedef scalar_t__ ELzmaStatus ;
typedef scalar_t__ ELzmaFinishMode ;
typedef TYPE_1__ CLzma2Dec ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_2__*,size_t,int const*,size_t*,scalar_t__,scalar_t__*) ;
 int FUNC_4 (TYPE_2__*,int,int) ;
 int FUNC_5 (TYPE_2__*,int const*,size_t) ;
 int FUNC_6 (int ) ;
 int VAR_13 ;
 int VAR_14 ;

SRes FUNC_7(CLzma2Dec *VAR_15, size_t VAR_16,
      const uint8_t *VAR_17, size_t *VAR_18, ELzmaFinishMode VAR_19, ELzmaStatus *VAR_20)
{
   size_t VAR_21 = *VAR_18;
   *VAR_18 = 0;
   *VAR_20 = VAR_12;

   while (VAR_15->state != VAR_5)
   {
      size_t VAR_22 = VAR_15->decoder.dicPos;
      if (VAR_15->state == VAR_4)
         return VAR_13;
      if (VAR_22 == VAR_16 && VAR_19 == VAR_6)
      {
         *VAR_20 = VAR_11;
         return VAR_14;
      }
      if (VAR_15->state != VAR_2 && VAR_15->state != VAR_3)
      {
         if (*VAR_18 == VAR_21)
         {
            *VAR_20 = VAR_10;
            return VAR_14;
         }
         (*VAR_18)++;
         VAR_15->state = FUNC_2(VAR_15, *VAR_17++);
         continue;
      }
      {
         size_t VAR_23 = VAR_16 - VAR_22;
         size_t VAR_24 = VAR_21 - *VAR_18;
         ELzmaFinishMode VAR_25 = VAR_6;

         if (VAR_15->unpackSize <= VAR_23)
         {
            VAR_23 = (size_t)VAR_15->unpackSize;
            VAR_25 = VAR_7;
         }

         if (FUNC_1(VAR_15))
         {
            if (*VAR_18 == VAR_21)
            {
               *VAR_20 = VAR_10;
               return VAR_14;
            }

            if (VAR_15->state == VAR_2)
            {
               bool VAR_26 = (VAR_15->control == VAR_0);
               if (VAR_26)
                  VAR_15->needInitProp = VAR_15->needInitState = 1;
               else if (VAR_15->needInitDic)
                  return VAR_13;
               VAR_15->needInitDic = 0;
               FUNC_4(&VAR_15->decoder, VAR_26, 0);
            }

            if (VAR_24 > VAR_23)
               VAR_24 = VAR_23;

            if (VAR_24 == 0)
               return VAR_13;

            FUNC_5(&VAR_15->decoder, VAR_17, VAR_24);

            VAR_17 += VAR_24;
            *VAR_18 += VAR_24;
            VAR_15->unpackSize -= (uint32_t)VAR_24;
            VAR_15->state = (VAR_15->unpackSize == 0) ? VAR_1 : VAR_3;
         }
         else
         {
            size_t VAR_27;
            SRes VAR_28;

            if (VAR_15->state == VAR_2)
            {
               int VAR_29 = FUNC_0(VAR_15);
               bool VAR_30 = (VAR_29 == 3);
               bool VAR_31 = (VAR_29 > 0);
               if ((!VAR_30 && VAR_15->needInitDic) || (!VAR_31 && VAR_15->needInitState))
                  return VAR_13;

               FUNC_4(&VAR_15->decoder, VAR_30, VAR_31);
               VAR_15->needInitDic = 0;
               VAR_15->needInitState = 0;
               VAR_15->state = VAR_3;
            }
            if (VAR_24 > VAR_15->packSize)
               VAR_24 = (size_t)VAR_15->packSize;

            VAR_28 = FUNC_3(&VAR_15->decoder, VAR_22 + VAR_23, VAR_17, &VAR_24, VAR_25, VAR_20);

            VAR_17 += VAR_24;
            *VAR_18 += VAR_24;
            VAR_15->packSize -= (uint32_t)VAR_24;

            VAR_27 = VAR_15->decoder.dicPos - VAR_22;
            VAR_15->unpackSize -= (uint32_t)VAR_27;

            FUNC_6(VAR_28);
            if (*VAR_20 == VAR_10)
               return VAR_28;

            if (VAR_24 == 0 && VAR_27 == 0)
            {
               if (*VAR_20 != VAR_9 ||
                     VAR_15->unpackSize != 0 || VAR_15->packSize != 0)
                  return VAR_13;
               VAR_15->state = VAR_1;
            }
            if (*VAR_20 == VAR_9)
               *VAR_20 = VAR_11;
         }
      }
   }
   *VAR_20 = VAR_8;
   return VAR_14;
}
