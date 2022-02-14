
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int* aulPktNum; int uDiversityCnt; } ;
typedef TYPE_1__* PSDevice ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static
ULONG
FUNC_0 (PSDevice VAR_5)
{
int VAR_6,VAR_7;
ULONG VAR_8 = 0;
ULONG VAR_9;
ULONG VAR_10;


    VAR_9 = VAR_5->aulPktNum[VAR_2];
    if ( VAR_5->aulPktNum[VAR_2] != 0 ) {
        VAR_10 = VAR_5->aulPktNum[VAR_2];
        VAR_8 = (VAR_10 * 1000 / VAR_5->uDiversityCnt);
        VAR_8 += VAR_4;
    }
    for ( VAR_6=VAR_1;VAR_6>=VAR_0;VAR_6-- ) {
        if ( VAR_5->aulPktNum[VAR_6] > VAR_9 ) {
            VAR_10 = 0;
            for ( VAR_7=VAR_2;VAR_7>=VAR_6;VAR_7--)
                VAR_10 += VAR_5->aulPktNum[VAR_7];
            VAR_8 = (VAR_10 * 1000 / VAR_5->uDiversityCnt);
            VAR_8 += VAR_3;
            VAR_9 = VAR_5->aulPktNum[VAR_6];
        }

    }

    return VAR_8;
}
