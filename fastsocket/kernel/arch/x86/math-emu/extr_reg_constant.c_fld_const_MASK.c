
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int sigl; } ;
typedef TYPE_1__ FPU_REG ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__ const*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(FPU_REG const * VAR_1, int VAR_2, u_char VAR_3)
{
 FPU_REG *VAR_4;

 if (VAR_0) {
  FUNC_1();
  return;
 }
 FUNC_3();
 FUNC_4(VAR_1, VAR_4);
 VAR_4->sigl += VAR_2;

 FUNC_0(VAR_3);
 FUNC_2();
}
