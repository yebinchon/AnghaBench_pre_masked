
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ttm_mem_reg {int num_pages; scalar_t__ mem_type; struct nouveau_mem* mm_node; } ;
struct ttm_buffer_object {int dummy; } ;
struct nouveau_mem {TYPE_1__* vma; } ;
struct nouveau_channel {int dummy; } ;
struct nouveau_bo {int dummy; } ;
struct TYPE_2__ {int offset; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nouveau_channel*,int) ;
 int VAR_2 ;
 int FUNC_2 (struct nouveau_channel*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 struct nouveau_bo* FUNC_5 (struct ttm_buffer_object*) ;
 scalar_t__ FUNC_6 (struct nouveau_bo*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(struct nouveau_channel *VAR_4, struct ttm_buffer_object *VAR_5,
    struct ttm_mem_reg *VAR_6, struct ttm_mem_reg *VAR_7)
{
 struct nouveau_mem *VAR_8 = VAR_6->mm_node;
 struct nouveau_bo *VAR_9 = FUNC_5(VAR_5);
 u64 VAR_10 = (VAR_7->num_pages << VAR_2);
 u64 VAR_11 = VAR_8->vma[0].offset;
 u64 VAR_12 = VAR_8->vma[1].offset;
 int VAR_13;

 while (VAR_10) {
  u32 VAR_14, VAR_15, VAR_16;

  VAR_14 = FUNC_4(VAR_10, (u64)(4 * 1024 * 1024));
  VAR_15 = 16 * 4;
  VAR_16 = VAR_14 / VAR_15;

  if (VAR_6->mem_type == VAR_3 &&
      FUNC_6(VAR_9)) {
   VAR_13 = FUNC_2(VAR_4, 8);
   if (VAR_13)
    return VAR_13;

   FUNC_0(VAR_4, VAR_1, 0x0200, 7);
   FUNC_1 (VAR_4, 0);
   FUNC_1 (VAR_4, 0);
   FUNC_1 (VAR_4, VAR_15);
   FUNC_1 (VAR_4, VAR_16);
   FUNC_1 (VAR_4, 1);
   FUNC_1 (VAR_4, 0);
   FUNC_1 (VAR_4, 0);
  } else {
   VAR_13 = FUNC_2(VAR_4, 2);
   if (VAR_13)
    return VAR_13;

   FUNC_0(VAR_4, VAR_1, 0x0200, 1);
   FUNC_1 (VAR_4, 1);
  }
  if (VAR_7->mem_type == VAR_3 &&
      FUNC_6(VAR_9)) {
   VAR_13 = FUNC_2(VAR_4, 8);
   if (VAR_13)
    return VAR_13;

   FUNC_0(VAR_4, VAR_1, 0x021c, 7);
   FUNC_1 (VAR_4, 0);
   FUNC_1 (VAR_4, 0);
   FUNC_1 (VAR_4, VAR_15);
   FUNC_1 (VAR_4, VAR_16);
   FUNC_1 (VAR_4, 1);
   FUNC_1 (VAR_4, 0);
   FUNC_1 (VAR_4, 0);
  } else {
   VAR_13 = FUNC_2(VAR_4, 2);
   if (VAR_13)
    return VAR_13;

   FUNC_0(VAR_4, VAR_1, 0x021c, 1);
   FUNC_1 (VAR_4, 1);
  }

  VAR_13 = FUNC_2(VAR_4, 14);
  if (VAR_13)
   return VAR_13;

  FUNC_0(VAR_4, VAR_1, 0x0238, 2);
  FUNC_1 (VAR_4, FUNC_7(VAR_11));
  FUNC_1 (VAR_4, FUNC_7(VAR_12));
  FUNC_0(VAR_4, VAR_1, 0x030c, 8);
  FUNC_1 (VAR_4, FUNC_3(VAR_11));
  FUNC_1 (VAR_4, FUNC_3(VAR_12));
  FUNC_1 (VAR_4, VAR_15);
  FUNC_1 (VAR_4, VAR_15);
  FUNC_1 (VAR_4, VAR_15);
  FUNC_1 (VAR_4, VAR_16);
  FUNC_1 (VAR_4, 0x00000101);
  FUNC_1 (VAR_4, 0x00000000);
  FUNC_0(VAR_4, VAR_1, VAR_0, 1);
  FUNC_1 (VAR_4, 0);

  VAR_10 -= VAR_14;
  VAR_11 += VAR_14;
  VAR_12 += VAR_14;
 }

 return 0;
}
