
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int byte ;
struct TYPE_8__ {int state; int bits; } ;
struct TYPE_7__ {TYPE_6__ decoderData; void* inputEncoding; } ;
typedef int JSON_Status ;
typedef TYPE_1__* JSON_Parser ;






 int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int*,int) ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static JSON_Status FUNC_4(JSON_Parser VAR_9, byte VAR_10)
{


   byte VAR_11[VAR_8];

   switch (VAR_9->decoderData.state)
   {
      case 128:
         VAR_9->decoderData.state = 131;
         VAR_9->decoderData.bits = (uint32_t)VAR_10 << 24;
         break;

      case 131:
         VAR_9->decoderData.state = 130;
         VAR_9->decoderData.bits |= (uint32_t)VAR_10 << 16;
         break;

      case 130:
         VAR_9->decoderData.state = 129;
         VAR_9->decoderData.bits |= (uint32_t)VAR_10 << 8;
         break;

      case 129:
         VAR_11[0] = (byte)(VAR_9->decoderData.bits >> 24);
         VAR_11[1] = (byte)(VAR_9->decoderData.bits >> 16);
         VAR_11[2] = (byte)(VAR_9->decoderData.bits >> 8);
         VAR_11[3] = (byte)(VAR_10);
         if (VAR_11[0] == 0xEF && VAR_11[1] == 0xBB && VAR_11[2] == 0xBF)
         {

            VAR_9->inputEncoding = VAR_6;
         }
         else if (VAR_11[0] == 0xFF && VAR_11[1] == 0xFE && VAR_11[3] == 0x00)
         {


            VAR_9->inputEncoding = (VAR_11[2] == 0x00) ? VAR_5 : VAR_3;
         }
         else if (VAR_11[0] == 0x00 && VAR_11[1] == 0x00 && VAR_11[2] == 0xFE && VAR_11[3] == 0xFF)
         {

            VAR_9->inputEncoding = VAR_4;
         }
         else if (VAR_11[0] == 0xFE && VAR_11[1] == 0xFF)
         {

            VAR_9->inputEncoding = VAR_2;
         }
         else if (VAR_11[0] != 0x00)
         {

            if (VAR_11[1] != 0x00)
            {

               VAR_9->inputEncoding = VAR_6;
            }
            else if (VAR_11[2] != 0x00)
            {

               VAR_9->inputEncoding = VAR_3;
            }
            else if (VAR_11[3] == 0x00)
            {

               VAR_9->inputEncoding = VAR_5;
            }
            else
            {

            }
         }
         else if (VAR_11[1] != 0x00)
         {

            VAR_9->inputEncoding = VAR_2;
         }
         else if (VAR_11[2] == 0x00 && VAR_11[3] != 0x00)
         {

            VAR_9->inputEncoding = VAR_4;
         }
         else
         {


         }

         if (VAR_9->inputEncoding == VAR_7)
            return FUNC_2(VAR_9, 4);

         if (!FUNC_1(VAR_9))
            return VAR_0;


         FUNC_0(&VAR_9->decoderData);
         return FUNC_3(VAR_9, VAR_11, 4);
   }


   return VAR_1;
}
