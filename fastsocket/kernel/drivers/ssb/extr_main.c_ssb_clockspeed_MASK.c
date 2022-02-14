
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int capabilities; scalar_t__ dev; } ;
struct ssb_bus {int chip_id; TYPE_1__ chipco; int extif; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

u32 FUNC_5(struct ssb_bus *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;
 u32 VAR_5, VAR_6;

 if (VAR_2->chipco.capabilities & VAR_0)
  return FUNC_4(&VAR_2->chipco);

 if (FUNC_2(&VAR_2->extif))
  FUNC_3(&VAR_2->extif, &VAR_4,
        &VAR_5, &VAR_6);
 else if (VAR_2->chipco.dev)
  FUNC_1(&VAR_2->chipco, &VAR_4,
         &VAR_5, &VAR_6);
 else
  return 0;

 if (VAR_2->chip_id == 0x5365) {
  VAR_3 = 100000000;
 } else {
  VAR_3 = FUNC_0(VAR_4, VAR_5, VAR_6);
  if (VAR_4 == VAR_1)
   VAR_3 /= 2;
 }

 return VAR_3;
}
