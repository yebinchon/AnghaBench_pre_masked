
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char current; int buff; } ;
typedef TYPE_1__ LexState ;


 int FUNC_0 (TYPE_1__*,int,char*) ;
 unsigned long FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char) ;
 unsigned long FUNC_3 (char) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static unsigned long FUNC_7 (LexState *VAR_0) {
  unsigned long VAR_1;
  int VAR_2 = 4;
  FUNC_6(VAR_0);
  FUNC_0(VAR_0, VAR_0->current == '{', "missing '{'");
  VAR_1 = FUNC_1(VAR_0);
  while ((FUNC_6(VAR_0), FUNC_2(VAR_0->current))) {
    VAR_2++;
    VAR_1 = (VAR_1 << 4) + FUNC_3(VAR_0->current);
    FUNC_0(VAR_0, VAR_1 <= 0x10FFFF, "UTF-8 value too large");
  }
  FUNC_0(VAR_0, VAR_0->current == '}', "missing '}'");
  FUNC_5(VAR_0);
  FUNC_4(VAR_0->buff, VAR_2);
  return VAR_1;
}
