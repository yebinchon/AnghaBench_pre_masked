
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_mem_reg {int num_pages; struct nouveau_mem* mm_node; } ;
struct ttm_buffer_object {int dummy; } ;
struct nouveau_mem {TYPE_1__* vma; } ;
struct nouveau_channel {int dummy; } ;
struct TYPE_2__ {int offset; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int,int) ;
 int FUNC_1 (struct nouveau_channel*,int ,int,int) ;
 int VAR_0 ;
 int FUNC_2 (struct nouveau_channel*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct nouveau_channel*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct nouveau_channel *VAR_2, struct ttm_buffer_object *VAR_3,
    struct ttm_mem_reg *VAR_4, struct ttm_mem_reg *VAR_5)
{
 struct nouveau_mem *VAR_6 = VAR_4->mm_node;
 int VAR_7 = FUNC_3(VAR_2, 10);
 if (VAR_7 == 0) {
  FUNC_1(VAR_2, VAR_0, 0x0400, 8);
  FUNC_2 (VAR_2, FUNC_5(VAR_6->vma[0].offset));
  FUNC_2 (VAR_2, FUNC_4(VAR_6->vma[0].offset));
  FUNC_2 (VAR_2, FUNC_5(VAR_6->vma[1].offset));
  FUNC_2 (VAR_2, FUNC_4(VAR_6->vma[1].offset));
  FUNC_2 (VAR_2, VAR_1);
  FUNC_2 (VAR_2, VAR_1);
  FUNC_2 (VAR_2, VAR_1);
  FUNC_2 (VAR_2, VAR_5->num_pages);
  FUNC_0(VAR_2, VAR_0, 0x0300, 0x0386);
 }
 return VAR_7;
}
