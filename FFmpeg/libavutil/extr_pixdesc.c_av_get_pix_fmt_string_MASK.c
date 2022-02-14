
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_4__ {char* name; int nb_components; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;


 int FUNC_0 (TYPE_1__ const*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*,int,char*,...) ;

char *FUNC_2(char *VAR_1, int VAR_2,
                            enum AVPixelFormat VAR_3)
{

    if (VAR_3 < 0) {
       FUNC_1 (VAR_1, VAR_2, "name" " nb_components" " nb_bits");
    } else {
        const AVPixFmtDescriptor *VAR_4 = &VAR_0[VAR_3];
        FUNC_1(VAR_1, VAR_2, "%-11s %7d %10d", VAR_4->name,
                 VAR_4->nb_components, FUNC_0(VAR_4));
    }

    return VAR_1;
}
