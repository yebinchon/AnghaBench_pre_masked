
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int sqlite3 ;
struct TYPE_7__ {scalar_t__ op; int pRight; } ;
struct TYPE_6__ {int * db; } ;
typedef TYPE_1__ Parse ;
typedef TYPE_2__ Expr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(Parse *VAR_1, Expr *VAR_2, Expr *VAR_3, int VAR_4){
    sqlite3 *VAR_5 = VAR_1->db;
    if( VAR_3 && VAR_2 && VAR_2->op==VAR_0 ){
      VAR_3->op = (u8)VAR_4;
      FUNC_0(VAR_5, VAR_3->pRight);
      VAR_3->pRight = 0;
    }
  }
