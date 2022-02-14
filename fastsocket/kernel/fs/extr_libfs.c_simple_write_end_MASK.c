
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct file {int dummy; } ;
struct address_space {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 void* FUNC_1 (struct page*,int ) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (void*,int ,unsigned int) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct file*,struct page*,unsigned int,unsigned int) ;
 int FUNC_6 (struct page*) ;

int FUNC_7(struct file *VAR_2, struct address_space *VAR_3,
   loff_t VAR_4, unsigned VAR_5, unsigned VAR_6,
   struct page *VAR_7, void *VAR_8)
{
 unsigned VAR_9 = VAR_4 & (VAR_1 - 1);


 if (VAR_6 < VAR_5) {
  void *VAR_10 = FUNC_1(VAR_7, VAR_0);
  FUNC_3(VAR_10 + VAR_9 + VAR_6, 0, VAR_5 - VAR_6);
  FUNC_0(VAR_7);
  FUNC_2(VAR_10, VAR_0);
 }

 FUNC_5(VAR_2, VAR_7, VAR_9, VAR_9+VAR_6);

 FUNC_6(VAR_7);
 FUNC_4(VAR_7);

 return VAR_6;
}
