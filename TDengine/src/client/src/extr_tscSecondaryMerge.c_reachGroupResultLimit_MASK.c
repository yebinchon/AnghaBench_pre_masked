
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ limit; } ;
struct TYPE_8__ {TYPE_1__ slimit; } ;
struct TYPE_7__ {scalar_t__ numOfGroups; } ;
typedef TYPE_2__ SSqlRes ;
typedef TYPE_3__ SSqlCmd ;



__attribute__((used)) static bool FUNC_0(SSqlCmd *VAR_0, SSqlRes *VAR_1) {
  return (VAR_1->numOfGroups >= VAR_0->slimit.limit && VAR_0->slimit.limit >= 0);
}
