
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int address; } ;
typedef TYPE_1__ vita2d_display_data ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2()
{
 FUNC_1(&VAR_4[VAR_1], VAR_3[VAR_1]);


 vita2d_display_data VAR_6;
 VAR_6.address = VAR_2[VAR_1];
 FUNC_0(
  VAR_3[VAR_5],
  VAR_3[VAR_1],
  &VAR_6);


 VAR_5 = VAR_1;
 VAR_1 = (VAR_1 + 1) % VAR_0;
}
