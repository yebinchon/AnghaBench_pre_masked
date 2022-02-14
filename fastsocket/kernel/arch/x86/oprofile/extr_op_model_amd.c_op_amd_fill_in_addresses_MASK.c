
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct op_msrs {TYPE_2__* counters; TYPE_1__* controls; } ;
struct TYPE_6__ {int enabled; } ;
struct TYPE_5__ {scalar_t__ addr; } ;
struct TYPE_4__ {scalar_t__ addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct op_msrs* const) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct op_msrs * const VAR_8)
{
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  if (!FUNC_4(VAR_4 + VAR_9))
   goto fail;
  if (!FUNC_3(VAR_3 + VAR_9)) {
   FUNC_2(VAR_4 + VAR_9);
   goto fail;
  }

  if (VAR_7 == VAR_5) {
   VAR_8->counters[VAR_9].addr = VAR_2 + (VAR_9 << 1);
   VAR_8->controls[VAR_9].addr = VAR_1 + (VAR_9 << 1);
  } else {
   VAR_8->controls[VAR_9].addr = VAR_3 + VAR_9;
   VAR_8->counters[VAR_9].addr = VAR_4 + VAR_9;
  }
  continue;
 fail:
  if (!VAR_6[VAR_9].enabled)
   continue;
  FUNC_1(VAR_9);
  FUNC_0(VAR_8);
  return -VAR_0;
 }

 return 0;
}
