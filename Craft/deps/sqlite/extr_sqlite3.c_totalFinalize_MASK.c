
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_context ;
struct TYPE_3__ {double rSum; } ;
typedef TYPE_1__ SumCtx ;


 TYPE_1__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,double) ;

__attribute__((used)) static void FUNC_2(sqlite3_context *VAR_0){
  SumCtx *VAR_1;
  VAR_1 = FUNC_0(VAR_0, 0);

  FUNC_1(VAR_0, VAR_1 ? VAR_1->rSum : (double)0);
}
