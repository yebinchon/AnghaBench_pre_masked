
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vertex; scalar_t__ fragment; } ;
struct TYPE_4__ {TYPE_1__ string; } ;
struct video_shader_pass {TYPE_2__ source; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (char const*,void**,scalar_t__*) ;
 int FUNC_1 (scalar_t__,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct video_shader_pass *VAR_0,
      const char *VAR_1)
{
   int64_t VAR_2 = 0;
   int64_t VAR_3 = VAR_0 ? FUNC_0(VAR_1,
         (void**)&VAR_0->source.string.vertex, &VAR_2) : 0;

   if (VAR_3 <= 0 || VAR_2 <= 0)
      return 0;

   FUNC_1(VAR_0->source.string.vertex, "#pragma parameter");
   VAR_0->source.string.fragment = FUNC_2(VAR_0->source.string.vertex);
   return VAR_0->source.string.fragment && VAR_0->source.string.vertex;
}
