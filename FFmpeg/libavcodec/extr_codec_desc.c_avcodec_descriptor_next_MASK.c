
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVCodecDescriptor ;


 int FUNC_0 (int const*) ;
 int const* VAR_0 ;

const AVCodecDescriptor *FUNC_1(const AVCodecDescriptor *VAR_1)
{
    if (!VAR_1)
        return &VAR_0[0];
    if (VAR_1 - VAR_0 < FUNC_0(VAR_0) - 1)
        return VAR_1 + 1;
    return ((void*)0);
}
