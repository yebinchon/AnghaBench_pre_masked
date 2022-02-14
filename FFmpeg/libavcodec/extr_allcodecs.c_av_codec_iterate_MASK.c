
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVCodec ;


 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 int FUNC_0 (int *,int ) ;

const AVCodec *FUNC_1(void **VAR_3)
{
    uintptr_t VAR_4 = (uintptr_t)*VAR_3;
    const AVCodec *VAR_5 = VAR_2[VAR_4];

    FUNC_0(&VAR_1, VAR_0);

    if (VAR_5)
        *VAR_3 = (void*)(VAR_4 + 1);

    return VAR_5;
}
