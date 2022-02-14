
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {float cost; int shortcut; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
typedef TYPE_2__ ZopfliNode ;
typedef int ZopfliCostModel ;
struct TYPE_10__ {size_t pos; float cost; float costdiff; int distance_cache; } ;
typedef int StartPosQueue ;
typedef TYPE_3__ PosData ;


 int FUNC_0 (size_t const,int const*,TYPE_2__*,int ) ;
 int FUNC_1 (size_t const,size_t const,size_t const,size_t const,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 float FUNC_3 (int const*,int ,size_t const) ;

__attribute__((used)) static void FUNC_4(
    const size_t VAR_0, const size_t VAR_1, const size_t VAR_2,
    const size_t VAR_3, const int* VAR_4,
    const ZopfliCostModel* VAR_5, StartPosQueue* VAR_6, ZopfliNode* VAR_7) {

  float VAR_8 = VAR_7[VAR_1].u.cost;
  VAR_7[VAR_1].u.shortcut = FUNC_1(
      VAR_0, VAR_1, VAR_2, VAR_3, VAR_7);
  if (VAR_8 <= FUNC_3(VAR_5, 0, VAR_1)) {
    PosData VAR_9;
    VAR_9.pos = VAR_1;
    VAR_9.cost = VAR_8;
    VAR_9.costdiff = VAR_8 -
        FUNC_3(VAR_5, 0, VAR_1);
    FUNC_0(
        VAR_1, VAR_4, VAR_7, VAR_9.distance_cache);
    FUNC_2(VAR_6, &VAR_9);
  }
}
