
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t int32_t ;
typedef size_t int16_t ;
struct TYPE_11__ {TYPE_3__* pMeterMeta; } ;
struct TYPE_10__ {size_t numOfColumns; size_t numOfTags; } ;
struct TYPE_9__ {scalar_t__ n; int z; } ;
struct TYPE_8__ {int name; } ;
typedef int SSqlCmd ;
typedef TYPE_1__ SSchema ;
typedef TYPE_2__ SSQLToken ;
typedef TYPE_3__ SMeterMeta ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 TYPE_1__* FUNC_2 (TYPE_3__*) ;
 TYPE_4__* FUNC_3 (int *,size_t) ;

__attribute__((used)) static int16_t FUNC_4(SSqlCmd* VAR_1, int32_t VAR_2, SSQLToken* VAR_3) {
  SMeterMeta* VAR_4 = FUNC_3(VAR_1, VAR_2)->pMeterMeta;

  int32_t VAR_5 = VAR_4->numOfColumns + VAR_4->numOfTags;
  SSchema* VAR_6 = FUNC_2(VAR_4);

  int16_t VAR_7 = VAR_0;

  for (int16_t VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8) {
    if (VAR_3->n != FUNC_0(VAR_6[VAR_8].name)) {
      continue;
    }

    if (FUNC_1(VAR_6[VAR_8].name, VAR_3->z, VAR_3->n) == 0) {
      VAR_7 = VAR_8;
    }
  }

  return VAR_7;
}
