
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* next; scalar_t__ cse; } ;
struct TYPE_11__ {TYPE_2__ t; } ;
struct TYPE_9__ {scalar_t__ offset; } ;
struct TYPE_12__ {TYPE_3__ u; scalar_t__ temporary; TYPE_1__ x; } ;
typedef TYPE_4__* Symbol ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 TYPE_4__* VAR_0 ;

__attribute__((used)) static void FUNC_5(Symbol VAR_1) {
 FUNC_0(VAR_1->x.offset == 0);
 FUNC_2(FUNC_3(FUNC_4(VAR_1), FUNC_1(VAR_1)));
 if (VAR_1->temporary && VAR_1->u.t.cse) {
  VAR_1->u.t.next = VAR_0;
  VAR_0 = VAR_1;
 }
}
