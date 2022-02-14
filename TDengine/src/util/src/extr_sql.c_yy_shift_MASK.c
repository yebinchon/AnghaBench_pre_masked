
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int minor; scalar_t__ major; scalar_t__ stateno; } ;
typedef TYPE_1__ yyStackEntry ;
struct TYPE_8__ {scalar_t__ yyidx; scalar_t__ yyidxMax; scalar_t__ yystksz; TYPE_1__* yystack; } ;
typedef TYPE_2__ yyParser ;
typedef int YYMINORTYPE ;
typedef scalar_t__ YYCODETYPE ;
typedef scalar_t__ YYACTIONTYPE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_3(
  yyParser *VAR_1,
  int VAR_2,
  int VAR_3,
  YYMINORTYPE *VAR_4
){
  yyStackEntry *VAR_5;
  VAR_1->yyidx++;
  if( VAR_1->yyidx>=VAR_1->yystksz ){
    FUNC_0(VAR_1);
    if( VAR_1->yyidx>=VAR_1->yystksz ){
      FUNC_1(VAR_1, VAR_4);
      return;
    }
  }

  VAR_5 = &VAR_1->yystack[VAR_1->yyidx];
  VAR_5->stateno = (YYACTIONTYPE)VAR_2;
  VAR_5->major = (YYCODETYPE)VAR_3;
  VAR_5->minor = *VAR_4;
  FUNC_2(VAR_1, VAR_2);
}
