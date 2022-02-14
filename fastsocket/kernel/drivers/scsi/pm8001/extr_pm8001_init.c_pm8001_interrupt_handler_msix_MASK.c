
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pm8001_hba_info {int tasklet; int int_vector; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* isr ) (struct pm8001_hba_info*,int ) ;int (* is_our_interupt ) (struct pm8001_hba_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct pm8001_hba_info* FUNC_0 (void*) ;
 int FUNC_1 (struct pm8001_hba_info*) ;
 int FUNC_2 (struct pm8001_hba_info*,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct pm8001_hba_info *VAR_5 = FUNC_0(VAR_4);
 u8 VAR_6 = *(u8 *)VAR_4;
 irqreturn_t VAR_7 = VAR_0;
 if (FUNC_4(!VAR_5))
  return VAR_1;
 if (!VAR_2->is_our_interupt(VAR_5))
  return VAR_1;
 VAR_5->int_vector = VAR_6;



 VAR_7 = VAR_2->isr(VAR_5, VAR_6);

 return VAR_7;
}
