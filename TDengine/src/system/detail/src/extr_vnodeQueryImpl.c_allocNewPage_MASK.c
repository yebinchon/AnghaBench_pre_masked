
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int tFilePage ;
struct TYPE_5__ {int lastPageId; int numOfPages; scalar_t__ numOfMeters; } ;
typedef TYPE_1__ SMeterQuerySupportObj ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int * FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static tFilePage *FUNC_2(SMeterQuerySupportObj *VAR_0, uint32_t *VAR_1) {
  if (VAR_0->lastPageId == VAR_0->numOfPages - 1) {
    FUNC_0(VAR_0, VAR_0->numOfPages + VAR_0->numOfMeters);
  }

  *VAR_1 = (++VAR_0->lastPageId);
  return FUNC_1(VAR_0, *VAR_1);
}
