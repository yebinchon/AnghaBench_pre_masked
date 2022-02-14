
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_block {int dummy; } ;
struct disk_bitmap_header {int dummy; } ;


 void* FUNC_0 (struct dm_block*) ;

__attribute__((used)) static void *FUNC_1(struct dm_block *VAR_0)
{
 return FUNC_0(VAR_0) + sizeof(struct disk_bitmap_header);
}
