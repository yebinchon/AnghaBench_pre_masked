
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ data; int handle; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_4(void)
{
    if (VAR_2)
    {
 if (VAR_1)
     FUNC_0(VAR_2->handle);

 FUNC_1(VAR_2->handle);
 FUNC_2(VAR_2->handle);
 FUNC_3(VAR_2->data, VAR_0);

 VAR_2->data = 0;
 VAR_2 = 0;
    }
}
