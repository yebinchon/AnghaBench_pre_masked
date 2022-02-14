
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int iCur; } ;
struct TYPE_9__ {int eCode; TYPE_1__ u; } ;
typedef TYPE_2__ Walker ;
struct TYPE_10__ {int op; int iTable; } ;
typedef TYPE_3__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;



 int const VAR_2 ;



 int const VAR_3 ;
 int const VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(Walker *VAR_8, Expr *VAR_9){




  if( VAR_8->eCode==2 && FUNC_0(VAR_9, VAR_1) ){
    VAR_8->eCode = 0;
    return VAR_5;
  }

  switch( VAR_9->op ){



    case 131:
      if( VAR_8->eCode>=4 || FUNC_0(VAR_9,VAR_0) ){
        return VAR_6;
      }else{
        VAR_8->eCode = 0;
        return VAR_5;
      }
    case 130:


      if( FUNC_1(VAR_9) ){
        return VAR_7;
      }

    case 132:
    case 133:
    case 134:
      FUNC_2( VAR_9->op==130 );
      FUNC_2( VAR_9->op==132 );
      FUNC_2( VAR_9->op==133 );
      FUNC_2( VAR_9->op==134 );
      if( VAR_8->eCode==3 && VAR_9->iTable==VAR_8->u.iCur ){
        return VAR_6;
      }

    case 129:
      FUNC_2( VAR_9->op==129 );
      VAR_8->eCode = 0;
      return VAR_5;
    case 128:
      if( VAR_8->eCode==5 ){



        VAR_9->op = VAR_3;
      }else if( VAR_8->eCode==4 ){


        VAR_8->eCode = 0;
        return VAR_5;
      }

    default:
      FUNC_2( VAR_9->op==VAR_4 );
      FUNC_2( VAR_9->op==VAR_2 );
      return VAR_6;
  }
}
