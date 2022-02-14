
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_ha_struct {struct pm8001_hba_info* lldd_ha; } ;
struct pm8001_hba_info {int tasklet; scalar_t__ int_vector; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* isr ) (struct pm8001_hba_info*,int ) ;int (* is_our_interupt ) (struct pm8001_hba_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct pm8001_hba_info*) ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct pm8001_hba_info *VAR_5;
 irqreturn_t VAR_6 = VAR_0;
 struct sas_ha_struct *VAR_7 = VAR_4;
 VAR_5 = VAR_7->lldd_ha;
 if (FUNC_3(!VAR_5))
  return VAR_1;
 if (!VAR_2->is_our_interupt(VAR_5))
  return VAR_1;

 VAR_5->int_vector = 0;



 VAR_6 = VAR_2->isr(VAR_5, 0);

 return VAR_6;
}
