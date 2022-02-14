
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef enum VFE_DMI_RAM_SEL { ____Placeholder_VFE_DMI_RAM_SEL } VFE_DMI_RAM_SEL ;
struct TYPE_2__ {scalar_t__ vfebase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(enum VFE_DMI_RAM_SEL VAR_4)
{

 uint32_t VAR_5 = (uint32_t) VAR_3->vfebase + VAR_2;

 VAR_5 += (uint32_t)VAR_4;


 FUNC_0(VAR_5, VAR_3->vfebase + VAR_1);
 FUNC_0(0, VAR_3->vfebase + VAR_0);
}
