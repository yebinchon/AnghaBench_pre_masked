
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int nr_to_write; int sync_mode; } ;
struct inode {struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct address_space*) ;
 int FUNC_1 (struct inode*,struct writeback_control*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1)
{

 int VAR_2;
 struct address_space *VAR_3 = VAR_1->i_mapping;
 struct writeback_control VAR_4 = {
        .sync_mode = VAR_0,
       .nr_to_write = 0,
 };




 VAR_2 = FUNC_1(VAR_1, &VAR_4);
 if (!VAR_2)
        VAR_2 = FUNC_0(VAR_3);
 return VAR_2;
}
