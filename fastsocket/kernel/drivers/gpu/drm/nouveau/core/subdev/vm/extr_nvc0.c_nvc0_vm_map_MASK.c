
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nouveau_vma {TYPE_1__* node; } ;
struct nouveau_mem {int memtype; } ;
struct nouveau_gpuobj {int dummy; } ;
struct TYPE_2__ {int type; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nouveau_gpuobj*,int,int ) ;
 int FUNC_2 (struct nouveau_vma*,int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct nouveau_vma *VAR_0, struct nouveau_gpuobj *VAR_1,
     struct nouveau_mem *VAR_2, u32 VAR_3, u32 VAR_4, u64 VAR_5, u64 VAR_6)
{
 u32 VAR_7 = 1 << (VAR_0->node->type - 8);

 VAR_5 = FUNC_2(VAR_0, VAR_5, VAR_2->memtype, 0);
 VAR_3 <<= 3;
 while (VAR_4--) {
  FUNC_1(VAR_1, VAR_3 + 0, FUNC_0(VAR_5));
  FUNC_1(VAR_1, VAR_3 + 4, FUNC_3(VAR_5));
  VAR_5 += VAR_7;
  VAR_3 += 8;
 }
}
