
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int monitor; scalar_t__ decorated; } ;
typedef TYPE_1__ _GLFWwindow ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static DWORD FUNC_0(const _GLFWwindow* VAR_2)
{
    DWORD VAR_3 = VAR_0;

    if (VAR_2->decorated && !VAR_2->monitor)
        VAR_3 |= VAR_1;

    return VAR_3;
}
