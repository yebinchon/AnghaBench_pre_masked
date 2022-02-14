
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_3__* rcc_interface_ty ;
struct TYPE_11__ {int i; } ;
typedef TYPE_4__ Value ;
struct TYPE_12__ {int (* defconst ) (int ,int ,TYPE_4__) ;} ;
struct TYPE_8__ {int size; int suffix; int value; } ;
struct TYPE_9__ {TYPE_1__ rcc_Defconst; } ;
struct TYPE_10__ {TYPE_2__ v; } ;


 TYPE_7__* VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_4__) ;

__attribute__((used)) static void FUNC_1(rcc_interface_ty VAR_1) {
 Value VAR_2;

 VAR_2.i = VAR_1->v.rcc_Defconst.value;
 (*VAR_0->defconst)(VAR_1->v.rcc_Defconst.suffix, VAR_1->v.rcc_Defconst.size, VAR_2);
}
