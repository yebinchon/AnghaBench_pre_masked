
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int token; } ;
struct TYPE_5__ {TYPE_1__ t; } ;
typedef TYPE_2__ LexState ;
__attribute__((used)) static int FUNC_0 (LexState *VAR_0, int VAR_1) {
  switch (VAR_0->t.token) {
    case 132: case 131:
    case 130: case 129:
      return 1;
    case 128: return VAR_1;
    default: return 0;
  }
}
