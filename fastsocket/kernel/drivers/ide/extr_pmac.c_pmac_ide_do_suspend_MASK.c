
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int aapl_bus_id; int node; scalar_t__ kauai_fcr; scalar_t__ mediabay; int irq; scalar_t__* timings; } ;
typedef TYPE_1__ pmac_ide_hwif_t ;
struct TYPE_5__ {int (* feature_call ) (int ,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(pmac_ide_hwif_t *VAR_4)
{

 VAR_4->timings[0] = 0;
 VAR_4->timings[1] = 0;

 FUNC_0(VAR_4->irq);


 if (VAR_4->mediabay)
  return 0;


 if (VAR_4->kauai_fcr) {
  u32 VAR_5 = FUNC_1(VAR_4->kauai_fcr);
  VAR_5 &= ~(VAR_1 | VAR_0);
  FUNC_3(VAR_5, VAR_4->kauai_fcr);
 }


 VAR_3.feature_call(VAR_2, VAR_4->node, VAR_4->aapl_bus_id,
       0);

 return 0;
}
