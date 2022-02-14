
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t major; int minor; scalar_t__ stateno; } ;
typedef TYPE_1__ yyStackEntry ;
struct TYPE_7__ {scalar_t__ yyidx; scalar_t__ yyidxMax; scalar_t__ yystksz; TYPE_1__* yystack; } ;
typedef TYPE_2__ yyParser ;
typedef int YYMINORTYPE ;
typedef size_t YYCODETYPE ;
typedef scalar_t__ YYACTIONTYPE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,char*,...) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 char** VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;

__attribute__((used)) static void FUNC_3(
  yyParser *VAR_4,
  int VAR_5,
  int VAR_6,
  YYMINORTYPE *VAR_7
){
  yyStackEntry *VAR_8;
  VAR_4->yyidx++;
  if( VAR_4->yyidx>=VAR_4->yystksz ){
    FUNC_1(VAR_4);
    if( VAR_4->yyidx>=VAR_4->yystksz ){
      FUNC_2(VAR_4, VAR_7);
      return;
    }
  }

  VAR_8 = &VAR_4->yystack[VAR_4->yyidx];
  VAR_8->stateno = (YYACTIONTYPE)VAR_5;
  VAR_8->major = (YYCODETYPE)VAR_6;
  VAR_8->minor = *VAR_7;

  if( VAR_2 && VAR_4->yyidx>0 ){
    int VAR_9;
    FUNC_0(VAR_2,"%sShift %d\n",VAR_3,VAR_5);
    FUNC_0(VAR_2,"%sStack:",VAR_3);
    for(VAR_9=1; VAR_9<=VAR_4->yyidx; VAR_9++)
      FUNC_0(VAR_2," %s",VAR_1[VAR_4->yystack[VAR_9].major]);
    FUNC_0(VAR_2,"\n");
  }

}
