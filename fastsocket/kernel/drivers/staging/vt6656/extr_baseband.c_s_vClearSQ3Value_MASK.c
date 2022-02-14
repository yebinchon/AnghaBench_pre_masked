
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* aulSQ3Val; scalar_t__* aulPktNum; scalar_t__ uDiversityCnt; } ;
typedef TYPE_1__* PSDevice ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static
void
FUNC_0 (PSDevice VAR_2)
{
    int VAR_3;
    VAR_2->uDiversityCnt = 0;

    for ( VAR_3=VAR_1;VAR_3<VAR_0;VAR_3++) {
        VAR_2->aulPktNum[VAR_3] = 0;
        VAR_2->aulSQ3Val[VAR_3] = 0;
    }
}
