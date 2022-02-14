
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int rcc_interface_ty ;
struct TYPE_7__ {struct TYPE_7__* prev; int begin; } ;
struct TYPE_5__ {int begin; } ;
struct TYPE_6__ {TYPE_1__ u; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(rcc_interface_ty VAR_2) {
 FUNC_0(VAR_1);
 FUNC_1(VAR_0)->u.begin = VAR_1->begin;
 VAR_1 = VAR_1->prev;
 FUNC_2();
}
