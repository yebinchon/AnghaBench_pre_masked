
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu {scalar_t__* irqs; int number; int irq_c2; int irq_c1; int irq_c0; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,struct spu*) ;
 int FUNC_1 (scalar_t__,int ,int ,int ,struct spu*) ;
 int FUNC_2 (int ,int,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct spu *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_5->irqs[0] != VAR_1) {
  FUNC_2(VAR_5->irq_c0, sizeof (VAR_5->irq_c0), "spe%02d.0",
    VAR_5->number);
  VAR_6 = FUNC_1(VAR_5->irqs[0], VAR_2,
      VAR_0,
      VAR_5->irq_c0, VAR_5);
  if (VAR_6)
   goto bail0;
 }
 if (VAR_5->irqs[1] != VAR_1) {
  FUNC_2(VAR_5->irq_c1, sizeof (VAR_5->irq_c1), "spe%02d.1",
    VAR_5->number);
  VAR_6 = FUNC_1(VAR_5->irqs[1], VAR_3,
      VAR_0,
      VAR_5->irq_c1, VAR_5);
  if (VAR_6)
   goto bail1;
 }
 if (VAR_5->irqs[2] != VAR_1) {
  FUNC_2(VAR_5->irq_c2, sizeof (VAR_5->irq_c2), "spe%02d.2",
    VAR_5->number);
  VAR_6 = FUNC_1(VAR_5->irqs[2], VAR_4,
      VAR_0,
      VAR_5->irq_c2, VAR_5);
  if (VAR_6)
   goto bail2;
 }
 return 0;

bail2:
 if (VAR_5->irqs[1] != VAR_1)
  FUNC_0(VAR_5->irqs[1], VAR_5);
bail1:
 if (VAR_5->irqs[0] != VAR_1)
  FUNC_0(VAR_5->irqs[0], VAR_5);
bail0:
 return VAR_6;
}
