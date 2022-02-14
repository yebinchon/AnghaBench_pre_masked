
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_context {int lock; int radix_root; } ;
struct cfq_io_context {int cic_list; int dead_key; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct cfq_io_context*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct io_context *VAR_0, struct cfq_io_context *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(!VAR_1->dead_key);

 FUNC_4(&VAR_0->lock, VAR_2);
 FUNC_3(&VAR_0->radix_root, VAR_1->dead_key);
 FUNC_2(&VAR_1->cic_list);
 FUNC_5(&VAR_0->lock, VAR_2);

 FUNC_1(VAR_1);
}
