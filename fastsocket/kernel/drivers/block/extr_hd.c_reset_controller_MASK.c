
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
 int VAR_4;

 FUNC_3(4, VAR_0);
 for (VAR_4 = 0; VAR_4 < 1000; VAR_4++) FUNC_0();
 FUNC_3(VAR_3[0].ctl & 0x0f, VAR_0);
 for (VAR_4 = 0; VAR_4 < 1000; VAR_4++) FUNC_0();
 if (FUNC_1())
  FUNC_4("hd: controller still busy\n");
 else if ((VAR_2 = FUNC_2(VAR_1)) != 1)
  FUNC_4("hd: controller reset failed: %02x\n", VAR_2);
}
