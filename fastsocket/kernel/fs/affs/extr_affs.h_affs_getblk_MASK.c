
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int s_reserved; int s_partition_size; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (char*,int) ;
 struct buffer_head* FUNC_2 (struct super_block*,int) ;

__attribute__((used)) static inline struct buffer_head *
FUNC_3(struct super_block *VAR_0, int VAR_1)
{
 FUNC_1("affs_getblk: %d\n", VAR_1);
 if (VAR_1 >= FUNC_0(VAR_0)->s_reserved && VAR_1 < FUNC_0(VAR_0)->s_partition_size)
  return FUNC_2(VAR_0, VAR_1);
 return ((void*)0);
}
