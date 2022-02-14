
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct page {int dummy; } ;
struct backing_dev_info {struct request_queue* unplug_io_data; } ;


 int FUNC_0 (struct request_queue*) ;

__attribute__((used)) static void FUNC_1(struct backing_dev_info *VAR_0,
       struct page *VAR_1)
{
 struct request_queue *VAR_2 = VAR_0->unplug_io_data;

 FUNC_0(VAR_2);
}
