
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct file {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (struct address_space*,int,unsigned int) ;

int FUNC_1(struct file *VAR_2, struct address_space *VAR_3,
   loff_t VAR_4, unsigned VAR_5, unsigned VAR_6,
   struct page **VAR_7, void **VAR_8)
{
 pgoff_t VAR_9 = VAR_4 >> VAR_1;

 *VAR_7 = FUNC_0(VAR_3, VAR_9, VAR_6);
 if (!*VAR_7)
  return -VAR_0;
 return 0;
}
