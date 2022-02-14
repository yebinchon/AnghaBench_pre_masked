
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tmp ;
struct playlist_entry {char* core_name; scalar_t__ runtime_status; char* runtime_str; char* last_played_str; } ;
struct TYPE_8__ {int content_runtime_log_aggregate; int content_runtime_log; int playlist_show_sublabels; } ;
struct TYPE_7__ {scalar_t__ playlist_sublabel_runtime_type; } ;
struct TYPE_6__ {char const* menu_driver; } ;
struct TYPE_9__ {TYPE_3__ bools; TYPE_2__ uints; TYPE_1__ arrays; } ;
typedef TYPE_4__ settings_t ;
typedef int playlist_t ;
typedef int file_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_4__* FUNC_0 () ;
 char* FUNC_1 (int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,unsigned int,struct playlist_entry const**) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned int) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 (char*,char*,size_t) ;
 int FUNC_9 (char*,char*,size_t) ;

__attribute__((used)) static int FUNC_10(
      file_list_t *VAR_11,
      unsigned VAR_12, unsigned VAR_13,
      const char *VAR_14, const char *VAR_15,
      char *VAR_16, size_t VAR_17)
{
   settings_t *VAR_18 = FUNC_0();
   playlist_t *VAR_19 = ((void*)0);
   const struct playlist_entry *VAR_20 = ((void*)0);

   if (!VAR_18->bools.playlist_show_sublabels || FUNC_7(VAR_18->arrays.menu_driver, "ozone"))
      return 0;


   VAR_19 = FUNC_2();

   if (!VAR_19)
      return 0;

   if (VAR_13 >= FUNC_4(VAR_19))
      return 0;


   FUNC_3(VAR_19, VAR_13, &VAR_20);


   if (FUNC_6(VAR_20->core_name) || FUNC_7(VAR_20->core_name, "DETECT"))
      return 0;


   FUNC_9(VAR_16, FUNC_1(VAR_6), VAR_17);
   FUNC_8(VAR_16, " ", VAR_17);
   FUNC_8(VAR_16, VAR_20->core_name, VAR_17);



   if (((VAR_18->uints.playlist_sublabel_runtime_type == VAR_8) &&
         !VAR_18->bools.content_runtime_log) ||
       ((VAR_18->uints.playlist_sublabel_runtime_type == VAR_7) &&
         !VAR_18->bools.content_runtime_log_aggregate))
      return 0;



   if (!FUNC_7(VAR_14, FUNC_1(VAR_5)) &&
       !FUNC_7(VAR_14, FUNC_1(VAR_3)) &&
       !FUNC_7(VAR_14, FUNC_1(VAR_0)) &&
       !FUNC_7(VAR_14, FUNC_1(VAR_2)) &&
       !FUNC_7(VAR_14, FUNC_1(VAR_1)) &&
       !FUNC_7(VAR_14, FUNC_1(VAR_4)))
      return 0;


   if (VAR_20->runtime_status == VAR_9)
      FUNC_5(VAR_19, VAR_13);


   if (VAR_20->runtime_status == VAR_10)
   {
      int VAR_21 = 0;
      char VAR_22[64];

      VAR_22[0 ] = '\n';
      VAR_22[1 ] = '\0';

      VAR_21 = FUNC_8(VAR_22, VAR_20->runtime_str, sizeof(VAR_22));

      VAR_22[VAR_21 ] = '\n';
      VAR_22[VAR_21+1] = '\0';



      VAR_21 = FUNC_8(VAR_22, VAR_20->last_played_str, sizeof(VAR_22));

      if ((VAR_21 < 0) || (VAR_21 >= 64))
         VAR_21 = 0;

      if (!FUNC_6(VAR_22))
         FUNC_8(VAR_16, VAR_22, VAR_17);
   }

   return 0;
}
