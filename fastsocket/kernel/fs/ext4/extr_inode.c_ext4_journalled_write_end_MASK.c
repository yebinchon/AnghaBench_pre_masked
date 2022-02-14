
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int i_size; scalar_t__ i_nlink; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;
typedef int handle_t ;
struct TYPE_2__ {int i_disksize; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct inode*) ;
 int FUNC_7 (int *,struct inode*) ;
 int FUNC_8 (int *,struct inode*) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,int) ;
 int FUNC_12 (struct inode*,int) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct page*,unsigned int,unsigned int) ;
 int FUNC_16 (struct inode*,int,unsigned int,unsigned int) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (int *,int ,unsigned int,unsigned int,int*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_19(struct file *VAR_3,
         struct address_space *VAR_4,
         loff_t VAR_5, unsigned VAR_6, unsigned VAR_7,
         struct page *VAR_8, void *VAR_9)
{
 handle_t *VAR_10 = FUNC_4();
 struct inode *VAR_11 = VAR_4->host;
 int VAR_12 = 0, VAR_13;
 int VAR_14 = 0;
 unsigned VAR_15, VAR_16;
 loff_t VAR_17;

 FUNC_16(VAR_11, VAR_5, VAR_6, VAR_7);
 VAR_15 = VAR_5 & (VAR_1 - 1);
 VAR_16 = VAR_15 + VAR_6;

 if (VAR_7 < VAR_6) {
  if (!FUNC_1(VAR_8))
   VAR_7 = 0;
  FUNC_15(VAR_8, VAR_15+VAR_7, VAR_16);
 }

 VAR_12 = FUNC_18(VAR_10, FUNC_13(VAR_8), VAR_15,
    VAR_16, &VAR_14, VAR_2);
 if (!VAR_14)
  FUNC_2(VAR_8);
 VAR_17 = VAR_5 + VAR_7;
 if (VAR_17 > VAR_11->i_size)
  FUNC_12(VAR_11, VAR_5+VAR_7);
 FUNC_9(VAR_11, VAR_0);
 if (VAR_17 > FUNC_0(VAR_11)->i_disksize) {
  FUNC_11(VAR_11, VAR_17);
  VAR_13 = FUNC_6(VAR_10, VAR_11);
  if (!VAR_12)
   VAR_12 = VAR_13;
 }

 FUNC_17(VAR_8);
 FUNC_14(VAR_8);
 if (VAR_5 + VAR_6 > VAR_11->i_size && FUNC_3(VAR_11))




  FUNC_7(VAR_10, VAR_11);

 VAR_13 = FUNC_5(VAR_10);
 if (!VAR_12)
  VAR_12 = VAR_13;
 if (VAR_5 + VAR_6 > VAR_11->i_size) {
  FUNC_10(VAR_11);





  if (VAR_11->i_nlink)
   FUNC_8(((void*)0), VAR_11);
 }

 return VAR_12 ? VAR_12 : VAR_7;
}
