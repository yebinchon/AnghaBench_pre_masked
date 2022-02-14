
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* var; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
struct TYPE_6__ {int defined; int scope; } ;
typedef TYPE_2__* Symbol ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 int VAR_1 ;

void FUNC_1(Symbol VAR_2) {
 if (!VAR_2->defined) {
  FUNC_0(VAR_0)->u.var = VAR_2;
  VAR_2->defined = 1;
  VAR_2->scope = VAR_1;
 }
}
