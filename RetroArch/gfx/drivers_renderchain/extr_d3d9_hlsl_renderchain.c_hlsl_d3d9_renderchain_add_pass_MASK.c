
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct unsigned_vector_list {int dummy; } ;
struct LinkInfo {TYPE_2__* pass; } ;
struct shader_pass {int pool; struct unsigned_vector_list* attrib_map; scalar_t__ last_height; scalar_t__ last_width; struct LinkInfo info; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {TYPE_4__ chain; } ;
typedef TYPE_3__ hlsl_renderchain_t ;
struct TYPE_6__ {int path; } ;
struct TYPE_7__ {TYPE_1__ source; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct shader_pass*,int ) ;
 int FUNC_1 (TYPE_4__*,struct shader_pass*,struct LinkInfo const*) ;
 int FUNC_2 (TYPE_4__*,struct shader_pass*) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static bool FUNC_4(
      void *VAR_1, const struct LinkInfo *VAR_2)
{
   struct shader_pass VAR_3;
   hlsl_renderchain_t *VAR_4 = (hlsl_renderchain_t*)VAR_1;

   VAR_3.info = *VAR_2;
   VAR_3.last_width = 0;
   VAR_3.last_height = 0;
   VAR_3.attrib_map = (struct unsigned_vector_list*)
      FUNC_3();
   VAR_3.pool = VAR_0;

   FUNC_0(VAR_4->chain.dev, &VAR_3, VAR_2->pass->source.path);

   if (!FUNC_2(&VAR_4->chain, &VAR_3))
      return 0;

   return FUNC_1(&VAR_4->chain, &VAR_3,
         VAR_2);
}
