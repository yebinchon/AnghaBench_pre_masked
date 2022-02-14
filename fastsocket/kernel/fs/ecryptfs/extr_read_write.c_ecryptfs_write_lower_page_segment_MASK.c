
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ index; } ;
struct inode {int dummy; } ;
typedef size_t loff_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct inode*,char*,size_t,size_t) ;
 char* FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;

int FUNC_3(struct inode *VAR_1,
          struct page *VAR_2,
          size_t VAR_3, size_t VAR_4)
{
 char *VAR_5;
 loff_t VAR_6;
 int VAR_7;

 VAR_6 = ((((loff_t)VAR_2->index) << VAR_0)
    + VAR_3);
 VAR_5 = FUNC_1(VAR_2);
 VAR_7 = FUNC_0(VAR_1, VAR_5, VAR_6, VAR_4);
 if (VAR_7 > 0)
  VAR_7 = 0;
 FUNC_2(VAR_2);
 return VAR_7;
}
