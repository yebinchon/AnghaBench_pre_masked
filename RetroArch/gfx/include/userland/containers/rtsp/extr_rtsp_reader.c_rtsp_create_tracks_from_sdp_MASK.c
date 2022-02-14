
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_21__ {TYPE_2__* priv; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_T ;
struct TYPE_22__ {TYPE_4__* priv; int tracks_num; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_20__ {TYPE_3__* module; } ;
struct TYPE_19__ {int media_item; } ;
struct TYPE_18__ {TYPE_1__* module; } ;
struct TYPE_17__ {char* control_uri; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_6__*,TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_6__*,char*,TYPE_5__**) ;
 scalar_t__ FUNC_3 (TYPE_6__*,char*,char*,char**) ;
 char* FUNC_4 (char**,int ,int *) ;
 scalar_t__ FUNC_5 (TYPE_6__*,TYPE_5__*,char*) ;
 scalar_t__ FUNC_6 (TYPE_6__*,TYPE_5__*,char*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_9( VC_CONTAINER_T *VAR_3,
      char *VAR_4,
      char *VAR_5 )
{
   VC_CONTAINER_STATUS_T VAR_6 = VAR_1;
   VC_CONTAINER_TRACK_T *VAR_7 = ((void*)0);
   char *VAR_8 = VAR_5;
   char *VAR_9;
   char *VAR_10;
   char *VAR_11;

   for (VAR_9 = VAR_4; VAR_6 == VAR_1 && *VAR_9; VAR_9 = VAR_10)
   {

      char VAR_12 = *VAR_9;

      VAR_10 = VAR_9;
      while (*VAR_10 && *VAR_10 != '\n')
         VAR_10++;


      if (*VAR_10)
         *VAR_10++ = '\0';



      if (VAR_9[1] != '=')
         continue;
      VAR_9 = FUNC_7(VAR_9 + 2);

      switch (VAR_12)
      {
      case 'm':

         if (VAR_7)
         {

            VAR_6 = FUNC_1(VAR_3, VAR_7);
            VAR_7 = ((void*)0);
            VAR_3->priv->module->media_item++;
            if (VAR_6 != VAR_1)
               break;
         }

         VAR_6 = FUNC_2(VAR_3, VAR_9, &VAR_7);
         break;
      case 'a':

         VAR_11 = FUNC_4(&VAR_9, VAR_2, ((void*)0));

         if (VAR_7)
         {



            if (FUNC_8(VAR_11, "rtpmap") == 0)
               VAR_6 = FUNC_6(VAR_3, VAR_7, VAR_9);
            else if (FUNC_8(VAR_11, "fmtp") == 0)
               VAR_6 = FUNC_5(VAR_3, VAR_7, VAR_9);
            else if (FUNC_8(VAR_11, "control") == 0)
            {
               char **VAR_13 = &VAR_7->priv->module->control_uri;

               if (*VAR_13)
               {
                  FUNC_0(*VAR_13);
                  *VAR_13 = ((void*)0);
               }
               VAR_6 = FUNC_3(VAR_3, VAR_9, VAR_8, VAR_13);
            }

         } else {

            if (FUNC_8(VAR_11, "control") == 0)
            {

               VAR_9 = FUNC_7(VAR_9);
               if (VAR_8 != VAR_5)
               {
                  FUNC_0(VAR_8);
                  VAR_8 = VAR_5;
               }
               if (FUNC_8(VAR_9, VAR_5) != 0)
                  VAR_6 = FUNC_3(VAR_3, VAR_9, VAR_5, &VAR_8);
            }
         }
         break;
      default:
         ;
      }
   }

   if (VAR_8 && VAR_8 != VAR_5)
      FUNC_0(VAR_8);


   if (VAR_6 == VAR_1)
   {
      if (!VAR_3->tracks_num)
         VAR_6 = VAR_0;
      else if (VAR_7)
      {

         VAR_6 = FUNC_1(VAR_3, VAR_7);
         VAR_3->priv->module->media_item++;
      }
   }

   return VAR_6;
}
