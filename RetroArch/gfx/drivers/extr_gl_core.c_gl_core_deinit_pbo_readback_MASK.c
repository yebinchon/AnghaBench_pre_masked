
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* pbo_readback; int pbo_readback_scaler; } ;
typedef TYPE_1__ gl_core_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int,scalar_t__*) ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(gl_core_t *VAR_1)
{
   unsigned VAR_2;
   for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
      if (VAR_1->pbo_readback[VAR_2] != 0)
         FUNC_0(1, &VAR_1->pbo_readback[VAR_2]);
   FUNC_1(VAR_1->pbo_readback, 0, sizeof(VAR_1->pbo_readback));
   FUNC_2(&VAR_1->pbo_readback_scaler);
}
