
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct retro_system_av_info {int geometry; } ;
struct retro_game_geometry {int base_height; int base_width; } ;
struct TYPE_5__ {int* unsigned_integer; } ;
struct TYPE_6__ {TYPE_1__ target; } ;
struct TYPE_7__ {TYPE_2__ value; } ;
typedef TYPE_3__ rarch_setting_t ;


 int FUNC_0 () ;
 int FUNC_1 (char*,size_t,char*,int,...) ;
 struct retro_system_av_info* FUNC_2 () ;

__attribute__((used)) static void FUNC_3(rarch_setting_t *VAR_0,
      char *VAR_1, size_t VAR_2)
{
   struct retro_game_geometry *VAR_3 = ((void*)0);
   struct retro_system_av_info *VAR_4 = ((void*)0);
   if (!VAR_0)
      return;

   VAR_4 = FUNC_2();
   VAR_3 = (struct retro_game_geometry*)&VAR_4->geometry;

   if (!(FUNC_0() % 2) && (*VAR_0->value.target.unsigned_integer%VAR_3->base_height == 0))
      FUNC_1(VAR_1, VAR_2, "%u (%ux)",
            *VAR_0->value.target.unsigned_integer,
            *VAR_0->value.target.unsigned_integer / VAR_3->base_height);
   else if ((FUNC_0() % 2) && (*VAR_0->value.target.unsigned_integer%VAR_3->base_width == 0))
      FUNC_1(VAR_1, VAR_2, "%u (%ux)",
            *VAR_0->value.target.unsigned_integer,
            *VAR_0->value.target.unsigned_integer / VAR_3->base_width);
   else
      FUNC_1(VAR_1, VAR_2, "%u",
            *VAR_0->value.target.unsigned_integer);
}
