
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_queue {int new_cfqq; } ;
struct cfq_io_context {int dummy; } ;
struct cfq_data {int dummy; } ;


 int FUNC_0 (struct cfq_data*,struct cfq_queue*,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cfq_queue*) ;
 int FUNC_3 (struct cfq_io_context*,int ,int) ;
 struct cfq_queue* FUNC_4 (struct cfq_io_context*,int) ;

__attribute__((used)) static struct cfq_queue *
FUNC_5(struct cfq_data *VAR_0, struct cfq_io_context *VAR_1,
  struct cfq_queue *VAR_2)
{
 FUNC_0(VAR_0, VAR_2, "merging with queue %p", VAR_2->new_cfqq);
 FUNC_3(VAR_1, VAR_2->new_cfqq, 1);
 FUNC_1(VAR_2->new_cfqq);
 FUNC_2(VAR_2);
 return FUNC_4(VAR_1, 1);
}
