
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct playlist_entry {char const* subsystem_ident; char* core_path; char* core_name; char const* path; int label; int member_0; TYPE_2__* subsystem_roms; } ;
typedef int playlist_t ;
typedef int new_path ;
typedef int new_core_path ;
struct TYPE_14__ {int db_playlist_file; } ;
typedef TYPE_4__ menu_handle_t ;
struct TYPE_15__ {char* path; TYPE_3__* inf; } ;
typedef TYPE_5__ core_info_ctx_find_t ;
struct TYPE_16__ {int member_0; } ;
typedef TYPE_6__ content_ctx_info_t ;
struct TYPE_13__ {char* display_name; } ;
struct TYPE_12__ {unsigned int size; TYPE_1__* elems; } ;
struct TYPE_11__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char const*,unsigned int,size_t,size_t) ;
 int FUNC_2 (int *,size_t,struct playlist_entry*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (TYPE_5__*,char*) ;
 int FUNC_7 (char*,char*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,size_t) ;
 TYPE_4__* FUNC_10 () ;
 int FUNC_11 (int *) ;
 int * FUNC_12 () ;
 char* FUNC_13 (int *) ;
 int FUNC_14 (int *,size_t,struct playlist_entry const**) ;
 int * FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,char*,int) ;
 int FUNC_17 (char*,int,int,int,int *,int ,int ) ;
 int FUNC_18 (char const*) ;
 scalar_t__ FUNC_19 (char*,char*) ;
 int FUNC_20 (char*,char const*,int) ;
 int FUNC_21 (char*,int *,TYPE_6__*,int ,int *,int *) ;
 int FUNC_22 (int *,TYPE_6__*,int ,int *,int *) ;

__attribute__((used)) static int FUNC_23(const char *VAR_6,
      const char *VAR_7, unsigned VAR_8, size_t VAR_9, size_t VAR_10)
{
   char VAR_11[VAR_4];
   char VAR_12[VAR_4];
   size_t VAR_13 = 0;
   bool VAR_14 = 0;
   playlist_t *VAR_15 = ((void*)0);
   playlist_t *VAR_16 = ((void*)0);
   const struct playlist_entry *VAR_17 = ((void*)0);
   unsigned VAR_18 = 0;
   menu_handle_t *VAR_19 = FUNC_10();

   if (!VAR_19)
      return FUNC_8();

   VAR_11[0] = '\0';
   VAR_12[0] = '\0';
   VAR_16 = FUNC_12();

   if (!VAR_16)
   {
      VAR_16 = FUNC_15(
            VAR_19->db_playlist_file, VAR_0);

      if (!VAR_16)
         return FUNC_8();

      VAR_14 = 1;
   }

   VAR_15 = VAR_16;
   VAR_13 = VAR_10;

   FUNC_14(VAR_15, VAR_13, &VAR_17);


   if (!FUNC_18(VAR_17->subsystem_ident))
   {
      content_ctx_info_t VAR_20 = {0};

      FUNC_21(VAR_17->core_path, ((void*)0),
            &VAR_20, VAR_1, ((void*)0), ((void*)0));

      FUNC_4();

      if (!FUNC_5(VAR_17->subsystem_ident))
      {
         FUNC_0("[playlist] subsystem not found in implementation\n");

         return 0;
      }

      for (VAR_18 = 0; VAR_18 < VAR_17->subsystem_roms->size; VAR_18++)
         FUNC_3(VAR_17->subsystem_roms->elems[VAR_18].data);

      FUNC_22(
         ((void*)0), &VAR_20,
         VAR_1, ((void*)0), ((void*)0));

      return 1;
   }


   if ( FUNC_19(VAR_17->core_path, "DETECT")
         && FUNC_19(VAR_17->core_name, "DETECT"))
   {
      core_info_ctx_find_t VAR_21;
      const char *VAR_22 = ((void*)0);
      const char *VAR_23 =
            FUNC_13(VAR_15);
      bool VAR_24 = 0;

      if (!FUNC_18(VAR_23))
      {
         FUNC_20(VAR_12, VAR_23, sizeof(VAR_12));
         FUNC_16(VAR_5, VAR_12, sizeof(VAR_12));
         VAR_24 = 1;
      }

      VAR_21.inf = ((void*)0);
      VAR_21.path = VAR_12;

      if (!FUNC_6(&VAR_21, VAR_12))
         VAR_24 = 0;

      if (!VAR_24)
      {


         int VAR_25 = FUNC_1(VAR_22,
               VAR_7, VAR_8, VAR_13, VAR_10);
         if (VAR_14)
            FUNC_11(VAR_16);
         return VAR_25;
      }

      VAR_16 = FUNC_12();

      if (VAR_16)
      {
         struct playlist_entry VAR_26 = {0};
         VAR_26.core_path = (char*)VAR_23;
         VAR_26.core_name = VAR_21.inf->display_name;

         FUNC_2(
               VAR_16,
               VAR_13,
               &VAR_26);
      }
   }
   else
   {
      FUNC_20(VAR_12, VAR_17->core_path, sizeof(VAR_12));
       FUNC_16(VAR_5, VAR_12, sizeof(VAR_12));
   }

   if (!VAR_15 || !FUNC_9(VAR_15, VAR_13))
   {
      FUNC_17(
            "File could not be loaded from playlist.\n",
            1, 100, 1,
            ((void*)0), VAR_3, VAR_2);
      if (VAR_14)
         FUNC_11(VAR_16);
      return FUNC_8();
   }

   FUNC_14(VAR_15, VAR_13, &VAR_17);

   FUNC_20(VAR_11, VAR_17->path, sizeof(VAR_11));
   FUNC_16(VAR_5, VAR_11, sizeof(VAR_11));
   return FUNC_7(
            VAR_12, VAR_11, VAR_17->label);
}
