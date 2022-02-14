
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_mem {TYPE_1__* vma; } ;
struct TYPE_3__ {scalar_t__ node; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static inline void
FUNC_2(struct nouveau_mem *VAR_0)
{
 if (VAR_0->vma[0].node) {
  FUNC_1(&VAR_0->vma[0]);
  FUNC_0(&VAR_0->vma[0]);
 }

 if (VAR_0->vma[1].node) {
  FUNC_1(&VAR_0->vma[1]);
  FUNC_0(&VAR_0->vma[1]);
 }
}
