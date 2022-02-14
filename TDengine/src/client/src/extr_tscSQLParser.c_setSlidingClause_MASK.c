
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_15__ {TYPE_1__* pMeterMeta; } ;
struct TYPE_13__ {scalar_t__ n; int z; } ;
struct TYPE_14__ {TYPE_3__ sliding; } ;
struct TYPE_12__ {int nSlidingTime; int nAggTimeInterval; } ;
struct TYPE_11__ {scalar_t__ precision; } ;
typedef TYPE_2__ SSqlCmd ;
typedef TYPE_3__ SSQLToken ;
typedef TYPE_4__ SQuerySQL ;
typedef TYPE_5__ SMeterMetaInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int*) ;
 int FUNC_1 (TYPE_2__*,char const*) ;
 int VAR_3 ;
 TYPE_5__* FUNC_2 (TYPE_2__*,int ) ;

int32_t FUNC_3(SSqlCmd* VAR_4, SQuerySQL* VAR_5) {
  const char* VAR_6 = "sliding value too small";
  const char* VAR_7 = "sliding value no larger than the interval value";

  SMeterMetaInfo* VAR_8 = FUNC_2(VAR_4, 0);
  SSQLToken* VAR_9 = &VAR_5->sliding;

  if (VAR_9->n != 0) {
    FUNC_0(VAR_9->z, VAR_9->n, &VAR_4->nSlidingTime);
    if (VAR_8->pMeterMeta->precision == VAR_2) {
      VAR_4->nSlidingTime /= 1000;
    }

    if (VAR_4->nSlidingTime < VAR_3) {
      FUNC_1(VAR_4, VAR_6);
      return VAR_0;
    }

    if (VAR_4->nSlidingTime > VAR_4->nAggTimeInterval) {
      FUNC_1(VAR_4, VAR_7);
      return VAR_0;
    }
  }

  return VAR_1;
}
