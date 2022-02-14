
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t major; int minor; } ;
typedef TYPE_1__ yyStackEntry ;
struct TYPE_6__ {size_t yyidx; TYPE_1__* yystack; } ;
typedef TYPE_2__ yyParser ;
typedef int YYCODETYPE ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,char*,char*,char*) ;
 char** VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 int FUNC_2 (TYPE_2__*,int,int *) ;

__attribute__((used)) static int FUNC_3(yyParser *VAR_3){
  YYCODETYPE VAR_4;
  yyStackEntry *VAR_5 = &VAR_3->yystack[VAR_3->yyidx];



  if( FUNC_0(VAR_3->yyidx<0) ) return 0;

  if( VAR_1 && VAR_3->yyidx>=0 ){
    FUNC_1(VAR_1,"%sPopping %s\n",
      VAR_2,
      VAR_0[VAR_5->major]);
  }

  VAR_4 = VAR_5->major;
  FUNC_2(VAR_3, VAR_4, &VAR_5->minor);
  VAR_3->yyidx--;
  return VAR_4;
}
