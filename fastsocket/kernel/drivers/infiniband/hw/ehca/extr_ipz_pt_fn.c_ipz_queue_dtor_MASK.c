
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipz_queue {int queue_length; int pagesize; scalar_t__* queue_pages; scalar_t__ small_page; } ;
struct ehca_pd {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct ipz_queue*,struct ehca_pd*) ;
 scalar_t__ FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__*) ;

int FUNC_6(struct ehca_pd *VAR_1, struct ipz_queue *VAR_2)
{
 int VAR_3, VAR_4;

 if (!VAR_2 || !VAR_2->queue_pages) {
  FUNC_0("queue or queue_pages is NULL");
  return 0;
 }

 if (VAR_2->small_page)
  FUNC_2(VAR_2, VAR_1);
 else {
  VAR_4 = VAR_2->queue_length / VAR_2->pagesize;
  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3 += VAR_0)
   FUNC_1((unsigned long)VAR_2->queue_pages[VAR_3]);
 }

 if (FUNC_3(VAR_2->queue_pages))
  FUNC_5(VAR_2->queue_pages);
 else
  FUNC_4(VAR_2->queue_pages);

 return 1;
}
