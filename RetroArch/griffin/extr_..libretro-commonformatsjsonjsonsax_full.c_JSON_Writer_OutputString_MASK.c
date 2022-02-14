
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef char byte ;
typedef int WriteBufferData ;
struct TYPE_9__ {int outputEncoding; int flags; } ;
typedef TYPE_1__* JSON_Writer ;
typedef int JSON_Status ;
typedef int Encoding ;
typedef int DecoderResultCode ;
typedef int DecoderOutput ;
typedef int DecoderData ;
typedef char Codepoint ;


 char FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,char const) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char FUNC_6 (TYPE_1__*,char) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 char VAR_3 ;




 int FUNC_8 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_1__*,char const*,size_t) ;
 int FUNC_12 (int *,TYPE_1__*,char) ;
 int FUNC_13 (int *,TYPE_1__*,char) ;

__attribute__((used)) static JSON_Status FUNC_14(JSON_Writer VAR_5, const byte* VAR_6, size_t VAR_7, Encoding VAR_8)
{
   static const byte VAR_9[] = { 0, 0, 0, '"', 0, 0, 0 };
   static const byte* const VAR_10[5] = { VAR_9 + 3, VAR_9 + 3, VAR_9 + 2, VAR_9 + 3, VAR_9 };

   const byte* VAR_11 = VAR_10[VAR_5->outputEncoding - 1];
   size_t VAR_12 = (size_t)FUNC_8(VAR_5->outputEncoding);
   DecoderData VAR_13;
   WriteBufferData VAR_14;
   size_t VAR_15 = 0;

   FUNC_10(&VAR_14);


   if (!FUNC_11(&VAR_14, VAR_5, VAR_11, VAR_12))
      return VAR_1;


   FUNC_3(&VAR_13);
   while (VAR_15 < VAR_7)
   {
      DecoderOutput VAR_16 = FUNC_2(&VAR_13, VAR_8, VAR_6[VAR_15]);
      DecoderResultCode VAR_17 = FUNC_1(VAR_16);
      Codepoint VAR_18;
      Codepoint VAR_19;
      switch (VAR_17)
      {
         case 128:
            VAR_15++;
            break;

         case 131:
            VAR_18 = FUNC_0(VAR_16);
            VAR_19 = FUNC_6(VAR_5, VAR_18);
            switch (VAR_19)
            {
               case 0:

                  if (!FUNC_12(&VAR_14, VAR_5, VAR_18))
                     return VAR_1;
                  break;

               case 'u':

                  if (!FUNC_13(&VAR_14, VAR_5, VAR_18))
                     return VAR_1;
                  break;

               default:

                  if (!FUNC_12(&VAR_14, VAR_5, '\\') ||
                        !FUNC_12(&VAR_14, VAR_5, VAR_19))
                     return VAR_1;
                  break;
            }
            VAR_15++;
            break;

         case 129:
            VAR_15++;

         case 130:
            if (FUNC_5(VAR_5->flags, VAR_4))
            {
               if (!FUNC_13(&VAR_14, VAR_5, VAR_3))
                  return VAR_1;
            }
            else
            {

               if (FUNC_9(&VAR_14, VAR_5))
                  FUNC_7(VAR_5, VAR_0);
               return VAR_1;
            }
            break;
      }
   }
   if (FUNC_4(&VAR_13))
   {
      if (FUNC_5(VAR_5->flags, VAR_4))
      {
         if (!FUNC_13(&VAR_14, VAR_5, VAR_3))
            return VAR_1;
      }
      else
      {

         if (FUNC_9(&VAR_14, VAR_5))
            FUNC_7(VAR_5, VAR_0);
         return VAR_1;
      }
   }


   if (!FUNC_11(&VAR_14, VAR_5, VAR_11, VAR_12) ||
         !FUNC_9(&VAR_14, VAR_5))
      return VAR_1;
   return VAR_2;
}
