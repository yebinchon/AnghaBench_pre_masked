
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int quality; } ;
struct TYPE_4__ {scalar_t__ mchip_mmregs; TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int*) ;
 int * FUNC_1 (int*,int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_2;
 int VAR_3;
 u16 *VAR_4;

 VAR_4 = FUNC_0(&VAR_3);
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  FUNC_2(VAR_4[VAR_2], VAR_1.mchip_mmregs + VAR_0);

 VAR_4 = FUNC_1(&VAR_3, VAR_1.params.quality);
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  FUNC_2(VAR_4[VAR_2], VAR_1.mchip_mmregs + VAR_0);
}
