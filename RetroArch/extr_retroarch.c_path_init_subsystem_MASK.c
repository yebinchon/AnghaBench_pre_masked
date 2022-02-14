
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


union string_list_elem_attr {int i; } ;
struct string_list {int dummy; } ;
struct retro_subsystem_memory_info {char* extension; int type; } ;
struct retro_subsystem_info {TYPE_2__* roms; int num_roms; } ;
typedef int savename ;
struct TYPE_10__ {int size; int data; } ;
struct TYPE_14__ {TYPE_1__ subsystem; } ;
typedef TYPE_5__ rarch_system_info_t ;
struct TYPE_13__ {char* savefile; } ;
struct TYPE_15__ {TYPE_4__ name; } ;
typedef TYPE_6__ global_t ;
typedef int ext ;
struct TYPE_16__ {TYPE_3__* elems; scalar_t__ size; } ;
struct TYPE_12__ {char* data; } ;
struct TYPE_11__ {unsigned int num_memory; int * memory; } ;


 unsigned int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,char*,size_t) ;
 int FUNC_4 (char*,char*,char*,int) ;
 int FUNC_5 (char*,char*,char*,int) ;
 int FUNC_6 (char*) ;
 TYPE_6__ VAR_5 ;
 struct retro_subsystem_info* FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (char*) ;
 int FUNC_12 (int ) ;
 char* VAR_6 ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int ,int *) ;
 TYPE_5__ VAR_7 ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (char*,int,char*,char*) ;
 int FUNC_17 (struct string_list*,char*,union string_list_elem_attr) ;
 int FUNC_18 (char*,char*,size_t) ;
 TYPE_7__* VAR_8 ;

__attribute__((used)) static bool FUNC_19(void)
{
   unsigned VAR_9, VAR_10;
   const struct retro_subsystem_info *VAR_11 = ((void*)0);
   global_t *VAR_12 = &VAR_5;
   rarch_system_info_t *VAR_13 = &VAR_7;
   bool VAR_14 = FUNC_12(VAR_4);

   if (!VAR_13 || VAR_14)
      return 0;


   VAR_11 = FUNC_7(
         VAR_13->subsystem.data,
         VAR_13->subsystem.size,
         FUNC_10(VAR_4));


   if (VAR_11)
   {
      unsigned VAR_15 = FUNC_0(VAR_11->num_roms,
            VAR_14 ?
            0 : (unsigned)VAR_8->size);

      for (VAR_9 = 0; VAR_9 < VAR_15; VAR_9++)
      {
         for (VAR_10 = 0; VAR_10 < VAR_11->roms[VAR_9].num_memory; VAR_10++)
         {
            union string_list_elem_attr VAR_16;
            char VAR_17[32];
            char VAR_18[VAR_1];
            size_t VAR_19 = VAR_1 * sizeof(char);
            char *VAR_20 = (char*)FUNC_8(
                  VAR_1 * sizeof(char));
            const struct retro_subsystem_memory_info *VAR_21 =
               (const struct retro_subsystem_memory_info*)
               &VAR_11->roms[VAR_9].memory[VAR_10];

            VAR_20[0] = VAR_17[0] = '\0';

            FUNC_16(VAR_17, sizeof(VAR_17), ".%s", VAR_21->extension);
            FUNC_18(VAR_18, VAR_8->elems[VAR_9].data, sizeof(VAR_18));
            FUNC_13(VAR_18);

            if (FUNC_11(FUNC_2(VAR_2)))
            {


               FUNC_18(VAR_20, FUNC_2(VAR_2), VAR_19);
               FUNC_4(VAR_20,
                     VAR_18, VAR_17,
                     VAR_19);
            }
            else
               FUNC_3(VAR_20, VAR_18, VAR_17, VAR_19);

            FUNC_1("%s \"%s\".\n",
               FUNC_9(VAR_0),
               VAR_20);

            VAR_16.i = VAR_21->type;
            FUNC_17((struct string_list*)FUNC_15(), VAR_20, VAR_16);
            FUNC_6(VAR_20);
         }
      }
   }

   if (VAR_12)
   {

      if (!FUNC_14(VAR_3, ((void*)0)))
         FUNC_5(VAR_12->name.savefile,
               VAR_6,
               ".srm",
               sizeof(VAR_12->name.savefile));

      if (FUNC_11(VAR_12->name.savefile))
      {
         FUNC_4(VAR_12->name.savefile,
               VAR_6,
               ".srm",
               sizeof(VAR_12->name.savefile));
         FUNC_1("%s \"%s\".\n",
               FUNC_9(VAR_0),
               VAR_12->name.savefile);
      }
   }

   return 1;
}
