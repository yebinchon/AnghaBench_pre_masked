
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* string; struct TYPE_7__* next; } ;
typedef TYPE_1__ bot_stringlist_t ;
struct TYPE_8__ {int (* Print ) (int ,char*,char*) ;} ;


 int FUNC_0 (TYPE_1__*,char*) ;
 char VAR_0 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 TYPE_2__ VAR_3 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,char*) ;

bot_stringlist_t *FUNC_7(char *VAR_4, bot_stringlist_t *VAR_5)
{
 int VAR_6;
 char *VAR_7;
 char VAR_8[VAR_1];
 bot_stringlist_t *VAR_9;

 VAR_7 = VAR_4;

 while(*VAR_7)
 {
  if (*VAR_7 == VAR_0)
  {
   VAR_7++;
   switch(*VAR_7)
   {
    case 'v':
    {

     VAR_7++;
     while(*VAR_7 && *VAR_7 != VAR_0) VAR_7++;

     if (*VAR_7) VAR_7++;
     break;
    }
    case 'r':
    {

     VAR_7++;
     for (VAR_6 = 0; (*VAR_7 && *VAR_7 != VAR_0); VAR_6++)
     {
      VAR_8[VAR_6] = *VAR_7++;
     }
     VAR_8[VAR_6] = '\0';

     if (*VAR_7) VAR_7++;

     if (!FUNC_3(VAR_8))
     {
      if (!FUNC_0(VAR_5, VAR_8))
      {
       FUNC_2("%s = {\"%s\"} //MISSING RANDOM\r\n", VAR_8, VAR_8);
       VAR_9 = FUNC_1(sizeof(bot_stringlist_t) + FUNC_5(VAR_8) + 1);
       VAR_9->string = (char *) VAR_9 + sizeof(bot_stringlist_t);
       FUNC_4(VAR_9->string, VAR_8);
       VAR_9->next = VAR_5;
       VAR_5 = VAR_9;
      }
     }
     break;
    }
    default:
    {
     VAR_3.Print(VAR_2, "BotCheckChatMessageIntegrety: message \"%s\" invalid escape char\n", VAR_4);
     break;
    }
   }
  }
  else
  {
   VAR_7++;
  }
 }
 return VAR_5;
}
