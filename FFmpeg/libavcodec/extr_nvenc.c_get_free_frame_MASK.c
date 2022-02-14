
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp_surf ;
struct TYPE_3__ {int unused_surface_queue; } ;
typedef int NvencSurface ;
typedef TYPE_1__ NvencContext ;


 int FUNC_0 (int ,int **,int,int *) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static NvencSurface *FUNC_2(NvencContext *VAR_0)
{
    NvencSurface *VAR_1;

    if (!(FUNC_1(VAR_0->unused_surface_queue) > 0))

        return ((void*)0);

    FUNC_0(VAR_0->unused_surface_queue, &VAR_1, sizeof(VAR_1), ((void*)0));
    return VAR_1;
}
