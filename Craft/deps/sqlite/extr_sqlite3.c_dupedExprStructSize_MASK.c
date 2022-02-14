
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pList; } ;
struct TYPE_7__ {int flags2; TYPE_1__ x; scalar_t__ pRight; scalar_t__ pLeft; } ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(Expr *VAR_9, int VAR_10){
  int VAR_11;
  FUNC_2( VAR_10==VAR_5 || VAR_10==0 );
  if( 0==(VAR_10&VAR_5) ){
    VAR_11 = VAR_6;
  }else{
    FUNC_2( !FUNC_0(VAR_9, VAR_4|VAR_3) );
    FUNC_2( !FUNC_1(VAR_9, VAR_2) );
    FUNC_2( (VAR_9->flags2 & VAR_1)==0 );
    FUNC_2( (VAR_9->flags2 & VAR_0)==0 );
    if( VAR_9->pLeft || VAR_9->pRight || VAR_9->x.pList ){
      VAR_11 = VAR_7 | VAR_3;
    }else{
      VAR_11 = VAR_8 | VAR_4;
    }
  }
  return VAR_11;
}
