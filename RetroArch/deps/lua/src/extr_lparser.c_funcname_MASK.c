
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int expdesc ;
struct TYPE_6__ {char token; } ;
struct TYPE_7__ {TYPE_1__ t; } ;
typedef TYPE_2__ LexState ;


 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_2 (LexState *VAR_0, expdesc *VAR_1) {

  int VAR_2 = 0;
  FUNC_1(VAR_0, VAR_1);
  while (VAR_0->t.token == '.')
    FUNC_0(VAR_0, VAR_1);
  if (VAR_0->t.token == ':') {
    VAR_2 = 1;
    FUNC_0(VAR_0, VAR_1);
  }
  return VAR_2;
}
