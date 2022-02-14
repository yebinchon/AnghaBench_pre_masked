
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int nr_to_write; int range_end; int range_start; int sync_mode; } ;
struct address_space {int nrpages; int host; } ;


 int VAR_0 ;
 int FUNC_0 (struct address_space*,struct writeback_control*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct address_space *VAR_1)
{
 int VAR_2;
 struct writeback_control VAR_3 = {
  .sync_mode = VAR_0,
  .nr_to_write = VAR_1->nrpages * 2,
  .range_start = 0,
  .range_end = FUNC_1(VAR_1->host),
 };

 VAR_2 = FUNC_0(VAR_1, &VAR_3);
 return VAR_2;
}
