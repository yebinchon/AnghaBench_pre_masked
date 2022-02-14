
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_2__ {int bValid; } ;
typedef int BOOL ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

BOOL
FUNC_0(UINT VAR_3, UINT VAR_4)
{
    BOOL VAR_5;

    VAR_5 = VAR_1;



    if ((VAR_4 > VAR_0) ||
        (VAR_4 == 0))
    {
        VAR_5 = VAR_1;
        goto exit;
    }

    VAR_5 = VAR_2[VAR_4].bValid;

exit:
    return (VAR_5);

}
