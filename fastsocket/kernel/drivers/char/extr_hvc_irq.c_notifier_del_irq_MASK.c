
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvc_struct {scalar_t__ irq_requested; } ;


 int FUNC_0 (int,struct hvc_struct*) ;

void FUNC_1(struct hvc_struct *VAR_0, int VAR_1)
{
 if (!VAR_0->irq_requested)
  return;
 FUNC_0(VAR_1, VAR_0);
 VAR_0->irq_requested = 0;
}
