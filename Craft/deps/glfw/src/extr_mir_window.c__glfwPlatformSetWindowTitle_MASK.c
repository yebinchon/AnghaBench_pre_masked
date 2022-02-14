
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int surface; } ;
struct TYPE_8__ {TYPE_2__ mir; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_6__ {int connection; } ;
struct TYPE_9__ {TYPE_1__ mir; } ;
typedef int MirSurfaceSpec ;


 TYPE_5__ VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*) ;

void FUNC_4(_GLFWwindow* VAR_1, const char* VAR_2)
{
    MirSurfaceSpec* VAR_3;
    const char* VAR_4 = VAR_2 ? VAR_2 : "";

    VAR_3 = FUNC_0(VAR_0.mir.connection);
    FUNC_3(VAR_3, VAR_4);

    FUNC_1(VAR_1->mir.surface, VAR_3);
    FUNC_2(VAR_3);
}
