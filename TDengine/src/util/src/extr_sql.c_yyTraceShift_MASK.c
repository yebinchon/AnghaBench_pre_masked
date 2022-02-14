
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t yyidx; TYPE_1__* yystack; } ;
typedef TYPE_2__ yyParser ;
struct TYPE_4__ {size_t major; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char*,char*,char*,...) ;
 char** VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;

__attribute__((used)) static void FUNC_1(yyParser *VAR_4, int VAR_5){
  if( VAR_2 ){
    if( VAR_5<VAR_0 ){
      FUNC_0(VAR_2,"%sShift '%s', go to state %d\n",
         VAR_3,VAR_1[VAR_4->yystack[VAR_4->yyidx].major],
         VAR_5);
    }else{
      FUNC_0(VAR_2,"%sShift '%s'\n",
         VAR_3,VAR_1[VAR_4->yystack[VAR_4->yyidx].major]);
    }
  }
}
