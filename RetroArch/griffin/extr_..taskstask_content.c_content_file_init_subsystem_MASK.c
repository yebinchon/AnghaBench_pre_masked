
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {scalar_t__ size; } ;
struct retro_subsystem_info {scalar_t__ num_roms; char* desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct retro_subsystem_info* FUNC_1 (struct retro_subsystem_info const*,unsigned int,char*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 struct string_list* FUNC_5 () ;
 int FUNC_6 (char*,size_t,char*,char*,...) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char*,int ,size_t) ;

__attribute__((used)) static const struct
retro_subsystem_info *FUNC_9(
      const struct retro_subsystem_info *VAR_2,
      size_t VAR_3,
      char **VAR_4,
      bool *VAR_5)
{
   size_t VAR_6 = 1024 * sizeof(char);
   char *VAR_7 = (char*)FUNC_2(VAR_6);
   struct string_list *VAR_8 = FUNC_5();
   const struct retro_subsystem_info *VAR_9 = FUNC_1(
            VAR_2, (unsigned)VAR_3,
            FUNC_4(VAR_1));

   VAR_7[0] = '\0';

   if (!VAR_9)
   {
      FUNC_6(VAR_7, VAR_6,
            "Failed to find subsystem \"%s\" in libretro implementation.\n",
            FUNC_4(VAR_1));
      *VAR_4 = FUNC_7(VAR_7);
      goto error;
   }

   if (VAR_9->num_roms && !VAR_8)
   {
      FUNC_8(VAR_7,
            FUNC_3(VAR_0),
            VAR_6
            );
      *VAR_4 = FUNC_7(VAR_7);
      goto error;
   }
   else if (VAR_9->num_roms && (VAR_9->num_roms != VAR_8->size))
   {
      FUNC_6(VAR_7,
            VAR_6,
            "Libretro core requires %u content files for "
            "subsystem \"%s\", but %u content files were provided.\n",
            VAR_9->num_roms, VAR_9->desc,
            (unsigned)VAR_8->size);
      *VAR_4 = FUNC_7(VAR_7);
      goto error;
   }
   else if (!VAR_9->num_roms && VAR_8 && VAR_8->size)
   {
      FUNC_6(VAR_7,
            VAR_6,
            "Libretro core takes no content for subsystem \"%s\", "
            "but %u content files were provided.\n",
            VAR_9->desc,
            (unsigned)VAR_8->size);
      *VAR_4 = FUNC_7(VAR_7);
      goto error;
   }

   *VAR_5 = 1;
   FUNC_0(VAR_7);
   return VAR_9;

error:
   *VAR_5 = 0;
   FUNC_0(VAR_7);
   return ((void*)0);
}
