
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct validate_op {int both_list; int gart_list; int vram_list; } ;
struct nouveau_fence {int dummy; } ;


 int FUNC_0 (int *,struct nouveau_fence*) ;

__attribute__((used)) static void
FUNC_1(struct validate_op *VAR_0, struct nouveau_fence* VAR_1)
{
 FUNC_0(&VAR_0->vram_list, VAR_1);
 FUNC_0(&VAR_0->gart_list, VAR_1);
 FUNC_0(&VAR_0->both_list, VAR_1);
}
