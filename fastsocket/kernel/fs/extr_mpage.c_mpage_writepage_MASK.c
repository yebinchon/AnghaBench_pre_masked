
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int dummy; } ;
struct page {int dummy; } ;
struct mpage_data {int * bio; int use_writepage; int get_block; int last_block_in_bio; } ;
typedef int get_block_t ;


 int VAR_0 ;
 int FUNC_0 (struct page*,struct writeback_control*,struct mpage_data*) ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(struct page *VAR_1, get_block_t VAR_2,
 struct writeback_control *VAR_3)
{
 struct mpage_data VAR_4 = {
  .bio = ((void*)0),
  .last_block_in_bio = 0,
  .get_block = VAR_2,
  .use_writepage = 0,
 };
 int VAR_5 = FUNC_0(VAR_1, VAR_3, &VAR_4);
 if (VAR_4.bio)
  FUNC_1(VAR_0, VAR_4.bio);
 return VAR_5;
}
