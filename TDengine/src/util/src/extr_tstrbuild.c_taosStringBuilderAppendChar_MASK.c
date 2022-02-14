
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* buf; int pos; } ;
typedef TYPE_1__ SStringBuilder ;


 int FUNC_0 (TYPE_1__*,int) ;

void FUNC_1(SStringBuilder* VAR_0, char VAR_1) {
  FUNC_0(VAR_0, 1);
  VAR_0->buf[VAR_0->pos++] = VAR_1;
}
