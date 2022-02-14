
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef int AVPixFmtDescriptor ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int const* VAR_1 ;

enum AVPixelFormat FUNC_1(const AVPixFmtDescriptor *VAR_2)
{
    if (VAR_2 < VAR_1 ||
        VAR_2 >= VAR_1 + FUNC_0(VAR_1))
        return VAR_0;

    return VAR_2 - VAR_1;
}
