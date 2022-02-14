
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int handle; int (* GetProcAddressARB ) (int const*) ;int (* GetProcAddress ) (int const*) ;} ;
struct TYPE_4__ {TYPE_1__ glx; } ;
typedef int GLubyte ;
typedef int GLFWglproc ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;

GLFWglproc FUNC_3(const char* VAR_1)
{
    if (VAR_0.glx.GetProcAddress)
        return VAR_0.glx.GetProcAddress((const GLubyte*) VAR_1);
    else if (VAR_0.glx.GetProcAddressARB)
        return VAR_0.glx.GetProcAddressARB((const GLubyte*) VAR_1);
    else
        return FUNC_0(VAR_0.glx.handle, VAR_1);
}
