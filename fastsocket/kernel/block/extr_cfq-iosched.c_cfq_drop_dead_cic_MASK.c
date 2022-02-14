
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_context {int lock; int radix_root; struct cfq_io_context* ioc_data; } ;
struct cfq_io_context {int cic_list; int queue_list; } ;
struct cfq_data {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cfq_io_context*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_8(struct cfq_data *VAR_0, struct io_context *VAR_1,
    struct cfq_io_context *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(!FUNC_4(&VAR_2->queue_list));

 FUNC_6(&VAR_1->lock, VAR_3);

 FUNC_0(VAR_1->ioc_data == VAR_2);

 FUNC_5(&VAR_1->radix_root, (unsigned long) VAR_0);
 FUNC_3(&VAR_2->cic_list);
 FUNC_7(&VAR_1->lock, VAR_3);

 FUNC_2(VAR_2);
}
