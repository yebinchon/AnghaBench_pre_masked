
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int version; int (* query_ranges ) (TYPE_1__**,void*,char const*,int) ;} ;
struct TYPE_6__ {int nb_components; } ;
typedef TYPE_1__ AVOptionRanges ;
typedef TYPE_3__ AVClass ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__**,void*,char const*,int) ;

int FUNC_1(AVOptionRanges **VAR_1, void *VAR_2, const char *VAR_3, int VAR_4)
{
    int VAR_5;
    const AVClass *VAR_6 = *(AVClass**)VAR_2;
    int (*VAR_7)(AVOptionRanges **, void *VAR_8, const char *VAR_9, int VAR_10) = ((void*)0);

    if (VAR_6->version > (52 << 16 | 11 << 8))
        VAR_7 = VAR_6->query_ranges;

    if (!VAR_7)
        VAR_7 = FUNC_0;

    VAR_5 = VAR_7(VAR_1, VAR_2, VAR_3, VAR_4);
    if (VAR_5 >= 0) {
        if (!(VAR_4 & VAR_0))
            VAR_5 = 1;
        (*VAR_1)->nb_components = VAR_5;
    }
    return VAR_5;
}
