
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ttm_mem_reg {int num_pages; struct nouveau_mem* mm_node; } ;
struct ttm_buffer_object {int dummy; } ;
struct nouveau_mem {TYPE_1__* vma; } ;
struct nouveau_channel {int dummy; } ;
struct TYPE_2__ {int offset; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct nouveau_channel*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct nouveau_channel*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct nouveau_channel *VAR_2, struct ttm_buffer_object *VAR_3,
    struct ttm_mem_reg *VAR_4, struct ttm_mem_reg *VAR_5)
{
 struct nouveau_mem *VAR_6 = VAR_4->mm_node;
 u64 VAR_7 = VAR_6->vma[0].offset;
 u64 VAR_8 = VAR_6->vma[1].offset;
 u32 VAR_9 = VAR_5->num_pages;
 int VAR_10;

 VAR_9 = VAR_5->num_pages;
 while (VAR_9) {
  int VAR_11 = (VAR_9 > 8191) ? 8191 : VAR_9;

  VAR_10 = FUNC_2(VAR_2, 11);
  if (VAR_10)
   return VAR_10;

  FUNC_0(VAR_2, VAR_0, 0x030c, 8);
  FUNC_1 (VAR_2, FUNC_4(VAR_7));
  FUNC_1 (VAR_2, FUNC_3(VAR_7));
  FUNC_1 (VAR_2, FUNC_4(VAR_8));
  FUNC_1 (VAR_2, FUNC_3(VAR_8));
  FUNC_1 (VAR_2, VAR_1);
  FUNC_1 (VAR_2, VAR_1);
  FUNC_1 (VAR_2, VAR_1);
  FUNC_1 (VAR_2, VAR_11);
  FUNC_0(VAR_2, VAR_0, 0x0300, 1);
  FUNC_1 (VAR_2, 0x00000110);

  VAR_9 -= VAR_11;
  VAR_7 += (VAR_1 * VAR_11);
  VAR_8 += (VAR_1 * VAR_11);
 }

 return 0;
}
