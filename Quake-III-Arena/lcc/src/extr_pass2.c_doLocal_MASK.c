
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* rcc_interface_ty ;
struct TYPE_9__ {scalar_t__ scope; } ;
struct TYPE_7__ {int uid; TYPE_4__* p; } ;
struct TYPE_6__ {TYPE_2__ rcc_Local; } ;
struct TYPE_8__ {TYPE_1__ v; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int ** VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int,TYPE_4__*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(rcc_interface_ty VAR_3) {
 int VAR_4 = VAR_3->v.rcc_Local.uid;

 FUNC_1(VAR_4 >= 0 && VAR_4 < VAR_2);
 FUNC_1(VAR_1[VAR_4] == ((void*)0));
 VAR_1[VAR_4] = FUNC_2(VAR_4, VAR_3->v.rcc_Local.p);
 if (VAR_3->v.rcc_Local.p->scope >= VAR_0)
  FUNC_0(FUNC_3(VAR_4));
}
