
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcbit_dev {struct pcbit_chan* b2; struct pcbit_chan* b1; } ;
struct pcbit_chan {scalar_t__ fsm_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pcbit_dev*,struct pcbit_chan*) ;

__attribute__((used)) static void
FUNC_1(struct pcbit_dev *VAR_1)
{
 struct pcbit_chan *VAR_2;

 VAR_2 = VAR_1->b1;

 if (VAR_2->fsm_state == VAR_0) {
  FUNC_0(VAR_1, VAR_2);
 }
 VAR_2 = VAR_1->b2;

 if (VAR_2->fsm_state == VAR_0) {
  FUNC_0(VAR_1, VAR_2);
 }
}
