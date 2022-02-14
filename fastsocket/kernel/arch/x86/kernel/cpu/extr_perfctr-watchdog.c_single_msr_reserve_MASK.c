
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int perfctr; int evntsel; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_3(void)
{
 if (!FUNC_2(VAR_0->perfctr))
  return 0;

 if (!FUNC_1(VAR_0->evntsel)) {
  FUNC_0(VAR_0->perfctr);
  return 0;
 }
 return 1;
}
