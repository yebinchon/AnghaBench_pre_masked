
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int polling_delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static inline void FUNC_2(void)
{
 VAR_1 = 1;

 VAR_2->polling_delay = VAR_0*1000;
 FUNC_1(VAR_2);
 FUNC_0("kernel mode fan control ON\n");
}
