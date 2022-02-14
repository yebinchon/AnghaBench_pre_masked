
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tmp ;
typedef int settings_t ;
struct TYPE_5__ {int year; int month; int day; int hour; int minute; int second; } ;
struct TYPE_6__ {TYPE_1__ last_played; } ;
typedef TYPE_2__ runtime_log_t ;
typedef enum playlist_sublabel_last_played_style_type { ____Placeholder_playlist_sublabel_last_played_style_type } playlist_sublabel_last_played_style_type ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,char*,int,char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,size_t,char*,char*,int,int,int,int,...) ;
 int FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (char*,char*,size_t) ;

void FUNC_6(runtime_log_t *VAR_2,
      char *VAR_3, size_t VAR_4, enum playlist_sublabel_last_played_style_type VAR_5)
{
   settings_t *VAR_6 = FUNC_0();
   int VAR_7 = 0;
   char VAR_8[64];

   VAR_8[0] = '\0';

   if (!VAR_6)
      return;

   if (VAR_2)
   {


      switch (VAR_5)
      {
         case 129:
            FUNC_1(VAR_2, VAR_8, sizeof(VAR_8), " %Y/%m/%d - %I:%M:%S %p");
            FUNC_5(VAR_3, FUNC_2(VAR_1), VAR_4);
            FUNC_4(VAR_3, VAR_8, VAR_4);
            return;
         case 128:
            FUNC_1(VAR_2, VAR_8, sizeof(VAR_8), " %Y/%m/%d - %I:%M %p");
            FUNC_5(VAR_3, FUNC_2(VAR_1), VAR_4);
            FUNC_4(VAR_3, VAR_8, VAR_4);
            return;
         case 134:
            FUNC_1(VAR_2, VAR_8, sizeof(VAR_8), " %m/%d/%Y - %I:%M %p");
            FUNC_5(VAR_3, FUNC_2(VAR_1), VAR_4);
            FUNC_4(VAR_3, VAR_8, VAR_4);
            return;
         case 136:
            FUNC_1(VAR_2, VAR_8, sizeof(VAR_8), " %d/%m - %I:%M %p");
            FUNC_5(VAR_3, FUNC_2(VAR_1), VAR_4);
            FUNC_4(VAR_3, VAR_8, VAR_4);
            return;
         case 132:
            FUNC_1(VAR_2, VAR_8, sizeof(VAR_8), " %m/%d - %I:%M %p");
            FUNC_5(VAR_3, FUNC_2(VAR_1), VAR_4);
            FUNC_4(VAR_3, VAR_8, VAR_4);
            return;
         default:
            break;
      }


      switch (VAR_5)
      {
         case 131:
            VAR_7 = FUNC_3(VAR_3, VAR_4, "%s %04u/%02u/%02u - %02u:%02u",
                  FUNC_2(VAR_1),
                  VAR_2->last_played.year, VAR_2->last_played.month, VAR_2->last_played.day,
                  VAR_2->last_played.hour, VAR_2->last_played.minute);
            return;
         case 135:
            VAR_7 = FUNC_3(VAR_3, VAR_4, "%s %02u/%02u/%04u - %02u:%02u",
                  FUNC_2(VAR_1),
                  VAR_2->last_played.month, VAR_2->last_played.day, VAR_2->last_played.year,
                  VAR_2->last_played.hour, VAR_2->last_played.minute);
            return;
         case 137:
            VAR_7 = FUNC_3(VAR_3, VAR_4, "%s %02u/%02u - %02u:%02u",
                  FUNC_2(VAR_1),
                  VAR_2->last_played.day, VAR_2->last_played.month,
                  VAR_2->last_played.hour, VAR_2->last_played.minute);
            return;
         case 133:
            VAR_7 = FUNC_3(VAR_3, VAR_4, "%s %02u/%02u - %02u:%02u",
                  FUNC_2(VAR_1),
                  VAR_2->last_played.month, VAR_2->last_played.day,
                  VAR_2->last_played.hour, VAR_2->last_played.minute);
            return;
         case 130:
         default:
            VAR_7 = FUNC_3(VAR_3, VAR_4, "%s %04u/%02u/%02u - %02u:%02u:%02u",
                  FUNC_2(VAR_1),
                  VAR_2->last_played.year, VAR_2->last_played.month, VAR_2->last_played.day,
                  VAR_2->last_played.hour, VAR_2->last_played.minute, VAR_2->last_played.second);
            return;
      }
   }
   else
   {
      VAR_7 = FUNC_5(VAR_3, FUNC_2(VAR_1), VAR_4);
      VAR_3[VAR_7 ] = ' ';
      VAR_3[VAR_7+1] = '\0';
      VAR_7 = FUNC_4(VAR_3, FUNC_2(VAR_0), VAR_4);
   }

   if ((VAR_7 < 0) || (VAR_7 >= 64))
      VAR_7 = 0;
}
