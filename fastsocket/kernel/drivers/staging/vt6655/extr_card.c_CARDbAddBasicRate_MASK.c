
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_2__ {int wBasicRate; } ;
typedef int PVOID ;
typedef TYPE_1__* PSDevice ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

BOOL FUNC_1 (PVOID VAR_1, WORD VAR_2)
{
    PSDevice VAR_3 = (PSDevice) VAR_1;
    WORD VAR_4 = (WORD)(1<<VAR_2);

    VAR_3->wBasicRate |= VAR_4;


    FUNC_0((PVOID)VAR_3);

    return(VAR_0);
}
