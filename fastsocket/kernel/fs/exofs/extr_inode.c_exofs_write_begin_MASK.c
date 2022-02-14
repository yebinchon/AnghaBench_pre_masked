
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct file {int dummy; } ;
struct address_space {int dummy; } ;
typedef int loff_t ;


 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,int) ;
 int FUNC_3 (struct file*,struct address_space*,int ,unsigned int,unsigned int,struct page**,void**) ;
 int FUNC_4 (struct page*) ;

int FUNC_5(struct file *VAR_1, struct address_space *VAR_2,
  loff_t VAR_3, unsigned VAR_4, unsigned VAR_5,
  struct page **VAR_6, void **VAR_7)
{
 int VAR_8 = 0;
 struct page *VAR_9;

 VAR_9 = *VAR_6;
 if (VAR_9 == ((void*)0)) {
  VAR_8 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7);
  if (VAR_8) {
   FUNC_0("simple_write_begin faild\n");
   return VAR_8;
  }

  VAR_9 = *VAR_6;
 }


 if (!FUNC_1(VAR_9) && (VAR_4 != VAR_0)) {
  VAR_8 = FUNC_2(VAR_9, 1);
  if (VAR_8) {

   FUNC_4(VAR_9);
   FUNC_0("__readpage_filler faild\n");
  }
 }

 return VAR_8;
}
