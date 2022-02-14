
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {TYPE_2__* i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
struct TYPE_4__ {int s_blocksize; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct page*) ;
 int VAR_3 ;
 int FUNC_4 (struct page*,int *,struct writeback_control*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct page*,int ,int) ;
 int * VAR_6 ;
 scalar_t__ FUNC_6 () ;
 int * FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct inode*) ;
 int VAR_7 ;
 struct buffer_head* FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct writeback_control*,struct page*) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (int *,struct buffer_head*,int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_16(struct page *VAR_8,
    struct writeback_control *VAR_9)
{
 struct inode *VAR_10 = VAR_8->mapping->host;
 struct buffer_head *VAR_11;
 handle_t *VAR_12 = ((void*)0);
 int VAR_13 = 0;
 int VAR_14;

 FUNC_1(FUNC_3(VAR_8));





 if (FUNC_6())
  goto out_fail;

 FUNC_13(VAR_8);
 if (!FUNC_11(VAR_8)) {
  FUNC_5(VAR_8, VAR_10->i_sb->s_blocksize,
    (1 << VAR_0)|(1 << VAR_1));
  VAR_11 = FUNC_10(VAR_8);
 } else {
  VAR_11 = FUNC_10(VAR_8);
  if (!FUNC_15(((void*)0), VAR_11, 0, VAR_2,
           ((void*)0), VAR_5)) {


   return FUNC_4(VAR_8, ((void*)0), VAR_9);
  }
 }
 VAR_12 = FUNC_7(VAR_10, FUNC_9(VAR_10));

 if (FUNC_0(VAR_12)) {
  VAR_13 = FUNC_2(VAR_12);
  goto out_fail;
 }

 FUNC_15(VAR_12, VAR_11, 0,
   VAR_2, ((void*)0), VAR_3);

 VAR_13 = FUNC_4(VAR_8, VAR_6, VAR_9);
 if (VAR_13 == 0) {
  VAR_14 = FUNC_15(VAR_12, VAR_11, 0, VAR_2,
     ((void*)0), VAR_7);
  if (!VAR_13)
   VAR_13 = VAR_14;
 }
 FUNC_15(VAR_12, VAR_11, 0,
   VAR_2, ((void*)0), VAR_4);
 VAR_14 = FUNC_8(VAR_12);
 if (!VAR_13)
  VAR_13 = VAR_14;
 return VAR_13;

out_fail:
 FUNC_12(VAR_9, VAR_8);
 FUNC_14(VAR_8);
 return VAR_13;
}
