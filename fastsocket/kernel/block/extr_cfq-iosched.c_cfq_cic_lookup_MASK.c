
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_context {int lock; int ioc_data; int radix_root; } ;
struct cfq_io_context {struct cfq_data* key; } ;
struct cfq_data {int dummy; } ;


 int FUNC_0 (struct cfq_data*,struct io_context*,struct cfq_io_context*) ;
 struct cfq_io_context* FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ,struct cfq_io_context*) ;
 struct cfq_io_context* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct cfq_io_context *
FUNC_9(struct cfq_data *VAR_0, struct io_context *VAR_1)
{
 struct cfq_io_context *VAR_2;
 unsigned long VAR_3;
 void *VAR_4;

 if (FUNC_8(!VAR_1))
  return ((void*)0);

 FUNC_4();




 VAR_2 = FUNC_3(VAR_1->ioc_data);
 if (VAR_2 && VAR_2->key == VAR_0) {
  FUNC_5();
  return VAR_2;
 }

 do {
  VAR_2 = FUNC_1(&VAR_1->radix_root, (unsigned long) VAR_0);
  FUNC_5();
  if (!VAR_2)
   break;

  VAR_4 = VAR_2->key;
  if (FUNC_8(!VAR_4)) {
   FUNC_0(VAR_0, VAR_1, VAR_2);
   FUNC_4();
   continue;
  }

  FUNC_6(&VAR_1->lock, VAR_3);
  FUNC_2(VAR_1->ioc_data, VAR_2);
  FUNC_7(&VAR_1->lock, VAR_3);
  break;
 } while (1);

 return VAR_2;
}
