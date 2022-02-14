
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int i_blkbits; } ;
struct buffer_head {int b_size; int b_blocknr; int b_state; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct inode*,int ,struct buffer_head*,int) ;

int FUNC_3(struct inode *VAR_0, u64 VAR_1, int *VAR_2, u64 *VAR_3, unsigned *VAR_4)
{
 struct buffer_head VAR_5 = { .b_state = 0, .b_blocknr = 0 };
 int VAR_6;
 int VAR_7 = *VAR_2;

 FUNC_0(!VAR_4);
 FUNC_0(!VAR_3);
 FUNC_0(!VAR_2);

 VAR_5.b_size = 1 << (VAR_0->i_blkbits + (VAR_7 ? 0 : 5));
 VAR_6 = FUNC_2(VAR_0, VAR_1, &VAR_5, VAR_7);
 *VAR_4 = VAR_5.b_size >> VAR_0->i_blkbits;
 *VAR_3 = VAR_5.b_blocknr;
 if (FUNC_1(&VAR_5))
  *VAR_2 = 1;
 else
  *VAR_2 = 0;
 return VAR_6;
}
