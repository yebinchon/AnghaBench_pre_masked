
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {unsigned int i_size; scalar_t__ i_nlink; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef unsigned int loff_t ;
typedef int handle_t ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct file*,struct address_space*,unsigned int,unsigned int,unsigned int,struct page*,void*) ;
 int FUNC_2 (int *,struct inode*) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct inode*) ;
 int FUNC_6 (int *,struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct inode*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_10 (struct page*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_0,
      struct address_space *VAR_1,
      loff_t VAR_2, unsigned VAR_3, unsigned VAR_4,
      struct page *VAR_5, void *VAR_6)
{
 handle_t *VAR_7 = FUNC_3();
 struct inode *VAR_8 = VAR_1->host;
 int VAR_9 = 0, VAR_10;

 FUNC_9(VAR_8, VAR_2, VAR_3, VAR_4);
 VAR_9 = FUNC_2(VAR_7, VAR_8);

 if (VAR_9 == 0) {
  VAR_10 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
       VAR_5, VAR_6);
  VAR_4 = VAR_10;
  if (VAR_2 + VAR_3 > VAR_8->i_size && FUNC_0(VAR_8))




   FUNC_5(VAR_7, VAR_8);
  if (VAR_10 < 0)
   VAR_9 = VAR_10;
 } else {
  FUNC_10(VAR_5);
  FUNC_8(VAR_5);
 }

 VAR_10 = FUNC_4(VAR_7);
 if (!VAR_9)
  VAR_9 = VAR_10;

 if (VAR_2 + VAR_3 > VAR_8->i_size) {
  FUNC_7(VAR_8);





  if (VAR_8->i_nlink)
   FUNC_6(((void*)0), VAR_8);
 }


 return VAR_9 ? VAR_9 : VAR_4;
}
