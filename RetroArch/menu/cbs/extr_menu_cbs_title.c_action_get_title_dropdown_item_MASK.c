
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct string_list {scalar_t__ size; TYPE_1__* elems; } ;
struct TYPE_10__ {scalar_t__ game_specific_options; } ;
struct TYPE_11__ {TYPE_2__ bools; } ;
typedef TYPE_3__ settings_t ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;
struct TYPE_12__ {unsigned int size; } ;
typedef TYPE_4__ core_option_manager_t ;
struct TYPE_9__ {char const* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,char const*,unsigned int,char*,size_t) ;
 int FUNC_1 (char const*,char const*,unsigned int,char*,size_t) ;
 TYPE_3__* FUNC_2 () ;
 char* FUNC_3 (TYPE_4__*,unsigned int) ;
 scalar_t__ FUNC_4 (TYPE_4__*,unsigned int) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int ,TYPE_4__**) ;
 int FUNC_7 (char*,char const*,size_t) ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (struct string_list*) ;
 struct string_list* FUNC_10 (char const*,char*) ;
 unsigned int FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (char const*,char*) ;

__attribute__((used)) static int FUNC_13(const char *VAR_5, const char *VAR_6, unsigned VAR_7, char *VAR_8, size_t VAR_9)
{

   if (FUNC_8(VAR_5))
      return 0;

   if (FUNC_12(VAR_5, "core_option_"))
   {

      struct string_list *VAR_10 = FUNC_10(VAR_5, "_");
      int VAR_11 = 0;

      if (VAR_10 && VAR_10->size > 0)
      {
         core_option_manager_t *VAR_12 = ((void*)0);

         FUNC_6(VAR_4, &VAR_12);

         if (VAR_12)
         {
            settings_t *VAR_13 = FUNC_2();
            unsigned VAR_14 = FUNC_11(VAR_10->elems[(unsigned)VAR_10->size - 1].data);
            unsigned VAR_15 = 0;
            unsigned VAR_16 = 0;
            bool VAR_17 = 0;
            unsigned VAR_18;


            if (VAR_13->bools.game_specific_options)
               VAR_14--;

            for (VAR_18 = 0; VAR_18 < VAR_12->size; VAR_18++)
            {
               if (FUNC_4(VAR_12, VAR_18))
               {
                  if (VAR_15 == VAR_14)
                  {
                     VAR_17 = 1;
                     VAR_16 = VAR_18;
                     break;
                  }
                  VAR_15++;
               }
            }


            if (VAR_17)
            {
               const char *VAR_19 = FUNC_3(VAR_12, VAR_16);

               if (VAR_8 && !FUNC_8(VAR_19))
               {
                  FUNC_7(VAR_8, VAR_19, VAR_9);
                  VAR_11 = 1;
               }
            }
         }
      }


      if (VAR_10)
         FUNC_9(VAR_10);

      return VAR_11;
   }
   else
   {
      enum msg_hash_enums VAR_20 = (enum msg_hash_enums)(FUNC_11(VAR_5) + 2);



      if ((VAR_20 > VAR_3) && (VAR_20 < VAR_2))
      {




         if (VAR_20 == VAR_1)
         {
            return FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
         }
         else if (VAR_20 == VAR_0)
         {
            return FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
         }
         else
         {
            const char *VAR_21 = FUNC_5(VAR_20);

            if (VAR_8 && !FUNC_8(VAR_21))
            {
               FUNC_7(VAR_8, VAR_21, VAR_9);
               return 1;
            }
         }
      }
   }

   return 0;
}
