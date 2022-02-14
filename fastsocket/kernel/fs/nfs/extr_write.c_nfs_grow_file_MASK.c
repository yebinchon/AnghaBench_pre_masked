
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int index; TYPE_1__* mapping; } ;
struct inode {int i_lock; } ;
typedef int pgoff_t ;
typedef int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct page *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 struct inode *VAR_5 = VAR_2->mapping->host;
 loff_t VAR_6, VAR_7;
 pgoff_t VAR_8;

 FUNC_3(&VAR_5->i_lock);
 VAR_7 = FUNC_0(VAR_5);
 VAR_8 = (VAR_7 - 1) >> VAR_1;
 if (VAR_7 > 0 && VAR_2->index < VAR_8)
  goto out;
 VAR_6 = ((loff_t)VAR_2->index << VAR_1) + ((loff_t)VAR_3+VAR_4);
 if (VAR_7 >= VAR_6)
  goto out;
 FUNC_1(VAR_5, VAR_6);
 FUNC_2(VAR_5, VAR_0);
out:
 FUNC_4(&VAR_5->i_lock);
}
