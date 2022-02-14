
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx88_core {int lock; } ;
struct cx8800_fh {unsigned int resources; } ;
struct cx8800_dev {unsigned int resources; struct cx88_core* core; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static
void FUNC_4(struct cx8800_dev *VAR_0, struct cx8800_fh *VAR_1, unsigned int VAR_2)
{
 struct cx88_core *VAR_3 = VAR_0->core;
 FUNC_0((VAR_1->resources & VAR_2) != VAR_2);

 FUNC_2(&VAR_3->lock);
 VAR_1->resources &= ~VAR_2;
 VAR_0->resources &= ~VAR_2;
 FUNC_1(1,"res: put %d\n",VAR_2);
 FUNC_3(&VAR_3->lock);
}
