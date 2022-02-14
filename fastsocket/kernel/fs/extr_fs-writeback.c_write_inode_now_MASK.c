
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ nr_to_write; int range_end; int range_start; int sync_mode; } ;
struct inode {int i_mapping; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,struct writeback_control*) ;

int FUNC_6(struct inode *VAR_5, int VAR_6)
{
 int VAR_7;
 struct writeback_control VAR_8 = {
  .nr_to_write = VAR_1,
  .sync_mode = VAR_6 ? VAR_2 : VAR_3,
  .range_start = 0,
  .range_end = VAR_0,
 };

 if (!FUNC_1(VAR_5->i_mapping))
  VAR_8.nr_to_write = 0;

 FUNC_2();
 FUNC_3(&VAR_4);
 VAR_7 = FUNC_5(VAR_5, &VAR_8);
 FUNC_4(&VAR_4);
 if (VAR_6)
  FUNC_0(VAR_5);
 return VAR_7;
}
