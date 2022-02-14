
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int rgb; int * name; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char const*,int *) ;

uint32_t FUNC_1(const char *VAR_1)
{
    int VAR_2 = 0;

    while (VAR_0[VAR_2].name != ((void*)0))
    {
        if (!FUNC_0(VAR_1, VAR_0[VAR_2].name))
            return VAR_0[VAR_2].rgb;
        VAR_2++;
    }
    return 0;
}
