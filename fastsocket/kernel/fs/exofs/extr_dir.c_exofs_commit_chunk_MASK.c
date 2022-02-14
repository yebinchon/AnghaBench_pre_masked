
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; } ;
struct inode {unsigned int i_size; int i_version; } ;
struct address_space {struct inode* host; } ;
typedef unsigned int loff_t ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct inode*,unsigned int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*,int) ;

__attribute__((used)) static int FUNC_8(struct page *VAR_0, loff_t VAR_1, unsigned VAR_2)
{
 struct address_space *VAR_3 = VAR_0->mapping;
 struct inode *VAR_4 = VAR_3->host;
 int VAR_5 = 0;

 VAR_4->i_version++;

 if (!FUNC_1(VAR_0))
  FUNC_2(VAR_0);

 if (VAR_1+VAR_2 > VAR_4->i_size) {
  FUNC_3(VAR_4, VAR_1+VAR_2);
  FUNC_4(VAR_4);
 }
 FUNC_5(VAR_0);

 if (FUNC_0(VAR_4))
  VAR_5 = FUNC_7(VAR_0, 1);
 else
  FUNC_6(VAR_0);

 return VAR_5;
}
