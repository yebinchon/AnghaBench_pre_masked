
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int i; } ;
struct TYPE_8__ {TYPE_1__ u; } ;
typedef TYPE_2__ Walker ;
struct TYPE_9__ {int op; } ;
typedef TYPE_3__ Expr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;



 int const VAR_1 ;


 int const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(Walker *VAR_5, Expr *VAR_6){




  if( VAR_5->u.i==3 && FUNC_0(VAR_6, VAR_0) ){
    VAR_5->u.i = 0;
    return VAR_3;
  }

  switch( VAR_6->op ){


    case 129:
      if( VAR_5->u.i==2 ) return 0;

    case 128:
    case 130:
    case 131:
    case 132:
      FUNC_1( VAR_6->op==128 );
      FUNC_1( VAR_6->op==130 );
      FUNC_1( VAR_6->op==131 );
      FUNC_1( VAR_6->op==132 );
      VAR_5->u.i = 0;
      return VAR_3;
    default:
      FUNC_1( VAR_6->op==VAR_2 );
      FUNC_1( VAR_6->op==VAR_1 );
      return VAR_4;
  }
}
