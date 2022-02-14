
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct MPT2SAS_ADAPTER {TYPE_1__* chip; } ;
struct TYPE_2__ {int Doorbell; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

u32
FUNC_1(struct MPT2SAS_ADAPTER *VAR_1, int VAR_2)
{
 u32 VAR_3, VAR_4;

 VAR_3 = FUNC_0(&VAR_1->chip->Doorbell);
 VAR_4 = VAR_3 & VAR_0;
 return VAR_2 ? VAR_4 : VAR_3;
}
