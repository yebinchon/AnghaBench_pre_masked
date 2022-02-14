
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* scratch2_buf; char* scratch_buf; int detect_content_path; int deferred_path; } ;
typedef TYPE_1__ menu_handle_t ;
struct TYPE_8__ {char const* dir; char const* path; char const* menu_label; int len; int s; int * data; } ;
typedef TYPE_2__ menu_content_ctx_defer_info_t ;
typedef int core_info_list_t ;
struct TYPE_9__ {int * environ_get; int * args; int * argv; int argc; } ;
typedef TYPE_3__ content_ctx_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int ,char const*,char const*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,int *,char const*,unsigned int,size_t,size_t,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (TYPE_2__*,int,char*,int) ;
 TYPE_1__* FUNC_7 () ;
 size_t FUNC_8 () ;
 int FUNC_9 (char*,int ,TYPE_3__*,int ,int *,int *) ;

__attribute__((used)) static int FUNC_10(const char *VAR_3,
      const char *VAR_4, unsigned VAR_5, size_t VAR_6, size_t VAR_7)
{
   menu_content_ctx_defer_info_t VAR_8;
   int VAR_9 = 0;
   core_info_list_t *VAR_10 = ((void*)0);
   const char *VAR_11 = ((void*)0);
   const char *VAR_12 = ((void*)0);
   char *VAR_13 = ((void*)0);
   menu_handle_t *VAR_14 = FUNC_7();

   if (!VAR_14)
      return FUNC_5();

   VAR_11 = VAR_14->scratch2_buf;
   VAR_12 = VAR_14->scratch_buf;

   FUNC_0(&VAR_10);

   VAR_8.data = VAR_10;
   VAR_8.dir = VAR_11;
   VAR_8.path = VAR_12;
   VAR_8.menu_label = VAR_4;
   VAR_8.s = VAR_14->deferred_path;
   VAR_8.len = sizeof(VAR_14->deferred_path);

   VAR_13 = (char*)
      FUNC_4(VAR_2 * sizeof(char));
   VAR_13[0] = '\0';

   if (FUNC_6(&VAR_8, 0,
            VAR_13, VAR_2 * sizeof(char)))
      VAR_9 = -1;

   FUNC_1(VAR_14->detect_content_path, VAR_11, VAR_12,
         sizeof(VAR_14->detect_content_path));

   switch (VAR_9)
   {
      case -1:
         {
            content_ctx_info_t VAR_15;

            VAR_15.argc = 0;
            VAR_15.argv = ((void*)0);
            VAR_15.args = ((void*)0);
            VAR_15.environ_get = ((void*)0);

            VAR_9 = 0;

            if (!FUNC_9(
                     VAR_13, VAR_8.s,
                     &VAR_15,
                     VAR_1,
                     ((void*)0), ((void*)0)))
               VAR_9 = -1;
         }
         break;
      case 0:
         VAR_6 = FUNC_8();
         VAR_9 = FUNC_3(VAR_3, ((void*)0),
               VAR_4, VAR_5,
               VAR_6, VAR_7, VAR_0);
         break;
      default:
         break;
   }

   FUNC_2(VAR_13);
   return VAR_9;
}
