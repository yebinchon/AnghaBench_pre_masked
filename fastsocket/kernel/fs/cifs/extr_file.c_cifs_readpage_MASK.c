
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ index; } ;
struct file {int * private_data; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int,char*,struct page*,int,int) ;
 int FUNC_3 (struct file*,struct page*,int*) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, struct page *VAR_4)
{
 loff_t VAR_5 = (loff_t)VAR_4->index << VAR_2;
 int VAR_6 = -VAR_0;
 int VAR_7;

 VAR_7 = FUNC_1();

 if (VAR_3->private_data == ((void*)0)) {
  VAR_6 = -VAR_1;
  FUNC_0(VAR_7);
  return VAR_6;
 }

 FUNC_2(1, "readpage %p at offset %d 0x%x\n",
   VAR_4, (int)VAR_5, (int)VAR_5);

 VAR_6 = FUNC_3(VAR_3, VAR_4, &VAR_5);

 FUNC_4(VAR_4);

 FUNC_0(VAR_7);
 return VAR_6;
}
