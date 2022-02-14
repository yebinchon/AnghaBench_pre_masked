
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;
typedef int WriteBufferData ;
typedef scalar_t__ LexerState ;
typedef int JSON_Writer ;
typedef int JSON_Status ;
typedef int Encoding ;
typedef int DecoderResultCode ;
typedef int DecoderOutput ;
typedef int DecoderData ;
typedef int Codepoint ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int const) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;




 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ) ;

__attribute__((used)) static JSON_Status FUNC_10(JSON_Writer VAR_7, const byte* VAR_8, size_t VAR_9, Encoding VAR_10)
{
   DecoderData VAR_11;
   WriteBufferData VAR_12;
   LexerState VAR_13 = VAR_6;
   size_t VAR_14;
   FUNC_3(&VAR_11);
   FUNC_8(&VAR_12);
   for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
   {
      DecoderOutput VAR_15 = FUNC_2(&VAR_11, VAR_10, VAR_8[VAR_14]);
      DecoderResultCode VAR_16 = FUNC_1(VAR_15);
      Codepoint VAR_17;
      switch (VAR_16)
      {
         case 128:
            break;

         case 131:
            VAR_17 = FUNC_0(VAR_15);
            VAR_13 = FUNC_6(VAR_13, VAR_17);
            if (VAR_13 == VAR_5)
            {

               if (FUNC_7(&VAR_12, VAR_7))
                  FUNC_5(VAR_7, VAR_2);
               return VAR_3;
            }
            if (!FUNC_9(&VAR_12, VAR_7, VAR_17))
               return VAR_3;
            break;

         case 129:
         case 130:

            if (FUNC_7(&VAR_12, VAR_7))
               FUNC_5(VAR_7, VAR_1);
            return VAR_3;
      }
   }
   if (!FUNC_7(&VAR_12, VAR_7))
      return VAR_3;
   if (FUNC_4(&VAR_11))
   {
      FUNC_5(VAR_7, VAR_1);
      return VAR_3;
   }
   if (FUNC_6(VAR_13, VAR_0) == VAR_5)
   {
      FUNC_5(VAR_7, VAR_2);
      return VAR_3;
   }
   return VAR_4;
}
