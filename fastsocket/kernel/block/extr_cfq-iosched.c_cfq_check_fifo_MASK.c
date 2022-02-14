
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_2__ {int next; } ;
struct cfq_queue {int cfqd; TYPE_1__ fifo; } ;


 scalar_t__ FUNC_0 (struct cfq_queue*) ;
 int FUNC_1 (int ,struct cfq_queue*,char*,struct request*) ;
 int FUNC_2 (struct cfq_queue*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 struct request* FUNC_4 (int ) ;
 int FUNC_5 (struct request*) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static struct request *FUNC_7(struct cfq_queue *VAR_1)
{
 struct request *VAR_2 = ((void*)0);

 if (FUNC_0(VAR_1))
  return ((void*)0);

 FUNC_2(VAR_1);

 if (FUNC_3(&VAR_1->fifo))
  return ((void*)0);

 VAR_2 = FUNC_4(VAR_1->fifo.next);
 if (FUNC_6(VAR_0, FUNC_5(VAR_2)))
  VAR_2 = ((void*)0);

 FUNC_1(VAR_1->cfqd, VAR_1, "fifo=%p", VAR_2);
 return VAR_2;
}
