
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int response_mutex; int request_mutex; int watch_mutex; int transaction_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_0 ;

void FUNC_2(void)
{
 FUNC_0(&VAR_0.transaction_mutex);
 FUNC_0(&VAR_0.watch_mutex);
 FUNC_1(&VAR_0.request_mutex);
 FUNC_1(&VAR_0.response_mutex);
}
