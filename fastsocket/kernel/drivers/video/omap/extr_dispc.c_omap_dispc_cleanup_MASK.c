
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int region_cnt; } ;
struct TYPE_4__ {int base; int fbdev; TYPE_1__ mem_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void)
{
 int VAR_3;

 FUNC_5(VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_2.mem_desc.region_cnt; VAR_3++)
  FUNC_4(VAR_3, 0);
 FUNC_0();
 FUNC_2();
 FUNC_1(VAR_0, VAR_2.fbdev);
 FUNC_6();
 FUNC_3(VAR_2.base);
}
