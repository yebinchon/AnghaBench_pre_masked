
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_2__ {int vpe_id; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 int VAR_4 = FUNC_3();


 FUNC_0(1);

 if (FUNC_1() & (1 << 30)) {

  FUNC_5(FUNC_2());
  FUNC_4(VAR_1[VAR_4].vpe_id);
 }
 return VAR_0;
}
