
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_queue {int dummy; } ;
struct cfq_data {struct cfq_queue* async_idle_cfqq; struct cfq_queue*** async_cfqq; } ;


 int FUNC_0 () ;




__attribute__((used)) static struct cfq_queue **
FUNC_1(struct cfq_data *VAR_0, int VAR_1, int VAR_2)
{
 switch (VAR_1) {
 case 128:
  return &VAR_0->async_cfqq[0][VAR_2];
 case 130:
  return &VAR_0->async_cfqq[1][VAR_2];
 case 129:
  return &VAR_0->async_idle_cfqq;
 default:
  FUNC_0();
 }
}
