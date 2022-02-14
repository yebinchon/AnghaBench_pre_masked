
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pos; scalar_t__ buf; } ;
typedef TYPE_1__ SStringBuilder ;


 int FUNC_0 (scalar_t__,void const*,size_t) ;
 int FUNC_1 (TYPE_1__*,size_t) ;

void FUNC_2(SStringBuilder* VAR_0, const void* VAR_1, size_t VAR_2) {
  FUNC_1(VAR_0, VAR_2);
  FUNC_0(VAR_0->buf + VAR_0->pos, VAR_1, VAR_2);
  VAR_0->pos += VAR_2;
}
