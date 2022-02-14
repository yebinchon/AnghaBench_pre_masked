
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (size_t,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(const unsigned char *VAR_1, size_t VAR_2)
{
   unsigned VAR_3;
   const char *VAR_4 = ((void*)0);
   unsigned char VAR_5;
   unsigned char VAR_6;
   unsigned char VAR_7;

   if (VAR_2 < 16)
   {
      FUNC_2("[CDROM] Sense data buffer length too small.\n");
      FUNC_1(VAR_0);
      return;
   }

   VAR_5 = VAR_1[2] & 0xF;
   VAR_6 = VAR_1[12];
   VAR_7 = VAR_1[13];

   FUNC_2("[CDROM] Sense Data: ");

   for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2, 16); VAR_3++)
   {
      FUNC_2("%02X ", VAR_1[VAR_3]);
   }

   FUNC_2("\n");

   if (VAR_1[0] == 0x70)
      FUNC_2("[CDROM] CURRENT ERROR:\n");
   if (VAR_1[0] == 0x71)
      FUNC_2("[CDROM] DEFERRED ERROR:\n");

   switch (VAR_5)
   {
      case 0:
         VAR_4 = "NO SENSE";
         break;
      case 1:
         VAR_4 = "RECOVERED ERROR";
         break;
      case 2:
         VAR_4 = "NOT READY";
         break;
      case 3:
         VAR_4 = "MEDIUM ERROR";
         break;
      case 4:
         VAR_4 = "HARDWARE ERROR";
         break;
      case 5:
         VAR_4 = "ILLEGAL REQUEST";
         break;
      case 6:
         VAR_4 = "UNIT ATTENTION";
         break;
      case 7:
         VAR_4 = "DATA PROTECT";
         break;
      case 8:
         VAR_4 = "BLANK CHECK";
         break;
      case 9:
         VAR_4 = "VENDOR SPECIFIC";
         break;
      case 10:
         VAR_4 = "COPY ABORTED";
         break;
      case 11:
         VAR_4 = "ABORTED COMMAND";
         break;
      case 13:
         VAR_4 = "VOLUME OVERFLOW";
         break;
      case 14:
         VAR_4 = "MISCOMPARE";
         break;
   }

   FUNC_2("[CDROM] Sense Key: %02X (%s)\n", VAR_5, VAR_4 ? VAR_4 : "null");
   FUNC_2("[CDROM] ASC: %02X\n", VAR_6);
   FUNC_2("[CDROM] ASCQ: %02X\n", VAR_7);

   switch (VAR_5)
   {
      case 2:
      {
         switch (VAR_6)
         {
            case 4:
            {
               switch (VAR_7)
               {
                  case 1:
                     FUNC_2("[CDROM] Description: LOGICAL UNIT IS IN PROCESS OF BECOMING READY\n");
                     break;
                  default:
                     break;
               }

               break;
            }
            case 0x3a:
            {
               switch (VAR_7)
               {
                  case 0:
                     FUNC_2("[CDROM] Description: MEDIUM NOT PRESENT\n");
                     break;
                  case 3:
                     FUNC_2("[CDROM] Description: MEDIUM NOT PRESENT - LOADABLE\n");
                     break;
                  case 1:
                     FUNC_2("[CDROM] Description: MEDIUM NOT PRESENT - TRAY CLOSED\n");
                     break;
                  case 2:
                     FUNC_2("[CDROM] Description: MEDIUM NOT PRESENT - TRAY OPEN\n");
                     break;
                  default:
                     break;
               }

               break;
            }
            default:
               break;
         }
      }
      case 3:
      {
         if (VAR_6 == 0x11 && VAR_7 == 0x5)
            FUNC_2("[CDROM] Description: L-EC UNCORRECTABLE ERROR\n");
         break;
      }
      case 5:
      {
         if (VAR_6 == 0x20 && VAR_7 == 0)
            FUNC_2("[CDROM] Description: INVALID COMMAND OPERATION CODE\n");
         else if (VAR_6 == 0x24 && VAR_7 == 0)
            FUNC_2("[CDROM] Description: INVALID FIELD IN CDB\n");
         else if (VAR_6 == 0x26 && VAR_7 == 0)
            FUNC_2("[CDROM] Description: INVALID FIELD IN PARAMETER LIST\n");
         break;
      }
      case 6:
      {
         if (VAR_6 == 0x28 && VAR_7 == 0)
            FUNC_2("[CDROM] Description: NOT READY TO READY CHANGE, MEDIUM MAY HAVE CHANGED\n");
         break;
      }
      default:
         break;
   }

   FUNC_1(VAR_0);
}
