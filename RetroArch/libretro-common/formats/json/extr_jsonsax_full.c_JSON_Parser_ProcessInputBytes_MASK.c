
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int byte ;
struct TYPE_6__ {scalar_t__ inputEncoding; int decoderData; } ;
typedef int JSON_Status ;
typedef TYPE_1__* JSON_Parser ;
typedef int DecoderResultCode ;
typedef int DecoderOutput ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,scalar_t__,int const) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int const) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;





JSON_Status FUNC_7(JSON_Parser VAR_3, const byte* VAR_4, size_t VAR_5)
{

   size_t VAR_6 = 0;
   while (VAR_3->inputEncoding == VAR_2 && VAR_6 < VAR_5)
   {
      if (!FUNC_6(VAR_3, VAR_4[VAR_6]))
         return VAR_0;
      VAR_6++;
   }
   while (VAR_6 < VAR_5)
   {
      DecoderOutput VAR_7 = FUNC_3(
            &VAR_3->decoderData, VAR_3->inputEncoding, VAR_4[VAR_6]);
      DecoderResultCode VAR_8 = FUNC_1(VAR_7);
      switch (VAR_8)
      {
         case 128:
            VAR_6++;
            break;

         case 131:
            if (!FUNC_5(
                     VAR_3, FUNC_0(VAR_7),
                     FUNC_2(VAR_7)))
               return VAR_0;
            VAR_6++;
            break;

         case 129:
            VAR_6++;

         case 130:
            if (!FUNC_4(
                     VAR_3, FUNC_2(VAR_7)))
               return VAR_0;
            break;
      }
   }
   return VAR_1;
}
