
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int PortOffset; int sKey; } ;
typedef int PVOID ;
typedef TYPE_1__* PSDevice ;
typedef int PBYTE ;
typedef int BOOL ;


 int FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;

BOOL FUNC_1 (PVOID VAR_1, PBYTE VAR_2)
{
    PSDevice VAR_3 = (PSDevice) VAR_1;

    FUNC_0(&(VAR_3->sKey), VAR_2, VAR_3->PortOffset);
    return (VAR_0);
}
