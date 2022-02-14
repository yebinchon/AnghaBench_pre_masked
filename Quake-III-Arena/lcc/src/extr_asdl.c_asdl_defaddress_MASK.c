
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int label; } ;
struct TYPE_7__ {TYPE_1__ l; } ;
struct TYPE_8__ {scalar_t__ scope; TYPE_2__ u; } ;
typedef TYPE_3__* Symbol ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(Symbol VAR_1) {
 if (VAR_1->scope == VAR_0)
  FUNC_0(FUNC_2(VAR_1->u.l.label));
 else
  FUNC_0(FUNC_1(FUNC_3(VAR_1)));
}
