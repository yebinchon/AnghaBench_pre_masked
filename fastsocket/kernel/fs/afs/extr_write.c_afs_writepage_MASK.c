
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {int nr_to_write; int encountered_congestion; scalar_t__ nonblocking; } ;
struct page {int index; TYPE_1__* mapping; } ;
struct backing_dev_info {int dummy; } ;
struct afs_writeback {int dummy; } ;
struct TYPE_2__ {struct backing_dev_info* backing_dev_info; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct afs_writeback*,struct page*) ;
 scalar_t__ FUNC_4 (struct backing_dev_info*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

int FUNC_7(struct page *VAR_0, struct writeback_control *VAR_1)
{
 struct backing_dev_info *VAR_2 = VAR_0->mapping->backing_dev_info;
 struct afs_writeback *VAR_3;
 int VAR_4;

 FUNC_1("{%lx},", VAR_0->index);

 VAR_3 = (struct afs_writeback *) FUNC_5(VAR_0);
 FUNC_0(VAR_3 != ((void*)0));

 VAR_4 = FUNC_3(VAR_3, VAR_0);
 FUNC_6(VAR_0);
 if (VAR_4 < 0) {
  FUNC_2(" = %d", VAR_4);
  return 0;
 }

 VAR_1->nr_to_write -= VAR_4;
 if (VAR_1->nonblocking && FUNC_4(VAR_2))
  VAR_1->encountered_congestion = 1;

 FUNC_2(" = 0");
 return 0;
}
