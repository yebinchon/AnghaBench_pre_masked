
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int playlist; } ;
typedef TYPE_1__ BLURAY_TITLE_INFO ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    BLURAY_TITLE_INFO *VAR_2, *VAR_3;

    VAR_2 = *(BLURAY_TITLE_INFO**)VAR_0;
    VAR_3 = *(BLURAY_TITLE_INFO**)VAR_1;

    return VAR_2->playlist - VAR_3->playlist;
}
