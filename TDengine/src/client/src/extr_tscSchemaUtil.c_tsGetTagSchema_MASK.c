
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct SSchema {int dummy; } ;
struct TYPE_4__ {scalar_t__ numOfTags; int numOfColumns; } ;
typedef TYPE_1__ SMeterMeta ;


 struct SSchema* FUNC_0 (TYPE_1__*,int ) ;

struct SSchema* FUNC_1(SMeterMeta* VAR_0) {
  if (VAR_0 == ((void*)0) || VAR_0->numOfTags == 0) {
    return ((void*)0);
  }

  return FUNC_0(VAR_0, VAR_0->numOfColumns);
}
