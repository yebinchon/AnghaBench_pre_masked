
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_11__ {int n; int z; } ;
typedef TYPE_2__ Token ;
struct TYPE_10__ {char* zToken; } ;
struct TYPE_13__ {int iAgg; int nHeight; TYPE_1__ u; int flags; scalar_t__ op; } ;
struct TYPE_12__ {int db; } ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 TYPE_4__* FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char) ;

__attribute__((used)) static Expr *FUNC_5(Parse *VAR_2, int VAR_3, Token VAR_4){
    Expr *VAR_5 = FUNC_2(VAR_2->db, sizeof(Expr)+VAR_4.n+1);
    if( VAR_5 ){
      FUNC_1(VAR_5, 0, sizeof(Expr));
      VAR_5->op = (u8)VAR_3;
      VAR_5->flags = VAR_1;
      VAR_5->iAgg = -1;
      VAR_5->u.zToken = (char*)&VAR_5[1];
      FUNC_0(VAR_5->u.zToken, VAR_4.z, VAR_4.n);
      VAR_5->u.zToken[VAR_4.n] = 0;
      if( FUNC_4(VAR_5->u.zToken[0]) ){
        if( VAR_5->u.zToken[0]=='"' ) VAR_5->flags |= VAR_0;
        FUNC_3(VAR_5->u.zToken);
      }



    }
    return VAR_5;
  }
