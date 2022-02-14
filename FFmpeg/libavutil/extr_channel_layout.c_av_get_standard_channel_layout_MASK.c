
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {char* name; int layout; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;

int FUNC_1(unsigned VAR_2, uint64_t *VAR_3,
                                   const char **VAR_4)
{
    if (VAR_2 >= FUNC_0(VAR_1))
        return VAR_0;
    if (VAR_3) *VAR_3 = VAR_1[VAR_2].layout;
    if (VAR_4) *VAR_4 = VAR_1[VAR_2].name;
    return 0;
}
