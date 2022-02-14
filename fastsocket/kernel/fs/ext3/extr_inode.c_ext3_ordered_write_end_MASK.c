
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {unsigned int i_size; } ;
struct file {TYPE_1__* f_mapping; } ;
struct address_space {int dummy; } ;
typedef int loff_t ;
typedef int handle_t ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct file*,struct address_space*,int,unsigned int,unsigned int,struct page*,void*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int VAR_1 ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct inode*,int,unsigned int,unsigned int) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct inode*,int,unsigned int) ;
 int FUNC_11 (int *,int ,unsigned int,unsigned int,int *,int ) ;

__attribute__((used)) static int FUNC_12(struct file *VAR_2,
    struct address_space *VAR_3,
    loff_t VAR_4, unsigned VAR_5, unsigned VAR_6,
    struct page *VAR_7, void *VAR_8)
{
 handle_t *VAR_9 = FUNC_2();
 struct inode *VAR_10 = VAR_2->f_mapping->host;
 unsigned VAR_11, VAR_12;
 int VAR_13 = 0, VAR_14;

 FUNC_8(VAR_10, VAR_4, VAR_5, VAR_6);
 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

 VAR_11 = VAR_4 & (VAR_0 - 1);
 VAR_12 = VAR_11 + VAR_6;
 VAR_13 = FUNC_11(VAR_9, FUNC_6(VAR_7),
  VAR_11, VAR_12, ((void*)0), VAR_1);

 if (VAR_13 == 0)
  FUNC_10(VAR_10, VAR_4, VAR_6);




 if (VAR_4 + VAR_5 > VAR_10->i_size && FUNC_1(VAR_10))
  FUNC_4(VAR_9, VAR_10);
 VAR_14 = FUNC_3(VAR_9);
 if (!VAR_13)
  VAR_13 = VAR_14;
 FUNC_9(VAR_7);
 FUNC_7(VAR_7);

 if (VAR_4 + VAR_5 > VAR_10->i_size)
  FUNC_5(VAR_10);
 return VAR_13 ? VAR_13 : VAR_6;
}
