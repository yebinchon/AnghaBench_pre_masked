
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {unsigned int i_size; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef unsigned int loff_t ;
typedef int handle_t ;
struct TYPE_2__ {unsigned int i_disksize; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 unsigned int FUNC_1 (struct file*,struct address_space*,unsigned int,unsigned int,unsigned int,struct page*,void*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,struct inode*) ;
 int FUNC_4 (struct inode*,unsigned int) ;
 int FUNC_5 (struct inode*,unsigned int) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_0,
      struct address_space *VAR_1,
      loff_t VAR_2, unsigned VAR_3, unsigned VAR_4,
      struct page *VAR_5, void *VAR_6)
{
 int VAR_7 = 0;
 struct inode *VAR_8 = VAR_1->host;
 handle_t *VAR_9 = FUNC_2();

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_2 + VAR_4 > VAR_8->i_size) {
  FUNC_5(VAR_8, VAR_2 + VAR_4);
  VAR_7 = 1;
 }

 if (VAR_2 + VAR_4 > FUNC_0(VAR_8)->i_disksize) {




  FUNC_4(VAR_8, (VAR_2 + VAR_4));
  VAR_7 = 1;
 }
 FUNC_7(VAR_5);
 FUNC_6(VAR_5);







 if (VAR_7)
  FUNC_3(VAR_9, VAR_8);

 return VAR_4;
}
