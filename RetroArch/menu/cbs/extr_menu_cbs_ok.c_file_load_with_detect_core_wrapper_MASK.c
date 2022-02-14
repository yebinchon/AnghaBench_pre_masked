
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* scratch2_buf; char const* scratch_buf; char* detect_content_path; int deferred_path; } ;
typedef TYPE_1__ menu_handle_t ;
struct TYPE_8__ {char* dir; char const* path; char const* menu_label; int len; int s; int * data; } ;
typedef TYPE_2__ menu_content_ctx_defer_info_t ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;
typedef int core_info_list_t ;
struct TYPE_9__ {int * environ_get; int * args; int * argv; int argc; } ;
typedef TYPE_3__ content_ctx_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (char*,char*,char const*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*,int *,char const*,unsigned int,size_t,size_t,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_2__*,int,char*,int) ;
 TYPE_1__* FUNC_8 () ;
 int FUNC_9 (char const**,char const**,int *,int *,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (char const*,int ) ;
 int FUNC_13 (char*,char const*,int) ;
 int FUNC_14 (char*,int ,TYPE_3__*,int ,int *,int *) ;

__attribute__((used)) static int FUNC_15(
      enum msg_hash_enums VAR_7,
      size_t VAR_8, size_t VAR_9,
      const char *VAR_10, const char *VAR_11,
      unsigned VAR_12, bool VAR_13)
{
   menu_content_ctx_defer_info_t VAR_14;
   int VAR_15 = 0;
   char *VAR_16 = ((void*)0);
   const char *VAR_17 = ((void*)0);
   const char *VAR_18 = ((void*)0);
   core_info_list_t *VAR_19 = ((void*)0);
   menu_handle_t *VAR_20 = FUNC_8();

   if (!VAR_20)
      return FUNC_6();

   {
      char *VAR_21 = (char*)FUNC_5(VAR_6 * sizeof(char));
      VAR_16 = (char*)FUNC_5(VAR_6 * sizeof(char));
      VAR_16[0] = VAR_21[0] = '\0';

      FUNC_9(&VAR_17, &VAR_18, ((void*)0), ((void*)0), ((void*)0));

      if (!FUNC_11(VAR_17))
         FUNC_13(VAR_21, VAR_17, VAR_6 * sizeof(char));

      if (FUNC_12(VAR_18,
               FUNC_10(VAR_5)))
         FUNC_2(VAR_21, VAR_20->scratch2_buf, VAR_20->scratch_buf,
               VAR_6 * sizeof(char));
      else if (FUNC_12(VAR_18,
               FUNC_10(VAR_4)))
         FUNC_2(VAR_21, VAR_20->scratch2_buf, VAR_20->scratch_buf,
               VAR_6 * sizeof(char));

      FUNC_1(&VAR_19);

      VAR_14.data = VAR_19;
      VAR_14.dir = VAR_21;
      VAR_14.path = VAR_10;
      VAR_14.menu_label = VAR_18;
      VAR_14.s = VAR_20->deferred_path;
      VAR_14.len = sizeof(VAR_20->deferred_path);

      if (FUNC_7(&VAR_14, 0, VAR_16,
               VAR_6 * sizeof(char)))
         VAR_15 = -1;

      if ( !VAR_13 && !FUNC_11(VAR_10)
            && !FUNC_11(VAR_21))
         FUNC_2(VAR_20->detect_content_path,
               VAR_21, VAR_10,
               sizeof(VAR_20->detect_content_path));

      FUNC_3(VAR_21);

      if (VAR_7 == VAR_3)
      {
         FUNC_3(VAR_16);
         return FUNC_4(VAR_10, ((void*)0),
               ((void*)0), 0, VAR_8, VAR_9, VAR_1);
      }

      switch (VAR_15)
      {
         case -1:
            {
               content_ctx_info_t VAR_22;

               VAR_22.argc = 0;
               VAR_22.argv = ((void*)0);
               VAR_22.args = ((void*)0);
               VAR_22.environ_get = ((void*)0);

               if (!FUNC_14(
                        VAR_16, VAR_14.s,
                        &VAR_22,
                        VAR_2,
                        ((void*)0), ((void*)0)))
               {
                  FUNC_3(VAR_16);
                  return -1;
               }
               FUNC_0(VAR_14.s);

               VAR_15 = 0;
               break;
            }
         case 0:
            VAR_15 = FUNC_4(VAR_10, ((void*)0), VAR_11, VAR_12,
                  VAR_8, VAR_9, VAR_0);
            break;
         default:
            break;
      }
   }

   FUNC_3(VAR_16);
   return VAR_15;
}
