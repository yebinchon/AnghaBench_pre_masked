
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mem_blocks; int mem_block_size; } ;
struct ar9170 {int mem_lock; TYPE_1__ fw; int mem_free_blocks; int mem_allocs; int mem_bitmap; } ;
typedef size_t ssize_t ;


 int FUNC_0 (char*,size_t,size_t,char*,...) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,size_t,int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static char *FUNC_6(struct ar9170 *VAR_0, char *VAR_1,
          size_t VAR_2, ssize_t *VAR_3)
{
 FUNC_0(VAR_1, *VAR_3, VAR_2, "jar: [");

 FUNC_4(&VAR_0->mem_lock);

 *VAR_3 += FUNC_2(&VAR_1[*VAR_3], VAR_2 - *VAR_3,
      VAR_0->mem_bitmap, VAR_0->fw.mem_blocks);

 FUNC_0(VAR_1, *VAR_3, VAR_2, "]\n");

 FUNC_0(VAR_1, *VAR_3, VAR_2, "cookies: used:%3d / total:%3d, allocs:%d\n",
     FUNC_3(VAR_0->mem_bitmap, VAR_0->fw.mem_blocks),
     VAR_0->fw.mem_blocks, FUNC_1(&VAR_0->mem_allocs));

 FUNC_0(VAR_1, *VAR_3, VAR_2, "memory: free:%3d (%3d KiB) / total:%3d KiB)\n",
     FUNC_1(&VAR_0->mem_free_blocks),
     (FUNC_1(&VAR_0->mem_free_blocks) * VAR_0->fw.mem_block_size) / 1024,
     (VAR_0->fw.mem_blocks * VAR_0->fw.mem_block_size) / 1024);

 FUNC_5(&VAR_0->mem_lock);

 return VAR_1;
}
