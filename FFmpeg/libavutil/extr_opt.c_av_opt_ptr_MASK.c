
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void uint8_t ;
struct TYPE_3__ {int offset; } ;
typedef TYPE_1__ AVOption ;
typedef int AVClass ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int const**,char const*,int *,int ,int ,int *) ;

void *FUNC_1(const AVClass *VAR_1, void *VAR_2, const char *VAR_3)
{
    const AVOption *VAR_4= FUNC_0(&VAR_1, VAR_3, ((void*)0), 0, VAR_0, ((void*)0));
    if(!VAR_4)
        return ((void*)0);
    return (uint8_t*)VAR_2 + VAR_4->offset;
}
