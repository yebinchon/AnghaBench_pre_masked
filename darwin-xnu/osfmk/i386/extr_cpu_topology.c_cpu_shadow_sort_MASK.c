
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ptrdiff_t ;
struct TYPE_3__ {int * cd_shadow; } ;
typedef TYPE_1__ cpu_data_t ;


 int * VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(int VAR_1) {
 for (int VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  cpu_data_t *VAR_3 = FUNC_0(VAR_2);
  ptrdiff_t VAR_4 = VAR_3 - FUNC_0(0);

  VAR_3->cd_shadow = &VAR_0[VAR_4];
 }
}
