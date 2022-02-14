
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int env_name ;
typedef scalar_t__ VCOS_LOG_LEVEL_T ;
struct TYPE_7__ {int want_prefix; } ;
struct TYPE_8__ {char const* name; scalar_t__ level; int refcount; struct TYPE_8__* next; TYPE_1__ flags; } ;
typedef TYPE_2__ VCOS_LOG_CAT_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 () ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__*,char const**,char) ;
 scalar_t__ FUNC_2 (char*,int,char const**,char) ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,char const*,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;

void FUNC_10(const char *VAR_6, VCOS_LOG_CAT_T *VAR_7)
{
   const char *VAR_8;
   VCOS_LOG_CAT_T *VAR_9;

   VAR_7->name = VAR_6;
   if ( VAR_7->level == VAR_1 )
   {
      VAR_7->level = VAR_0;
   }
   VAR_7->flags.want_prefix = (VAR_7 != &VAR_2 );

   FUNC_8(&VAR_3);


   for (VAR_9 = VAR_4; VAR_9 ; VAR_9 = VAR_9->next )
   {
      if (VAR_9 == VAR_7)
      {
         VAR_9->refcount++;
         break;
      }
   }

   if (!VAR_9)
   {

      VAR_7->next = VAR_4;
      VAR_4 = VAR_7;
      VAR_7->refcount++;

      FUNC_7(VAR_7);
   }

   FUNC_9(&VAR_3);







   VAR_8 = FUNC_0();
   if (VAR_8 && VAR_8[0])
   {
      do
      {
         char VAR_10[64];
         VCOS_LOG_LEVEL_T VAR_11;
         if (FUNC_2(VAR_10, sizeof(VAR_10), &VAR_8, ':') &&
             FUNC_1(&VAR_11, &VAR_8, ','))
         {
            if (FUNC_3(VAR_10, VAR_6) == 0 || FUNC_3(VAR_10, "*") == 0)
            {


               VAR_7->level = VAR_11;
            }
         }
         else
         {
            if (!VAR_5)
            {
                FUNC_4("VC_LOGLEVEL format invalid at %s\n", VAR_8);
                VAR_5 = 1;
            }
            return;
         }
      } while (VAR_8[0] != '\0');
   }

   FUNC_5( "Registered log category '%s' with level %s",
                  VAR_7->name,
                  FUNC_6( VAR_7->level ));
}
