
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct file {int f_mode; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 unsigned int FUNC_2 (struct page*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, struct page *VAR_3,
   loff_t VAR_4, unsigned VAR_5)
{
 unsigned int VAR_6 = FUNC_2(VAR_3);
 unsigned int VAR_7 = VAR_4 & (VAR_1 - 1);
 unsigned int VAR_8 = VAR_7 + VAR_5;

 if ((VAR_2->f_mode & VAR_0) &&
     !FUNC_1(VAR_3) &&
     !FUNC_0(VAR_3) &&
     VAR_6 &&
     (VAR_8 < VAR_6 || VAR_7))
  return 1;
 return 0;
}
