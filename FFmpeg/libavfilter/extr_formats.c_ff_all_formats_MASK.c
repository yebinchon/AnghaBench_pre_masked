
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
typedef int AVPixFmtDescriptor ;
typedef int AVFilterFormats ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int **,int) ;

AVFilterFormats *FUNC_4(enum AVMediaType VAR_2)
{
    AVFilterFormats *VAR_3 = ((void*)0);

    if (VAR_2 == VAR_1) {
        const AVPixFmtDescriptor *VAR_4 = ((void*)0);
        while ((VAR_4 = FUNC_2(VAR_4))) {
            if (FUNC_3(&VAR_3, FUNC_1(VAR_4)) < 0)
                return ((void*)0);
        }
    } else if (VAR_2 == VAR_0) {
        enum AVSampleFormat VAR_5 = 0;
        while (FUNC_0(VAR_5)) {
            if (FUNC_3(&VAR_3, VAR_5) < 0)
                return ((void*)0);
            VAR_5++;
        }
    }

    return VAR_3;
}
