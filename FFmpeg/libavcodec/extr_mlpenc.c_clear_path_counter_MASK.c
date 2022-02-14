
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* path; scalar_t__ bitcount; } ;
typedef TYPE_1__ PathCounter ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(PathCounter *VAR_2)
{
    unsigned int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0 + 1; VAR_3++) {
        VAR_2[VAR_3].path[0] = VAR_1;
        VAR_2[VAR_3].path[1] = 0x00;
        VAR_2[VAR_3].bitcount = 0;
    }
}
