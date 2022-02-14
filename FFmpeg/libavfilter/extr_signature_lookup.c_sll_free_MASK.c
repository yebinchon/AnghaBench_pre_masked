
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef TYPE_1__ MatchingInfo ;


 int FUNC_0 (void**) ;

__attribute__((used)) static void FUNC_1(MatchingInfo *VAR_0)
{
    void *VAR_1;
    while (VAR_0) {
        VAR_1 = VAR_0;
        VAR_0 = VAR_0->next;
        FUNC_0(&VAR_1);
    }
}
