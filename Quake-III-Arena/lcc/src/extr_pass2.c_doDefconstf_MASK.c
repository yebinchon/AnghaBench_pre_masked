
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_3__* rcc_interface_ty ;
struct TYPE_12__ {int d; } ;
typedef TYPE_4__ Value ;
struct TYPE_14__ {int (* defconst ) (int ,int ,TYPE_4__) ;} ;
struct TYPE_13__ {unsigned int msb; unsigned int lsb; } ;
struct TYPE_10__ {TYPE_6__* value; int size; } ;
struct TYPE_9__ {TYPE_2__ rcc_Defconstf; } ;
struct TYPE_11__ {TYPE_1__ v; } ;


 int VAR_0 ;
 TYPE_8__* VAR_1 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int ,int ,TYPE_4__) ;
 size_t VAR_2 ;

__attribute__((used)) static void FUNC_2(rcc_interface_ty VAR_3) {
 Value VAR_4;
 unsigned *VAR_5 = (unsigned *)&VAR_4.d;

 VAR_5[VAR_2] = VAR_3->v.rcc_Defconstf.value->msb;
 VAR_5[1-VAR_2] = VAR_3->v.rcc_Defconstf.value->lsb;
 (*VAR_1->defconst)(VAR_0, VAR_3->v.rcc_Defconstf.size, VAR_4);
 FUNC_0(VAR_3->v.rcc_Defconstf.value);
}
