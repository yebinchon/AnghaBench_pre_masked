
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reset; } ;


 int FUNC_0 (char*,int,int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_5;
 int VAR_6;

 if (VAR_0->reset)
  return -1;
 for (VAR_6 = 0; VAR_6 < 10000; VAR_6++) {
  VAR_5 = FUNC_1(VAR_1);
  if (VAR_5 & VAR_2)
   return VAR_5;
 }
 if (!VAR_4) {
  FUNC_0("Getstatus times out (%x) on fdc %d\n", VAR_5, VAR_3);
  FUNC_2();
 }
 VAR_0->reset = 1;
 return -1;
}
