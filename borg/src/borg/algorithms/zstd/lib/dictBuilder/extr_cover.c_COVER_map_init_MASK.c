
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_4__ {int sizeLog; int size; int sizeMask; int * data; } ;
typedef TYPE_1__ COVER_map_t ;
typedef int COVER_map_pair_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(COVER_map_t *VAR_0, U32 VAR_1) {
  VAR_0->sizeLog = FUNC_1(VAR_1) + 2;
  VAR_0->size = (U32)1 << VAR_0->sizeLog;
  VAR_0->sizeMask = VAR_0->size - 1;
  VAR_0->data = (COVER_map_pair_t *)FUNC_2(VAR_0->size * sizeof(COVER_map_pair_t));
  if (!VAR_0->data) {
    VAR_0->sizeLog = 0;
    VAR_0->size = 0;
    return 0;
  }
  FUNC_0(VAR_0);
  return 1;
}
