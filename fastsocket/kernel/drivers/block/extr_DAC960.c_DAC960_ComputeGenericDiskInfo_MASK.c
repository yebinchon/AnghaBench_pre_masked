
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * disks; } ;
typedef TYPE_1__ DAC960_Controller_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(DAC960_Controller_T *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_1(VAR_1->disks[VAR_2], FUNC_0(VAR_1, VAR_2));
}
