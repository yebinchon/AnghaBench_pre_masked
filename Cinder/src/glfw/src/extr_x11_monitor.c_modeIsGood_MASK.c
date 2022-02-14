
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int modeFlags; } ;
typedef TYPE_1__ XRRModeInfo ;
typedef int GLFWbool ;


 int VAR_0 ;

__attribute__((used)) static GLFWbool FUNC_0(const XRRModeInfo* VAR_1)
{
    return (VAR_1->modeFlags & VAR_0) == 0;
}
