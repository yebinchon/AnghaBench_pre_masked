
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bitmap; } ;
struct mpic {TYPE_1__ msi_bitmap; } ;
typedef int irq_hw_number_t ;


 int FUNC_0 (TYPE_1__*,int ) ;

void FUNC_1(struct mpic *VAR_0, irq_hw_number_t VAR_1)
{

 if (!VAR_0->msi_bitmap.bitmap)
  return;

 FUNC_0(&VAR_0->msi_bitmap, VAR_1);
}
