
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum gfx_wrap_type { ____Placeholder_gfx_wrap_type } gfx_wrap_type ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static enum gfx_wrap_type FUNC_2(const char *VAR_5)
{
   if (FUNC_1(VAR_5, "clamp_to_border"))
      return VAR_0;
   else if (FUNC_1(VAR_5, "clamp_to_edge"))
      return VAR_2;
   else if (FUNC_1(VAR_5, "repeat"))
      return VAR_4;
   else if (FUNC_1(VAR_5, "mirrored_repeat"))
      return VAR_3;

   FUNC_0("Invalid wrapping type %s. Valid ones are: clamp_to_border"
         " (default), clamp_to_edge, repeat and mirrored_repeat. Falling back to default.\n",
         VAR_5);
   return VAR_1;
}
