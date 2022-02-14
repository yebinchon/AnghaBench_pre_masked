
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int playlist_t ;
struct TYPE_6__ {char* display_name; char* path; } ;
typedef TYPE_1__ core_info_t ;
struct TYPE_7__ {size_t count; } ;
typedef TYPE_2__ core_info_list_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,size_t) ;
 int FUNC_2 (TYPE_2__**) ;
 char* FUNC_3 (int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*,char*) ;

__attribute__((used)) static int FUNC_10(const char *VAR_1,
      const char *VAR_2, unsigned VAR_3, size_t VAR_4, size_t VAR_5)
{
   core_info_list_t *VAR_6 = ((void*)0);
   playlist_t *VAR_7 = FUNC_4();
   const char* VAR_8 = VAR_1;

   (void)VAR_2;
   (void)VAR_3;
   (void)VAR_4;
   (void)VAR_5;


   FUNC_2(&VAR_6);

   if (!VAR_6 || !VAR_7)
      return -1;


   if (FUNC_8(VAR_8) ||
       FUNC_9(VAR_8, FUNC_3(VAR_0)))
   {
      FUNC_6(VAR_7, "DETECT");
      FUNC_5(VAR_7, "DETECT");
   }
   else
   {
      core_info_t *VAR_9 = ((void*)0);
      bool VAR_10 = 0;
      size_t VAR_11;


      for (VAR_11 = 0; VAR_11 < VAR_6->count; VAR_11++)
      {
         VAR_9 = ((void*)0);
         VAR_9 = FUNC_1(VAR_6, VAR_11);

         if (VAR_9)
         {
            if (FUNC_9(VAR_8, VAR_9->display_name))
            {

               FUNC_6(VAR_7, VAR_9->path);
               FUNC_5(VAR_7, VAR_9->display_name);

               VAR_10 = 1;
               break;
            }
         }
      }


      if (!VAR_10)
      {
         FUNC_6(VAR_7, "DETECT");
         FUNC_5(VAR_7, "DETECT");
      }
   }


   FUNC_7(VAR_7);

   return FUNC_0(((void*)0), ((void*)0), 0, 0);
}
