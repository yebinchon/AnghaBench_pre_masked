
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {unsigned int i_size; } ;
struct file {TYPE_1__* f_mapping; } ;
struct address_space {int dummy; } ;
typedef unsigned int loff_t ;
typedef int handle_t ;
struct TYPE_2__ {struct inode* host; } ;


 unsigned int FUNC_0 (struct file*,struct address_space*,unsigned int,unsigned int,unsigned int,struct page*,void*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct inode*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct inode*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_0,
    struct address_space *VAR_1,
    loff_t VAR_2, unsigned VAR_3, unsigned VAR_4,
    struct page *VAR_5, void *VAR_6)
{
 handle_t *VAR_7 = FUNC_2();
 struct inode *VAR_8 = VAR_0->f_mapping->host;
 int VAR_9;

 FUNC_7(VAR_8, VAR_2, VAR_3, VAR_4);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_9(VAR_8, VAR_2, VAR_4);




 if (VAR_2 + VAR_3 > VAR_8->i_size && FUNC_1(VAR_8))
  FUNC_4(VAR_7, VAR_8);
 VAR_9 = FUNC_3(VAR_7);
 FUNC_8(VAR_5);
 FUNC_6(VAR_5);

 if (VAR_2 + VAR_3 > VAR_8->i_size)
  FUNC_5(VAR_8);
 return VAR_9 ? VAR_9 : VAR_4;
}
