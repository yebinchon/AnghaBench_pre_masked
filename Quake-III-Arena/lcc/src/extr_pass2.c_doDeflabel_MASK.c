
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* rcc_interface_ty ;
struct TYPE_9__ {int (* defaddress ) (int ) ;} ;
struct TYPE_6__ {int label; } ;
struct TYPE_7__ {TYPE_1__ rcc_Deflabel; } ;
struct TYPE_8__ {TYPE_2__ v; } ;


 TYPE_5__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(rcc_interface_ty VAR_1) {
 (*VAR_0->defaddress)(FUNC_0(VAR_1->v.rcc_Deflabel.label));
}
