
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct page {int index; TYPE_1__* mapping; } ;
struct inode {int i_blkbits; } ;
struct buffer_head {unsigned long b_size; scalar_t__ b_state; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct inode*,int,struct buffer_head*,int) ;

__attribute__((used)) static int FUNC_2(struct page *VAR_3)
{
 struct inode *VAR_4 = VAR_3->mapping->host;
 struct buffer_head VAR_5;
 unsigned long VAR_6 = VAR_2;
 u64 VAR_7 = VAR_3->index << (VAR_1 - VAR_4->i_blkbits);

 do {
  VAR_5.b_state = 0;
  VAR_5.b_size = VAR_6;
  FUNC_1(VAR_4, VAR_7, &VAR_5, 1);
  if (!FUNC_0(&VAR_5))
   return -VAR_0;
  VAR_6 -= VAR_5.b_size;
  VAR_7 += (VAR_5.b_size >> VAR_4->i_blkbits);
 } while(VAR_6 > 0);
 return 0;
}
