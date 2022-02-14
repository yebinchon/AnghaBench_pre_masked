
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retro_core_options_intl {struct retro_core_option_definition* local; struct retro_core_option_definition* us; } ;
struct retro_core_option_value {char const* value; char* label; } ;
struct retro_core_option_definition {char const* key; char* desc; char* info; struct retro_core_option_value* values; int default_value; } ;


 scalar_t__ FUNC_0 (size_t,int) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static struct retro_core_option_definition *FUNC_3(
      const struct retro_core_options_intl *VAR_0)
{
   size_t VAR_1;
   size_t VAR_2 = 0;
   struct retro_core_option_definition *VAR_3 = ((void*)0);
   struct retro_core_option_definition *VAR_4 = ((void*)0);
   struct retro_core_option_definition *VAR_5 = ((void*)0);

   if (!VAR_0)
      return ((void*)0);

   VAR_3 = VAR_0->us;
   VAR_4 = VAR_0->local;

   if (!VAR_3)
      return ((void*)0);


   while (1)
   {
      if (!FUNC_1(VAR_3[VAR_2].key))
         VAR_2++;
      else
         break;
   }

   if (VAR_2 < 1)
      return ((void*)0);





   VAR_5 = (struct retro_core_option_definition *)FUNC_0(
         VAR_2 + 1, sizeof(struct retro_core_option_definition));

   if (!VAR_5)
      return ((void*)0);


   for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++)
   {
      size_t VAR_6;
      size_t VAR_7 = 0;
      const char *VAR_8 = VAR_3[VAR_1].key;
      const char *VAR_9 = ((void*)0);
      const char *VAR_10 = ((void*)0);
      struct retro_core_option_value *VAR_11 = ((void*)0);


      VAR_5[VAR_1].key = VAR_8;


      VAR_5[VAR_1].default_value = VAR_3[VAR_1].default_value;


      if (VAR_4)
      {
         size_t VAR_12 = 0;

         while (1)
         {
            const char *VAR_13 = VAR_4[VAR_12].key;

            if (!FUNC_1(VAR_13))
            {
               if (FUNC_2(VAR_8, VAR_13))
               {
                  VAR_9 = VAR_4[VAR_12].desc;
                  VAR_10 = VAR_4[VAR_12].info;
                  VAR_11 = VAR_4[VAR_12].values;
                  break;
               }
               else
                  VAR_12++;
            }
            else
               break;
         }
      }


      VAR_5[VAR_1].desc = FUNC_1(VAR_9) ? VAR_3[VAR_1].desc : VAR_9;
      VAR_5[VAR_1].info = FUNC_1(VAR_10) ? VAR_3[VAR_1].info : VAR_10;



      while (1)
      {
         if (!FUNC_1(VAR_3[VAR_1].values[VAR_7].value))
            VAR_7++;
         else
            break;
      }


      for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
      {
         const char *VAR_14 = VAR_3[VAR_1].values[VAR_6].value;
         const char *VAR_15 = ((void*)0);


         VAR_5[VAR_1].values[VAR_6].value = VAR_14;


         if (VAR_11)
         {
            size_t VAR_16 = 0;

            while (1)
            {
               const char *VAR_17 = VAR_11[VAR_16].value;

               if (!FUNC_1(VAR_17))
               {
                  if (FUNC_2(VAR_14, VAR_17))
                  {
                     VAR_15 = VAR_11[VAR_16].label;
                     break;
                  }
                  else
                     VAR_16++;
               }
               else
                  break;
            }
         }


         VAR_5[VAR_1].values[VAR_6].label = FUNC_1(VAR_15) ?
               VAR_3[VAR_1].values[VAR_6].label : VAR_15;
      }
   }

   return VAR_5;
}
