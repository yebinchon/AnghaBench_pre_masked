
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct brcms_hardware {int forcefastclk; TYPE_1__* band; } ;
struct TYPE_2__ {int pi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcms_hardware*,int ) ;
 int FUNC_1 (struct brcms_hardware*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(struct brcms_hardware *VAR_2, u16 VAR_3)
{
 bool VAR_4;


 VAR_4 = VAR_2->forcefastclk;
 if (!VAR_4)
  FUNC_0(VAR_2, VAR_1);

 FUNC_2(VAR_2->band->pi, VAR_3);

 FUNC_1(VAR_2);
 FUNC_4(VAR_2->band->pi, FUNC_3(VAR_2->band->pi));


 if (!VAR_4)
  FUNC_0(VAR_2, VAR_0);
}
