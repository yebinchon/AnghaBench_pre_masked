
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct retro_controller_description {char* desc; } ;
struct TYPE_6__ {unsigned int size; int * data; } ;
struct TYPE_7__ {TYPE_1__ ports; } ;
typedef TYPE_2__ rarch_system_info_t ;
struct TYPE_8__ {unsigned int index_offset; } ;
typedef TYPE_3__ rarch_setting_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 unsigned int FUNC_0 (unsigned int) ;
 struct retro_controller_description* FUNC_1 (int *,unsigned int) ;
 char* FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_6(
      rarch_setting_t *VAR_4,
      char *VAR_5, size_t VAR_6)
{
   unsigned VAR_7, VAR_8;
   const struct retro_controller_description *VAR_9 = ((void*)0);
   const char *VAR_10 = ((void*)0);
   rarch_system_info_t *VAR_11 = FUNC_3();

   if (!VAR_4)
      return;

   VAR_7 = VAR_4->index_offset;
   VAR_8 = FUNC_0(VAR_7);

   if (VAR_11)
   {
      if (VAR_7 < VAR_11->ports.size)
         VAR_9 = FUNC_1(
               &VAR_11->ports.data[VAR_7],
               VAR_8);
   }

   if (VAR_9)
      VAR_10 = VAR_9->desc;

   if (!VAR_10)
   {

      switch (VAR_8)
      {
         case 128:
            VAR_10 = FUNC_2(VAR_0);
            break;
         case 129:
            VAR_10 = FUNC_2(VAR_1);
            break;
         case 130:
            VAR_10 = FUNC_2(VAR_2);
            break;
         default:
            VAR_10 = FUNC_2(VAR_3);
            break;
      }
   }

   if (!FUNC_4(VAR_10))
      FUNC_5(VAR_5, VAR_10, VAR_6);
}
