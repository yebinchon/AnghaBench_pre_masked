
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_4__ {scalar_t__ nb_components; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int,int,int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int,int,int*,int) ;

enum AVPixelFormat FUNC_4(enum AVPixelFormat VAR_1, enum AVPixelFormat VAR_2,
                                             enum AVPixelFormat VAR_3, int VAR_4, int *VAR_5)
{
    enum AVPixelFormat VAR_6;
    int VAR_7, VAR_8, VAR_9;
    const AVPixFmtDescriptor *VAR_10 = FUNC_2(VAR_1);
    const AVPixFmtDescriptor *VAR_11 = FUNC_2(VAR_2);
    int VAR_12, VAR_13;

    if (!VAR_10) {
        VAR_6 = VAR_2;
    } else if (!VAR_11) {
        VAR_6 = VAR_1;
    } else {
        VAR_9= VAR_5?~*VAR_5:~0;
        if(!VAR_4)
            VAR_9 &= ~VAR_0;

        VAR_12 = FUNC_3(VAR_1, VAR_3, &VAR_7, VAR_9);
        VAR_13 = FUNC_3(VAR_2, VAR_3, &VAR_8, VAR_9);

        if (VAR_12 == VAR_13) {
            if(FUNC_0(VAR_11) != FUNC_0(VAR_10)) {
                VAR_6 = FUNC_0(VAR_11) < FUNC_0(VAR_10) ? VAR_2 : VAR_1;
            } else {
                VAR_6 = VAR_11->nb_components < VAR_10->nb_components ? VAR_2 : VAR_1;
            }
        } else {
            VAR_6 = VAR_12 < VAR_13 ? VAR_2 : VAR_1;
        }
    }

    if (VAR_5)
        *VAR_5 = FUNC_1(VAR_6, VAR_3, VAR_4);
    return VAR_6;
}
