
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* buf; size_t pos; } ;
typedef TYPE_1__ SStringBuilder ;


 int FUNC_0 (TYPE_1__*,int) ;

char* FUNC_1(SStringBuilder* VAR_0, size_t* VAR_1) {
  FUNC_0(VAR_0, 1);
  VAR_0->buf[VAR_0->pos] = 0;
  if (VAR_1 != ((void*)0)) {
    *VAR_1 = VAR_0->pos;
  }
  return VAR_0->buf;
}
