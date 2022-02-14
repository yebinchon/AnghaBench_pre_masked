
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_0 (struct address_space*,int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,unsigned int,int) ;

__attribute__((used)) static int FUNC_4(struct address_space *VAR_3, loff_t VAR_4)
{
 pgoff_t VAR_5 = VAR_4 >> VAR_1;
 unsigned VAR_6 = VAR_4 & (VAR_2 - 1);
 struct page *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_0(VAR_3, VAR_5);
 if (!VAR_7)
  return -VAR_0;

 FUNC_3(VAR_7, VAR_6, VAR_2);
 FUNC_2(VAR_7);
 FUNC_1(VAR_7);
 return VAR_8;
}
