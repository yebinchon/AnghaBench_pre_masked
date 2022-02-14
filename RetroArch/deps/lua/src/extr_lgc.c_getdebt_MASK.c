
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int l_mem ;
struct TYPE_3__ {int GCdebt; int gcstepmul; } ;
typedef TYPE_1__ global_State ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static l_mem FUNC_0 (global_State *VAR_2) {
  l_mem VAR_3 = VAR_2->GCdebt;
  int VAR_4 = VAR_2->gcstepmul;
  if (VAR_3 <= 0) return 0;
  else {
    VAR_3 = (VAR_3 / VAR_1) + 1;
    VAR_3 = (VAR_3 < VAR_0 / VAR_4) ? VAR_3 * VAR_4 : VAR_0;
    return VAR_3;
  }
}
