
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_7__ {scalar_t__ value; int key; } ;
struct TYPE_6__ {size_t sizeMask; TYPE_2__* data; } ;
typedef TYPE_1__ COVER_map_t ;
typedef TYPE_2__ COVER_map_pair_t ;


 size_t FUNC_0 (TYPE_1__*,int ) ;
 size_t FUNC_1 (TYPE_1__*,size_t) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_2(COVER_map_t *VAR_1, U32 VAR_2) {
  U32 VAR_3 = FUNC_1(VAR_1, VAR_2);
  COVER_map_pair_t *VAR_4 = &VAR_1->data[VAR_3];
  U32 VAR_5 = 1;
  if (VAR_4->value == VAR_0) {
    return;
  }
  for (VAR_3 = (VAR_3 + 1) & VAR_1->sizeMask;; VAR_3 = (VAR_3 + 1) & VAR_1->sizeMask) {
    COVER_map_pair_t *const VAR_6 = &VAR_1->data[VAR_3];

    if (VAR_6->value == VAR_0) {
      VAR_4->value = VAR_0;
      return;
    }

    if (((VAR_3 - FUNC_0(VAR_1, VAR_6->key)) & VAR_1->sizeMask) >= VAR_5) {
      VAR_4->key = VAR_6->key;
      VAR_4->value = VAR_6->value;
      VAR_4 = VAR_6;
      VAR_5 = 1;
    } else {
      ++VAR_5;
    }
  }
}
