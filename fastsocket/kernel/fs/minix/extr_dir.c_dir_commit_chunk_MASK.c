
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; } ;
struct inode {unsigned int i_size; } ;
struct address_space {struct inode* host; } ;
typedef unsigned int loff_t ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,struct address_space*,unsigned int,unsigned int,unsigned int,struct page*,int *) ;
 int FUNC_2 (struct inode*,unsigned int) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*,int) ;

__attribute__((used)) static int FUNC_6(struct page *VAR_0, loff_t VAR_1, unsigned VAR_2)
{
 struct address_space *VAR_3 = VAR_0->mapping;
 struct inode *VAR_4 = VAR_3->host;
 int VAR_5 = 0;
 FUNC_1(((void*)0), VAR_3, VAR_1, VAR_2, VAR_2, VAR_0, ((void*)0));

 if (VAR_1+VAR_2 > VAR_4->i_size) {
  FUNC_2(VAR_4, VAR_1+VAR_2);
  FUNC_3(VAR_4);
 }
 if (FUNC_0(VAR_4))
  VAR_5 = FUNC_5(VAR_0, 1);
 else
  FUNC_4(VAR_0);
 return VAR_5;
}
