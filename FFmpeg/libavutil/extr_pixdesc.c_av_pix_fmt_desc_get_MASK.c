
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef int AVPixFmtDescriptor ;


 int VAR_0 ;
 int const* VAR_1 ;

const AVPixFmtDescriptor *FUNC_0(enum AVPixelFormat VAR_2)
{
    if (VAR_2 < 0 || VAR_2 >= VAR_0)
        return ((void*)0);
    return &VAR_1[VAR_2];
}
