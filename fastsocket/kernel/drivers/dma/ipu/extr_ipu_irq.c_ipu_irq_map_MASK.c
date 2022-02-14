
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipu_irq_map {int irq; } ;
struct TYPE_2__ {unsigned int source; int irq; scalar_t__ bank; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,unsigned int,int) ;
 int FUNC_4 (char*,unsigned int,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct ipu_irq_map* FUNC_7 (unsigned int) ;

int FUNC_8(unsigned int VAR_7)
{
 int VAR_8, VAR_9 = -VAR_2;
 struct ipu_irq_map *VAR_10;

 FUNC_0();

 FUNC_1(&VAR_6);
 VAR_10 = FUNC_7(VAR_7);
 if (VAR_10) {
  FUNC_4("IPU: Source %u already mapped to IRQ %u\n", VAR_7, VAR_10->irq);
  VAR_9 = -VAR_1;
  goto out;
 }

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (VAR_5[VAR_8].source < 0) {
   unsigned long VAR_11;

   FUNC_5(&VAR_3, VAR_11);
   VAR_5[VAR_8].source = VAR_7;
   VAR_5[VAR_8].bank = VAR_4 + VAR_7 / 32;
   FUNC_6(&VAR_3, VAR_11);

   VAR_9 = VAR_5[VAR_8].irq;
   FUNC_3("IPU: mapped source %u to IRQ %u\n",
     VAR_7, VAR_9);
   break;
  }
 }
out:
 FUNC_2(&VAR_6);

 if (VAR_9 < 0)
  FUNC_4("IPU: couldn't map source %u: %d\n", VAR_7, VAR_9);

 return VAR_9;
}
