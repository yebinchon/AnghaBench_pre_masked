
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {scalar_t__ const index; TYPE_2__* mapping; } ;
struct inode {int dummy; } ;
typedef scalar_t__ pgoff_t ;
typedef int loff_t ;
typedef int get_block_t ;
struct TYPE_4__ {TYPE_1__* a_ops; struct inode* host; } ;
struct TYPE_3__ {int (* invalidatepage ) (struct page*,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode* const,struct page*,int *,struct writeback_control*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct inode* const) ;
 int FUNC_2 (struct page*,int *,struct writeback_control*) ;
 int FUNC_3 (struct page*,unsigned int) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*,unsigned int,int) ;

int FUNC_6(struct page *VAR_4, get_block_t *VAR_5,
   struct writeback_control *VAR_6)
{
 struct inode * const VAR_7 = VAR_4->mapping->host;
 loff_t VAR_8 = FUNC_1(VAR_7);
 const pgoff_t VAR_9 = VAR_8 >> VAR_1;
 unsigned VAR_10;
 int VAR_11;


 if (VAR_4->index < VAR_9)
  goto out;


 VAR_10 = VAR_8 & (VAR_2-1);
 if (VAR_4->index >= VAR_9+1 || !VAR_10) {
  FUNC_4(VAR_4);
  return 0;
 }
 FUNC_5(VAR_4, VAR_10, VAR_2);
out:
 VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_6);
 if (VAR_11 == -VAR_0)
  VAR_11 = FUNC_0(VAR_7, VAR_4, VAR_5, VAR_6,
           VAR_3);
 return VAR_11;
}
