
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct agp_memory {int dummy; } ;
struct TYPE_2__ {scalar_t__ capndx; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int*) ;
 int FUNC_1 (int ,scalar_t__,int) ;

void FUNC_2(struct agp_memory *VAR_3)
{
 u32 VAR_4;
 FUNC_0(VAR_2->dev, VAR_2->capndx+VAR_0, &VAR_4);
 FUNC_1(VAR_2->dev, VAR_2->capndx+VAR_0, VAR_4 & ~VAR_1);
 FUNC_1(VAR_2->dev, VAR_2->capndx+VAR_0, VAR_4);
}
