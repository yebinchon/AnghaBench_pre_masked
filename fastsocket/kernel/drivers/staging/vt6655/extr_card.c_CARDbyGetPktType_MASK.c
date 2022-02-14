
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ byBBType; } ;
typedef int PVOID ;
typedef TYPE_1__* PSDevice ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

BYTE FUNC_1 (PVOID VAR_4)
{
    PSDevice VAR_5 = (PSDevice) VAR_4;

    if (VAR_5->byBBType == VAR_0 || VAR_5->byBBType == VAR_1) {
        return (BYTE)VAR_5->byBBType;
    }
    else if (FUNC_0((PVOID)VAR_5)) {
        return VAR_2;
    }
    else {
     return VAR_3;
    }
}
