
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int rarch_setting_t ;
typedef int menu_path_new ;
struct TYPE_3__ {char* scratch2_buf; char const* scratch_buf; } ;
typedef TYPE_1__ menu_handle_t ;
typedef int full_path_new ;
typedef int file_list_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char const*,char const*,unsigned int,size_t,size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,char const**,char const**,int *,int *) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*,char*,char const*,int) ;
 int FUNC_6 (char*,char*,char const*,char,int) ;
 int FUNC_7 () ;
 TYPE_1__* FUNC_8 () ;
 int FUNC_9 (int *,int ) ;
 int * FUNC_10 (int ) ;
 int * FUNC_11 (char const*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (char const*) ;
 scalar_t__ FUNC_15 (char const*,int ) ;
 int FUNC_16 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_17(const char *VAR_7,
      const char *VAR_8, unsigned VAR_9, size_t VAR_10, size_t VAR_11)
{
   char VAR_12[VAR_5];
   char VAR_13[VAR_5];
   const char *VAR_14 = ((void*)0);
   const char *VAR_15 = ((void*)0);
   rarch_setting_t *VAR_16 = ((void*)0);
   file_list_t *VAR_17 = FUNC_10(0);

   VAR_12[0] = VAR_13[0] = '\0';

   if (FUNC_4() == VAR_1)
   {



      menu_handle_t *VAR_18 = FUNC_8();
      if (!VAR_18)
         return FUNC_7();

      FUNC_5(VAR_12,
            VAR_18->scratch2_buf, VAR_18->scratch_buf,
            sizeof(VAR_12));
      switch (VAR_9)
      {
         case 128:
            FUNC_6(VAR_13, VAR_12, VAR_7,
                  '#',sizeof(VAR_13));
            break;
         default:
            FUNC_5(VAR_13, VAR_12, VAR_7,
                  sizeof(VAR_13));
            break;
      }

      FUNC_1(VAR_13);
      FUNC_9(((void*)0), VAR_4);
      return 0;
   }

   FUNC_3(VAR_17, &VAR_15, &VAR_14, ((void*)0), ((void*)0));

   if (!FUNC_14(VAR_14))
      VAR_16 = FUNC_11(VAR_14);

   if (FUNC_13(VAR_16) == VAR_6)
      return FUNC_0(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);

   if (!FUNC_14(VAR_15))
      FUNC_16(VAR_12, VAR_15, sizeof(VAR_12));

   if (!FUNC_14(VAR_14))
   {
      if (
            FUNC_15(VAR_14,
               FUNC_12(VAR_3)) ||
            FUNC_15(VAR_14,
               FUNC_12(VAR_2))
         )
      {
         menu_handle_t *VAR_19 = FUNC_8();
         if (!VAR_19)
            return FUNC_7();

         FUNC_5(VAR_12,
               VAR_19->scratch2_buf, VAR_19->scratch_buf,
               sizeof(VAR_12));
      }
   }

   switch (VAR_9)
   {
      case 128:
         FUNC_6(VAR_13, VAR_12, VAR_7,
               '#',sizeof(VAR_13));
         break;
      default:
         FUNC_5(VAR_13, VAR_12, VAR_7,
               sizeof(VAR_13));
         break;
   }

   return FUNC_2(VAR_13,
         VAR_0);
}
