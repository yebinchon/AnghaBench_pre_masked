
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int error; int * handle; } ;
typedef TYPE_1__ mz_stream_posix ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_0 (char const*,char const*) ;
 int FUNC_1 (void*,int ,int ) ;

int32_t FUNC_2(void *VAR_9, const char *VAR_10, int32_t VAR_11)
{
    mz_stream_posix *VAR_12 = (mz_stream_posix *)VAR_9;
    const char *VAR_13 = ((void*)0);

    if (VAR_10 == ((void*)0))
        return VAR_6;

    if ((VAR_11 & VAR_5) == VAR_4)
        VAR_13 = "rb";
    else if (VAR_11 & VAR_2)
        VAR_13 = "r+b";
    else if (VAR_11 & VAR_3)
        VAR_13 = "wb";
    else
        return VAR_1;

    VAR_12->handle = FUNC_0(VAR_10, VAR_13);
    if (VAR_12->handle == ((void*)0))
    {
        VAR_12->error = VAR_8;
        return VAR_1;
    }

    if (VAR_11 & VAR_2)
        return FUNC_1(VAR_9, 0, VAR_7);

    return VAR_0;
}
