
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int* aulPktNum; int* aulSQ3Val; } ;
typedef TYPE_1__* PSDevice ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static
ULONG
FUNC_0(PSDevice VAR_3)
{
int VAR_4;
ULONG VAR_5 = 0;
ULONG VAR_6;

    VAR_6 = VAR_3->aulPktNum[VAR_1];
    if ( VAR_3->aulPktNum[VAR_1] != 0 ) {
        VAR_5 = VAR_3->aulSQ3Val[VAR_1] / VAR_3->aulPktNum[VAR_1];
    }
    for ( VAR_4=VAR_0;VAR_4>=VAR_2;VAR_4-- ) {
        if ( VAR_3->aulPktNum[VAR_4] > VAR_6 ) {
            VAR_6 = VAR_3->aulPktNum[VAR_4];
            VAR_5 = VAR_3->aulSQ3Val[VAR_4] / VAR_3->aulPktNum[VAR_4];
        }
    }

    return VAR_5;
}
