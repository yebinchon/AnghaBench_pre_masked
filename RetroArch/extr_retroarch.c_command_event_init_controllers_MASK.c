
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct retro_controller_description {char* desc; } ;
struct TYPE_7__ {unsigned int device; unsigned int port; } ;
typedef TYPE_2__ retro_ctx_controller_info_t ;
struct TYPE_6__ {unsigned int size; int * data; } ;
struct TYPE_8__ {TYPE_1__ ports; } ;
typedef TYPE_3__ rarch_system_info_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,unsigned int,...) ;
 int FUNC_1 (char*,unsigned int) ;


 int FUNC_2 (TYPE_2__*) ;
 unsigned int FUNC_3 (unsigned int) ;
 struct retro_controller_description* FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (int ) ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static void FUNC_6(void)
{
   unsigned VAR_4;
   rarch_system_info_t *VAR_5 = &VAR_3;

   for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   {
      retro_ctx_controller_info_t VAR_6;
      const char *VAR_7 = ((void*)0);
      bool VAR_8 = 0;
      const struct retro_controller_description *VAR_9 = ((void*)0);
      unsigned VAR_10 = FUNC_3(VAR_4);

      if (VAR_5)
      {
         if (VAR_4 < VAR_5->ports.size)
            VAR_9 = FUNC_4(
                  &VAR_5->ports.data[VAR_4], VAR_10);
      }

      if (VAR_9)
         VAR_7 = VAR_9->desc;

      if (!VAR_7)
      {



         if (VAR_10 != 129 && VAR_10 != 128)
         {



            FUNC_1("Input device ID %u is unknown to this "
                  "libretro implementation. Using RETRO_DEVICE_JOYPAD.\n",
                  VAR_10);
            VAR_10 = 129;
         }
         VAR_7 = "Joypad";
      }

      switch (VAR_10)
      {
         case 128:
            FUNC_0("%s %u.\n",
                  FUNC_5(VAR_2),
                  VAR_4 + 1);
            VAR_8 = 1;
            break;
         case 129:



            if (VAR_5 && VAR_5->ports.size != 0)
               VAR_8 = 1;
            break;
         default:



            FUNC_0("%s %u: %s (ID: %u).\n",
                    FUNC_5(VAR_1),
                    VAR_10, VAR_7, VAR_4+1);
            VAR_8 = 1;
            break;
      }

      if (VAR_8 && VAR_5 && VAR_4 < VAR_5->ports.size)
      {
         VAR_6.device = VAR_10;
         VAR_6.port = VAR_4;
         FUNC_2(&VAR_6);
      }
   }
}
