
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvc_struct {int irq_requested; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,char*,struct hvc_struct*) ;

int FUNC_1(struct hvc_struct *VAR_2, int VAR_3)
{
 int VAR_4;

 if (!VAR_3) {
  VAR_2->irq_requested = 0;
  return 0;
 }
 VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_0,
      "hvc_console", VAR_2);
 if (!VAR_4)
  VAR_2->irq_requested = 1;
 return VAR_4;
}
