
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef scalar_t__ block_t ;


 int FUNC_0 (struct buffer_head*) ;
 scalar_t__* FUNC_1 (struct buffer_head*) ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct inode*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,unsigned long) ;
 struct buffer_head* FUNC_6 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct inode *VAR_0, block_t *VAR_1, block_t *VAR_2, int VAR_3)
{
 struct buffer_head * VAR_4;
 unsigned long VAR_5;

 if (VAR_3--) {
  for ( ; VAR_1 < VAR_2 ; VAR_1++) {
   VAR_5 = FUNC_2(*VAR_1);
   if (!VAR_5)
    continue;
   *VAR_1 = 0;
   VAR_4 = FUNC_6(VAR_0->i_sb, VAR_5);
   if (!VAR_4)
    continue;
   FUNC_7(VAR_0, (block_t*)VAR_4->b_data,
          FUNC_1(VAR_4), VAR_3);
   FUNC_0(VAR_4);
   FUNC_5(VAR_0, VAR_5);
   FUNC_4(VAR_0);
  }
 } else
  FUNC_3(VAR_0, VAR_1, VAR_2);
}
