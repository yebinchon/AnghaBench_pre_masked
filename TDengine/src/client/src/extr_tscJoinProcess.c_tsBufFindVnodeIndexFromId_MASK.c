
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_4__ {size_t vnode; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
typedef TYPE_2__ STSVnodeBlockInfoEx ;



__attribute__((used)) static int32_t FUNC_0(STSVnodeBlockInfoEx* VAR_0, int32_t VAR_1, int32_t VAR_2) {
  int32_t VAR_3 = -1;
  for (int32_t VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
    if (VAR_0[VAR_4].info.vnode == VAR_2) {
      VAR_3 = VAR_4;
      break;
    }
  }

  return VAR_3;
}
