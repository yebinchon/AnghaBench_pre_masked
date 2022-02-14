
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* rcc_interface_ty ;
typedef int list_ty ;
struct TYPE_5__ {int codelist; } ;
struct TYPE_6__ {TYPE_1__ rcc_Function; } ;
struct TYPE_7__ {scalar_t__ kind; TYPE_2__ v; } ;


 TYPE_3__* FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_2(list_ty VAR_3) {
 int VAR_4, VAR_5 = 0, VAR_6 = FUNC_1(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  rcc_interface_ty VAR_7 = FUNC_0(VAR_3, VAR_4);
  if (VAR_7->kind == VAR_2
  || VAR_7->kind == VAR_0)
   VAR_5++;
  else if (VAR_7->kind == VAR_1)
   VAR_5 += FUNC_2(VAR_7->v.rcc_Function.codelist);
 }
 return VAR_5;
}
