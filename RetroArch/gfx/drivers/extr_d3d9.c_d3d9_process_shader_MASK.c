
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* shader_path; } ;
typedef TYPE_1__ d3d9_video_t ;


 int FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static bool FUNC_3(d3d9_video_t *VAR_0)
{
   const char *VAR_1 = VAR_0->shader_path;
   if (VAR_0 && !FUNC_2(VAR_1))
      return FUNC_0(VAR_0, VAR_1);

   return FUNC_1(VAR_0);
}
