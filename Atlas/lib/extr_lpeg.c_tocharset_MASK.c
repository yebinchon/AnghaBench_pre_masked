
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef enum charsetanswer { ____Placeholder_charsetanswer } charsetanswer ;
struct TYPE_12__ {int tag; int cs; } ;
struct TYPE_10__ {scalar_t__ code; } ;
struct TYPE_11__ {TYPE_1__ i; } ;
typedef TYPE_2__ Instruction ;
typedef TYPE_3__ CharsetTag ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static enum charsetanswer FUNC_4 (Instruction *VAR_4, CharsetTag *VAR_5) {
  if (FUNC_1(VAR_4)) {
    FUNC_0(VAR_4, VAR_5->cs);
    if ((VAR_4 + FUNC_3(VAR_4))->i.code == VAR_0 && FUNC_2(VAR_4) == 1)
      VAR_5->tag = VAR_1;
    else
      VAR_5->tag = VAR_3;
  }
  else
    VAR_5->tag = VAR_2;
  return VAR_5->tag;
}
