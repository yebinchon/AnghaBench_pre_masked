
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

BOOL FUNC_0 (PVOID VAR_4)
{
    PSDevice VAR_5 = (PSDevice) VAR_4;
    int VAR_6;

    for (VAR_6 = VAR_1; VAR_6 >= VAR_2; VAR_6 --) {
        if ((VAR_5->wBasicRate) & ((WORD)(1<<VAR_6)))
            return VAR_3;
    }
    return VAR_0;
}
