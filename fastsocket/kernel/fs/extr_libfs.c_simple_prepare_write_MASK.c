
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct file {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*,int ,unsigned int,unsigned int,unsigned int) ;

int FUNC_2(struct file *VAR_1, struct page *VAR_2,
   unsigned VAR_3, unsigned VAR_4)
{
 if (!FUNC_0(VAR_2)) {
  if (VAR_4 - VAR_3 != VAR_0)
   FUNC_1(VAR_2,
    0, VAR_3,
    VAR_4, VAR_0);
 }
 return 0;
}
