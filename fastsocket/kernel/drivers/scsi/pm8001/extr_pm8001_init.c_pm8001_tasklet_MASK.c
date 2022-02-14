
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pm8001_hba_info {int int_vector; } ;
struct TYPE_2__ {int (* isr ) (struct pm8001_hba_info*,int ) ;} ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_1)
{
 struct pm8001_hba_info *VAR_2;
 u32 VAR_3;
 VAR_2 = (struct pm8001_hba_info *)VAR_1;
 if (FUNC_2(!VAR_2))
  FUNC_0(1);
 VAR_3 = VAR_2->int_vector;
 VAR_0->isr(VAR_2, VAR_3);
}
