
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int playlist_t ;
typedef int core_path ;
struct TYPE_7__ {int display_name; int path; } ;
typedef TYPE_1__ core_info_t ;
struct TYPE_8__ {size_t count; } ;
typedef TYPE_2__ core_info_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,size_t) ;
 int FUNC_1 (TYPE_2__**) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 () ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,char*) ;
 int FUNC_11 (char*,int ,int) ;

__attribute__((used)) static int FUNC_12(unsigned VAR_2, const char *VAR_3,
      bool VAR_4)
{
   char VAR_5[VAR_1];
   size_t VAR_6, VAR_7, VAR_8 = 0;
   playlist_t *VAR_9 = FUNC_4();
   core_info_list_t *VAR_10 = ((void*)0);
   core_info_t *VAR_11 = ((void*)0);

   VAR_5[0] = '\0';

   if (!VAR_9)
      return -1;

   FUNC_1(&VAR_10);
   if (!VAR_10)
      return FUNC_3();


   if (FUNC_9(FUNC_5(VAR_9)))
   {
      VAR_5[0] = 'D';
      VAR_5[1] = 'E';
      VAR_5[2] = 'T';
      VAR_5[3] = 'E';
      VAR_5[4] = 'C';
      VAR_5[5] = 'T';
      VAR_5[6] = '\0';
   }
   else
      FUNC_11(VAR_5, FUNC_5(VAR_9), sizeof(VAR_5));


   FUNC_2(VAR_10, VAR_0);


   for (VAR_6 = 0; VAR_6 < VAR_10->count; VAR_6++)
   {
      VAR_11 = ((void*)0);
      VAR_11 = FUNC_0(VAR_10, VAR_6);
      if (!VAR_11)
         return -1;
      if (FUNC_10(VAR_11->path, VAR_5))
         VAR_8 = VAR_6;
   }


   if (VAR_8 > 0)
      VAR_7 = VAR_8 - 1;
   else if (VAR_4 && (VAR_10->count > 1))
      VAR_7 = VAR_10->count - 1;
   else
      VAR_7 = 0;


   VAR_11 = ((void*)0);
   VAR_11 = FUNC_0(VAR_10, VAR_7);
   if (!VAR_11)
      return -1;


   FUNC_7(VAR_9, VAR_11->path);
   FUNC_6(VAR_9, VAR_11->display_name);
   FUNC_8(VAR_9);

   return 0;
}
