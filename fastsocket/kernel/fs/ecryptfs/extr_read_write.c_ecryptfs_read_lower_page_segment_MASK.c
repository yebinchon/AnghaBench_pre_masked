
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
typedef scalar_t__ pgoff_t ;
typedef size_t loff_t ;


 size_t VAR_0 ;
 int FUNC_0 (char*,size_t,size_t,struct inode*) ;
 int FUNC_1 (struct page*) ;
 char* FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;

int FUNC_4(struct page *VAR_1,
         pgoff_t VAR_2,
         size_t VAR_3, size_t VAR_4,
         struct inode *VAR_5)
{
 char *VAR_6;
 loff_t VAR_7;
 int VAR_8;

 VAR_7 = ((((loff_t)VAR_2) << VAR_0) + VAR_3);
 VAR_6 = FUNC_2(VAR_1);
 VAR_8 = FUNC_0(VAR_6, VAR_7, VAR_4, VAR_5);
 if (VAR_8 > 0)
  VAR_8 = 0;
 FUNC_3(VAR_1);
 FUNC_1(VAR_1);
 return VAR_8;
}
