
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * pMetricMeta; } ;
struct TYPE_8__ {int type; scalar_t__ command; } ;
typedef TYPE_1__ SSqlCmd ;
typedef TYPE_2__ SMeterMetaInfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

bool FUNC_4(SSqlCmd* VAR_2) {
  FUNC_1(VAR_2 != ((void*)0));

  SMeterMetaInfo* VAR_3 = FUNC_2(VAR_2, 0);
  if (VAR_3 == ((void*)0) || VAR_3->pMetricMeta == ((void*)0)) {
    return 0;
  }


  if (FUNC_3(VAR_2)) {
    return 0;
  }

  if (((VAR_2->type & VAR_0) != VAR_0) &&
      VAR_2->command == VAR_1) {
    return FUNC_0(VAR_3);
  }

  return 0;
}
