
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* lst; char* buf; } ;
typedef TYPE_1__ JsonBuf ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int FUNC_0 (TYPE_1__*,char) ;

void FUNC_1(JsonBuf* VAR_4) {
  char VAR_5 = *(VAR_4->lst - 1);
  if (VAR_5 == VAR_0 || VAR_5 == VAR_2 || VAR_5 == VAR_3 || VAR_5 == VAR_1) {
    return;
  }
  if (VAR_4->lst > VAR_4->buf) FUNC_0(VAR_4, VAR_1);
}
