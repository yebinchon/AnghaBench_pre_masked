
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int encountered_congestion; scalar_t__ nr_to_write; int range_start; int range_end; scalar_t__ nonblocking; scalar_t__ range_cyclic; } ;
struct backing_dev_info {int dummy; } ;
struct address_space {void* writeback_index; struct backing_dev_info* backing_dev_info; } ;
typedef void* pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct address_space*,struct writeback_control*,void*,void*,void**) ;
 scalar_t__ FUNC_3 (struct backing_dev_info*) ;

int FUNC_4(struct address_space *VAR_2,
     struct writeback_control *VAR_3)
{
 struct backing_dev_info *VAR_4 = VAR_2->backing_dev_info;
 pgoff_t VAR_5, VAR_6, VAR_7;
 int VAR_8;

 FUNC_0("");

 if (VAR_3->nonblocking && FUNC_3(VAR_4)) {
  VAR_3->encountered_congestion = 1;
  FUNC_1(" = 0 [congest]");
  return 0;
 }

 if (VAR_3->range_cyclic) {
  VAR_5 = VAR_2->writeback_index;
  VAR_6 = -1;
  VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_5, VAR_6, &VAR_7);
  if (VAR_5 > 0 && VAR_3->nr_to_write > 0 && VAR_8 == 0 &&
      !(VAR_3->nonblocking && VAR_3->encountered_congestion))
   VAR_8 = FUNC_2(VAR_2, VAR_3, 0, VAR_5,
          &VAR_7);
  VAR_2->writeback_index = VAR_7;
 } else if (VAR_3->range_start == 0 && VAR_3->range_end == VAR_0) {
  VAR_6 = (pgoff_t)(VAR_0 >> VAR_1);
  VAR_8 = FUNC_2(VAR_2, VAR_3, 0, VAR_6, &VAR_7);
  if (VAR_3->nr_to_write > 0)
   VAR_2->writeback_index = VAR_7;
 } else {
  VAR_5 = VAR_3->range_start >> VAR_1;
  VAR_6 = VAR_3->range_end >> VAR_1;
  VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_5, VAR_6, &VAR_7);
 }

 FUNC_1(" = %d", VAR_8);
 return VAR_8;
}
