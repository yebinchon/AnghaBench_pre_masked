
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* aiCol; } ;
struct TYPE_7__ {int eCode; TYPE_1__ u; } ;
typedef TYPE_2__ Walker ;
struct TYPE_8__ {scalar_t__ op; int iColumn; } ;
typedef TYPE_3__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(Walker *VAR_4, Expr *VAR_5){
  if( VAR_5->op==VAR_2 ){
    FUNC_0( VAR_5->iColumn>=0 || VAR_5->iColumn==-1 );
    if( VAR_5->iColumn>=0 ){
      if( VAR_4->u.aiCol[VAR_5->iColumn]>=0 ){
        VAR_4->eCode |= VAR_0;
      }
    }else{
      VAR_4->eCode |= VAR_1;
    }
  }
  return VAR_3;
}
