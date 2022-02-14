
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct inode*,struct page*,int,int,int) ;
 struct page* FUNC_1 (struct address_space*,int,int) ;
 int FUNC_2 (struct address_space*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;

int FUNC_5(handle_t *VAR_3,
  struct address_space *VAR_4, loff_t VAR_5,
  loff_t VAR_6, int VAR_7)
{
 struct inode *VAR_8 = VAR_4->host;
 struct page *VAR_9;
 int VAR_10 = 0;

 VAR_9 = FUNC_1(VAR_4, VAR_5 >> VAR_1,
       FUNC_2(VAR_4) & ~VAR_2);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_3, VAR_8, VAR_9,
  VAR_5, VAR_6, VAR_7);

 FUNC_4(VAR_9);
 FUNC_3(VAR_9);
 return VAR_10;
}
