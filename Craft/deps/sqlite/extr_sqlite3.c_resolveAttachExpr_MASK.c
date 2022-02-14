
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int zToken; } ;
struct TYPE_11__ {scalar_t__ op; TYPE_1__ u; } ;
struct TYPE_10__ {int pParse; } ;
typedef TYPE_2__ NameContext ;
typedef TYPE_3__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(NameContext *VAR_4, Expr *VAR_5)
{
  int VAR_6 = VAR_1;
  if( VAR_5 ){
    if( VAR_5->op!=VAR_2 ){
      VAR_6 = FUNC_2(VAR_4, VAR_5);
      if( VAR_6==VAR_1 && !FUNC_1(VAR_5) ){
        FUNC_0(VAR_4->pParse, "invalid name: \"%s\"", VAR_5->u.zToken);
        return VAR_0;
      }
    }else{
      VAR_5->op = VAR_3;
    }
  }
  return VAR_6;
}
