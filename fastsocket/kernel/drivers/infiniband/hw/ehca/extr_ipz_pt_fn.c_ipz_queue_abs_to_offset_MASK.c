
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ipz_queue {int queue_length; int pagesize; int * queue_pages; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct ipz_queue *VAR_1, u64 VAR_2, u64 *VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_1->queue_length / VAR_1->pagesize; VAR_4++) {
  u64 VAR_5 = (u64)FUNC_0(VAR_1->queue_pages[VAR_4]);
  if (VAR_2 >= VAR_5 && VAR_2 < VAR_5 + VAR_1->pagesize) {
   *VAR_3 = VAR_2 - VAR_5 + VAR_4 * VAR_1->pagesize;
   return 0;
  }
 }
 return -VAR_0;
}
