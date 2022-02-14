
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ api; int major; int minor; int release; void* robustness; void* profile; void* debug; void* forward; int revision; } ;
struct TYPE_7__ {TYPE_1__ context; int (* GetIntegerv ) (int ,int*) ;scalar_t__ GetStringi; scalar_t__ Clear; scalar_t__ GetString; } ;
typedef TYPE_2__ _GLFWwindow ;
struct TYPE_8__ {scalar_t__ debug; } ;
typedef TYPE_3__ _GLFWctxconfig ;
typedef scalar_t__ PFNGLGETSTRINGPROC ;
typedef scalar_t__ PFNGLGETSTRINGIPROC ;
typedef int (* PFNGLGETINTEGERVPROC ) (int ,int*) ;
typedef scalar_t__ PFNGLCLEARPROC ;
typedef int GLint ;
typedef void* GLboolean ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int FUNC_0 (int ,char*) ;
 TYPE_2__* FUNC_1 () ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__*,int*,int*,int *) ;
 int FUNC_5 (int ,int*) ;
 int FUNC_6 (int ,int*) ;
 int FUNC_7 (int ,int*) ;
 int FUNC_8 (int ,int*) ;
 int FUNC_9 (int ,int*) ;

GLboolean FUNC_10(const _GLFWctxconfig* VAR_22)
{
    _GLFWwindow* VAR_23 = FUNC_1();

    VAR_23->GetIntegerv = (PFNGLGETINTEGERVPROC) FUNC_3("glGetIntegerv");
    VAR_23->GetString = (PFNGLGETSTRINGPROC) FUNC_3("glGetString");
    VAR_23->Clear = (PFNGLCLEARPROC) FUNC_3("glClear");

    if (!FUNC_4(&VAR_23->context.api,
                            &VAR_23->context.major,
                            &VAR_23->context.minor,
                            &VAR_23->context.revision))
    {
        return VAR_16;
    }
    return VAR_21;
}
