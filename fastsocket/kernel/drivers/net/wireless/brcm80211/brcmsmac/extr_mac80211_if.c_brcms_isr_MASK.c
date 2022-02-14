
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_info {int isr_lock; int tasklet; int wlc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct brcms_info *VAR_4;
 irqreturn_t VAR_5 = VAR_1;

 VAR_4 = (struct brcms_info *) VAR_3;

 FUNC_1(&VAR_4->isr_lock);


 if (FUNC_0(VAR_4->wlc)) {

  FUNC_3(&VAR_4->tasklet);
  VAR_5 = VAR_0;
 }

 FUNC_2(&VAR_4->isr_lock);

 return VAR_5;
}
