
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; char* buf; int jb; scalar_t__ pos; } ;
typedef TYPE_1__ SStringBuilder ;


 int FUNC_0 (int ,int) ;
 void* FUNC_1 (char*,size_t) ;

void FUNC_2(SStringBuilder* VAR_0, size_t VAR_1) {
  VAR_1 += VAR_0->pos;
  if (VAR_1 > VAR_0->size) {
    VAR_1 *= 2;
    void* VAR_2 = FUNC_1(VAR_0->buf, VAR_1);
    if (VAR_2 == ((void*)0)) {
      FUNC_0(VAR_0->jb, 1);
    }
    VAR_0->buf = (char*)VAR_2;
    VAR_0->size = VAR_1;
  }
}
