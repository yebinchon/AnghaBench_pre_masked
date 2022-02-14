
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int buf_addr; } ;
struct TYPE_3__ {int buf_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_4 (int ) ;

void FUNC_5(void)
{
 int VAR_6;



 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  FUNC_4(VAR_2[VAR_6]);

 FUNC_2(1, 0xff);
 FUNC_2(0, 0xff);
 FUNC_1(0x3);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_0((unsigned long)FUNC_3(VAR_5[VAR_6].buf_addr));

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_0((unsigned long)FUNC_3(VAR_4[VAR_6].buf_addr));
}
