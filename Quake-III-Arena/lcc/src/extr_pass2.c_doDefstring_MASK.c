
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_4__* rcc_interface_ty ;
struct TYPE_11__ {int (* defstring ) (int ,char*) ;} ;
struct TYPE_7__ {scalar_t__ str; int len; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
struct TYPE_9__ {TYPE_2__ rcc_Defstring; } ;
struct TYPE_10__ {TYPE_3__ v; } ;


 TYPE_6__* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(rcc_interface_ty VAR_1) {
 (*VAR_0->defstring)(VAR_1->v.rcc_Defstring.s.len, (char *)VAR_1->v.rcc_Defstring.s.str);
 FUNC_0((char *)VAR_1->v.rcc_Defstring.s.str);
}
