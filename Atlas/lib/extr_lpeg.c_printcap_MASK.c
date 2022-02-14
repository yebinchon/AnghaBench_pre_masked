
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int idx; int siz; int s; int kind; } ;
typedef TYPE_1__ Capture ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int,int ) ;

__attribute__((used)) static void FUNC_2 (Capture *VAR_0) {
  FUNC_0(VAR_0->kind);
  FUNC_1(" (idx: %d - size: %d) -> %p\n", VAR_0->idx, VAR_0->siz, VAR_0->s);
}
