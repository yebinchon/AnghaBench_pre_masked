
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* outputb ) (TYPE_1__*,int ,int ) ;} ;
struct smi_info {scalar_t__ si_type; scalar_t__ irq; int dev; int irq_cleanup; TYPE_1__ io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int,int ,struct smi_info*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct smi_info *VAR_9)
{
 int VAR_10;

 if (!VAR_9->irq)
  return 0;

 if (VAR_9->si_type == VAR_5) {
  VAR_10 = FUNC_2(VAR_9->irq,
     VAR_6,
     VAR_4 | VAR_3,
     VAR_0,
     VAR_9);
  if (!VAR_10)

   VAR_9->io.outputb(&VAR_9->io, VAR_2,
      VAR_1);
 } else
  VAR_10 = FUNC_2(VAR_9->irq,
     VAR_7,
     VAR_4 | VAR_3,
     VAR_0,
     VAR_9);
 if (VAR_10) {
  FUNC_1(VAR_9->dev, "%s unable to claim interrupt %d,"
    " running polled\n",
    VAR_0, VAR_9->irq);
  VAR_9->irq = 0;
 } else {
  VAR_9->irq_cleanup = VAR_8;
  FUNC_0(VAR_9->dev, "Using irq %d\n", VAR_9->irq);
 }

 return VAR_10;
}
