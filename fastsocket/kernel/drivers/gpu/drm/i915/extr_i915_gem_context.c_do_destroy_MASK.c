
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_hw_context {TYPE_2__* obj; int id; TYPE_1__* file_priv; } ;
struct TYPE_4__ {int base; } ;
struct TYPE_3__ {int context_idr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct i915_hw_context*) ;

__attribute__((used)) static void FUNC_3(struct i915_hw_context *VAR_0)
{
 if (VAR_0->file_priv)
  FUNC_1(&VAR_0->file_priv->context_idr, VAR_0->id);

 FUNC_0(&VAR_0->obj->base);
 FUNC_2(VAR_0);
}
