
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int byte ;
struct TYPE_8__ {int state; int bits; } ;
struct TYPE_7__ {scalar_t__ inputEncoding; TYPE_6__ decoderData; } ;
typedef int JSON_Status ;
typedef TYPE_1__* JSON_Parser ;





 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int*,size_t) ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static JSON_Status FUNC_5(JSON_Parser VAR_7)
{
   if (VAR_7->inputEncoding == VAR_6 &&
         VAR_7->decoderData.state != VAR_0)
   {
      byte VAR_8[3];
      size_t VAR_9 = 0;
      VAR_8[0] = (byte)(VAR_7->decoderData.bits >> 24);
      VAR_8[1] = (byte)(VAR_7->decoderData.bits >> 16);
      VAR_8[2] = (byte)(VAR_7->decoderData.bits >> 8);

      switch (VAR_7->decoderData.state)
      {
         case 130:
            VAR_7->inputEncoding = VAR_5;
            VAR_9 = 1;
            break;

         case 129:

            if (VAR_8[0] == 0xFF && VAR_8[1] == 0xFE)
               VAR_7->inputEncoding = VAR_4;

            else if (VAR_8[0] == 0xFE && VAR_8[1] == 0xFF)
               VAR_7->inputEncoding = VAR_3;
            else if (VAR_8[0] != 0x00)
            {


               VAR_7->inputEncoding = VAR_8[1] ? VAR_5 : VAR_4;
            }

            else if (VAR_8[1] != 0x00)
               VAR_7->inputEncoding = VAR_3;

            else
               return FUNC_3(VAR_7, 2);
            VAR_9 = 2;
            break;

         case 128:
            VAR_7->inputEncoding = VAR_5;
            VAR_9 = 3;
            break;
      }

      if (!FUNC_2(VAR_7))
         return VAR_1;


      VAR_7->decoderData.state = VAR_0;
      VAR_7->decoderData.bits = 0;
      if (!FUNC_4(VAR_7, VAR_8, VAR_9))
         return VAR_1;
   }


   if (FUNC_1(&VAR_7->decoderData))
      return FUNC_3(
            VAR_7, FUNC_0(VAR_7->decoderData.state));
   return VAR_2;
}
