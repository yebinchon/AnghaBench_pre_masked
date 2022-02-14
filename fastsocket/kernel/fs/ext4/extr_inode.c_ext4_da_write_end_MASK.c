
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;
typedef int handle_t ;
struct TYPE_2__ {int i_disksize; int i_data_sem; } ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (struct inode*) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct page*,unsigned long) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int *,struct inode*) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct inode*) ;
 int FUNC_9 (struct file*,struct address_space*,int,unsigned int,unsigned int,struct page*,void*) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 int FUNC_11 (struct file*,struct address_space*,int,unsigned int,unsigned int,struct page*,void*) ;
 int FUNC_12 (struct file*,struct address_space*,int,unsigned int,unsigned int,struct page*,void*) ;
 int FUNC_13 (struct inode*,int,unsigned int,unsigned int) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct file *VAR_2,
        struct address_space *VAR_3,
        loff_t VAR_4, unsigned VAR_5, unsigned VAR_6,
        struct page *VAR_7, void *VAR_8)
{
 struct inode *VAR_9 = VAR_3->host;
 int VAR_10 = 0, VAR_11;
 handle_t *VAR_12 = FUNC_6();
 loff_t VAR_13;
 unsigned long VAR_14, VAR_15;
 int VAR_16 = (int)(unsigned long)VAR_8;

 if (VAR_16 == VAR_0) {
  switch (FUNC_4(VAR_9)) {
  case 129:
   return FUNC_9(VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_6, VAR_7, VAR_8);
  case 128:
   return FUNC_11(VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_6, VAR_7, VAR_8);
  default:
   FUNC_0();
  }
 }

 FUNC_13(VAR_9, VAR_4, VAR_5, VAR_6);
 VAR_14 = VAR_4 & (VAR_1 - 1);
 VAR_15 = VAR_14 + VAR_6 - 1;







 VAR_13 = VAR_4 + VAR_6;
 if (VAR_6 && VAR_13 > FUNC_1(VAR_9)->i_disksize) {
  if (FUNC_3(VAR_7, VAR_15)) {
   FUNC_2(&FUNC_1(VAR_9)->i_data_sem);
   if (VAR_13 > FUNC_1(VAR_9)->i_disksize) {




    if (FUNC_10(VAR_9))
     VAR_10 = FUNC_5(VAR_12,
           VAR_9);

    FUNC_1(VAR_9)->i_disksize = VAR_13;
   }
   FUNC_14(&FUNC_1(VAR_9)->i_data_sem);




   FUNC_8(VAR_12, VAR_9);
  }
 }
 VAR_11 = FUNC_12(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
       VAR_7, VAR_8);
 VAR_6 = VAR_11;
 if (VAR_11 < 0)
  VAR_10 = VAR_11;
 VAR_11 = FUNC_7(VAR_12);
 if (!VAR_10)
  VAR_10 = VAR_11;

 return VAR_10 ? VAR_10 : VAR_6;
}
