
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef int SwsFilter ;
typedef int SwsContext ;


 int * FUNC_0 (int,int,int,int,int,int,int,double const*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;

SwsContext *FUNC_3(int VAR_0, int VAR_1, enum AVPixelFormat VAR_2,
                           int VAR_3, int VAR_4, enum AVPixelFormat VAR_5,
                           int VAR_6, SwsFilter *VAR_7,
                           SwsFilter *VAR_8, const double *VAR_9)
{
    SwsContext *VAR_10;

    VAR_10 = FUNC_0(VAR_0, VAR_1, VAR_2,
                           VAR_3, VAR_4, VAR_5,
                           VAR_6, VAR_9);
    if (!VAR_10)
        return ((void*)0);

    if (FUNC_2(VAR_10, VAR_7, VAR_8) < 0) {
        FUNC_1(VAR_10);
        return ((void*)0);
    }

    return VAR_10;
}
