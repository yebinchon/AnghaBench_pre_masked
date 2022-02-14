
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int dummy; } ;
struct mpage_data {int use_writepage; int * bio; int get_block; int last_block_in_bio; } ;
struct address_space {int dummy; } ;
typedef int get_block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct address_space*,struct writeback_control*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct address_space*,struct writeback_control*,int ,struct mpage_data*) ;

int
FUNC_3(struct address_space *VAR_2,
  struct writeback_control *VAR_3, get_block_t VAR_4)
{
 int VAR_5;

 if (!VAR_4)
  VAR_5 = FUNC_0(VAR_2, VAR_3);
 else {
  struct mpage_data VAR_6 = {
   .bio = ((void*)0),
   .last_block_in_bio = 0,
   .get_block = VAR_4,
   .use_writepage = 1,
  };

  VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_1, &VAR_6);
  if (VAR_6.bio)
   FUNC_1(VAR_0, VAR_6.bio);
 }
 return VAR_5;
}
