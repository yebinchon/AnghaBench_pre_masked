
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int pkt; } ;
typedef TYPE_1__ FifoMessage ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_1)
{
    FifoMessage *VAR_2 = VAR_1;

    if (VAR_2->type == VAR_0)
        FUNC_0(&VAR_2->pkt);
}
