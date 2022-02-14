
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int KHR_mir_surface; } ;
struct TYPE_4__ {TYPE_1__ vk; } ;


 TYPE_2__ VAR_0 ;
 char** FUNC_0 (int,int) ;
 char* FUNC_1 (char*) ;

char** FUNC_2(uint32_t* VAR_1)
{
    char** VAR_2;

    *VAR_1 = 0;

    if (!VAR_0.vk.KHR_mir_surface)
        return ((void*)0);

    VAR_2 = FUNC_0(2, sizeof(char*));
    VAR_2[0] = FUNC_1("VK_KHR_surface");
    VAR_2[1] = FUNC_1("VK_KHR_mir_surface");

    *VAR_1 = 2;
    return VAR_2;
}
