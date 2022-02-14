
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct page {int index; TYPE_1__* mapping; } ;
struct inode {int i_size; struct super_block* i_sb; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct super_block*,int,int) ;
 int FUNC_5 (void*,int,scalar_t__,int) ;
 int FUNC_6 (struct page*) ;
 void* FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (void*,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct page*) ;

__attribute__((used)) static int FUNC_15(struct file *VAR_3, struct page * VAR_4)
{
 struct inode *VAR_5 = VAR_4->mapping->host;
 u32 VAR_6;
 int VAR_7;
 void *VAR_8;

 VAR_6 = (VAR_5->i_size + VAR_1 - 1) >> VAR_0;
 VAR_7 = 0;
 VAR_8 = FUNC_7(VAR_4);

 if (VAR_4->index < VAR_6) {
  struct super_block *VAR_9 = VAR_5->i_sb;
  u32 VAR_10 = FUNC_1(VAR_5) + VAR_4->index*4;
  u32 VAR_11, VAR_12;

  VAR_11 = FUNC_1(VAR_5) + VAR_6*4;
  FUNC_10(&VAR_2);
  if (VAR_4->index)
   VAR_11 = *(u32 *) FUNC_4(VAR_9, VAR_10-4,
    4);
  VAR_12 = (*(u32 *) FUNC_4(VAR_9, VAR_10, 4) -
   VAR_11);
  FUNC_11(&VAR_2);

  if (VAR_12 == 0)
   ;
  else if (FUNC_13(VAR_12 > (VAR_1 << 1))) {
   FUNC_12("cramfs: bad compressed blocksize %u\n",
    VAR_12);
   goto err;
  } else {
   FUNC_10(&VAR_2);
   VAR_7 = FUNC_5(VAR_8,
     VAR_1,
     FUNC_4(VAR_9, VAR_11, VAR_12),
     VAR_12);
   FUNC_11(&VAR_2);
   if (FUNC_13(VAR_7 < 0))
    goto err;
  }
 }

 FUNC_9(VAR_8 + VAR_7, 0, VAR_1 - VAR_7);
 FUNC_6(VAR_4);
 FUNC_8(VAR_4);
 FUNC_3(VAR_4);
 FUNC_14(VAR_4);
 return 0;

err:
 FUNC_8(VAR_4);
 FUNC_0(VAR_4);
 FUNC_2(VAR_4);
 FUNC_14(VAR_4);
 return 0;
}
