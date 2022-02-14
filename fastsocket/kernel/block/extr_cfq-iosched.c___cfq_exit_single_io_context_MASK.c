
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_context {int lock; int ioc_data; } ;
struct cfq_io_context {unsigned long dead_key; int ** cfqq; int * key; int queue_list; struct io_context* ioc; } ;
struct cfq_data {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct cfq_data*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 struct cfq_io_context* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct cfq_data *VAR_2,
      struct cfq_io_context *VAR_3)
{
 struct io_context *VAR_4 = VAR_3->ioc;

 FUNC_1(&VAR_3->queue_list);




 FUNC_4();
 VAR_3->dead_key = (unsigned long) VAR_3->key;
 VAR_3->key = ((void*)0);

 if (FUNC_3(VAR_4->ioc_data) == VAR_3) {
  FUNC_5(&VAR_4->lock);
  FUNC_2(VAR_4->ioc_data, ((void*)0));
  FUNC_6(&VAR_4->lock);
 }

 if (VAR_3->cfqq[VAR_0]) {
  FUNC_0(VAR_2, VAR_3->cfqq[VAR_0]);
  VAR_3->cfqq[VAR_0] = ((void*)0);
 }

 if (VAR_3->cfqq[VAR_1]) {
  FUNC_0(VAR_2, VAR_3->cfqq[VAR_1]);
  VAR_3->cfqq[VAR_1] = ((void*)0);
 }
}
