
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; } ;
struct buffer_head {int b_data; } ;
struct TYPE_2__ {int s_reserved; int s_partition_size; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*,int) ;
 struct buffer_head* FUNC_4 (struct super_block*,int) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;

__attribute__((used)) static inline struct buffer_head *
FUNC_7(struct super_block *VAR_0, int VAR_1)
{
 struct buffer_head *VAR_2;
 FUNC_3("affs_getzeroblk: %d\n", VAR_1);
 if (VAR_1 >= FUNC_0(VAR_0)->s_reserved && VAR_1 < FUNC_0(VAR_0)->s_partition_size) {
  VAR_2 = FUNC_4(VAR_0, VAR_1);
  FUNC_1(VAR_2);
  FUNC_2(VAR_2->b_data, 0 , VAR_0->s_blocksize);
  FUNC_5(VAR_2);
  FUNC_6(VAR_2);
  return VAR_2;
 }
 return ((void*)0);
}
