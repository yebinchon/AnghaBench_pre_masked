
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int w ;
struct TYPE_4__ {int eCode; int xSelectCallback; int xExprCallback; } ;
typedef TYPE_1__ Walker ;
typedef int Expr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_2(Expr *VAR_2){
  Walker VAR_3;
  FUNC_0(&VAR_3, 0, sizeof(VAR_3));
  VAR_3.eCode = 1;
  VAR_3.xExprCallback = VAR_0;
  VAR_3.xSelectCallback = VAR_1;
  FUNC_1(&VAR_3, VAR_2);
  return VAR_3.eCode;
}
