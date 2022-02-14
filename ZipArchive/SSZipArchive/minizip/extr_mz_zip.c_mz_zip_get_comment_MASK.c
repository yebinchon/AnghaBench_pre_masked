
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* comment; } ;
typedef TYPE_1__ mz_zip ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int32_t FUNC_0(void *VAR_3, const char **VAR_4)
{
    mz_zip *VAR_5 = (mz_zip *)VAR_3;
    if (VAR_5 == ((void*)0) || VAR_4 == ((void*)0))
        return VAR_2;
    if (VAR_5->comment == ((void*)0))
        return VAR_0;
    *VAR_4 = VAR_5->comment;
    return VAR_1;
}
