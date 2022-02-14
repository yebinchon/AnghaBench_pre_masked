
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {char const* name; int * rgb_color; } ;
typedef TYPE_1__ ColorEntry ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

const char *FUNC_1(int VAR_1, const uint8_t **VAR_2)
{
    const ColorEntry *VAR_3;

    if ((unsigned)VAR_1 >= FUNC_0(VAR_0))
        return ((void*)0);

    VAR_3 = &VAR_0[VAR_1];
    if (VAR_2)
        *VAR_2 = VAR_3->rgb_color;

    return VAR_3->name;
}
