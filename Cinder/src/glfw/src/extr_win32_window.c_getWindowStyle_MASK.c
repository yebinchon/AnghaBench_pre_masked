
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ resizable; scalar_t__ decorated; scalar_t__ monitor; } ;
typedef TYPE_1__ _GLFWwindow ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static DWORD FUNC_0(const _GLFWwindow* VAR_8)
{
    DWORD VAR_9 = VAR_2 | VAR_1;

    if (VAR_8->monitor)
        VAR_9 |= VAR_5;
    else
    {
        if (VAR_8->decorated)
        {
            VAR_9 |= VAR_0 | VAR_6 | VAR_4;

            if (VAR_8->resizable)
                VAR_9 |= VAR_3 | VAR_7;
        }
        else
            VAR_9 |= VAR_5;
    }

    return VAR_9;
}
