
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_queue {int pagesize; int queue_length; scalar_t__* queue_pages; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (scalar_t__*) ;

__attribute__((used)) static void FUNC_2(struct hw_queue *VAR_1)
{
 int VAR_2 = VAR_0 / VAR_1->pagesize;
 int VAR_3, VAR_4;

 if (!VAR_1 || !VAR_1->queue_pages)
  return;

 VAR_4 = VAR_1->queue_length / VAR_1->pagesize;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3 += VAR_2)
  FUNC_0((unsigned long)(VAR_1->queue_pages)[VAR_3]);

 FUNC_1(VAR_1->queue_pages);
}
