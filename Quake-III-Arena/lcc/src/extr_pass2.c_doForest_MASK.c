
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_4__* rcc_interface_ty ;
struct TYPE_10__ {TYPE_5__* forest; } ;
struct TYPE_15__ {TYPE_1__ u; } ;
struct TYPE_14__ {struct TYPE_14__* link; } ;
struct TYPE_11__ {int nodes; } ;
struct TYPE_12__ {TYPE_2__ rcc_Forest; } ;
struct TYPE_13__ {TYPE_3__ v; } ;
typedef TYPE_5__* Node ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*) ;
 TYPE_8__* FUNC_4 (int ) ;
 TYPE_5__* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(rcc_interface_ty VAR_1) {
 Node *VAR_2 = &FUNC_4(VAR_0)->u.forest;
 int VAR_3, VAR_4 = FUNC_1(VAR_1->v.rcc_Forest.nodes);

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  *VAR_2 = FUNC_5(FUNC_2(VAR_1->v.rcc_Forest.nodes));
  FUNC_3(*VAR_2);
  VAR_2 = &(*VAR_2)->link;
 }
 *VAR_2 = ((void*)0);
 FUNC_0(&VAR_1->v.rcc_Forest.nodes);
}
