
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* comment; } ;
typedef TYPE_1__ mz_zip ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,scalar_t__) ;

int32_t FUNC_5(void *VAR_4, const char *VAR_5)
{
    mz_zip *VAR_6 = (mz_zip *)VAR_4;
    int32_t VAR_7 = 0;
    if (VAR_6 == ((void*)0) || VAR_5 == ((void*)0))
        return VAR_2;
    if (VAR_6->comment != ((void*)0))
        FUNC_1(VAR_6->comment);
    VAR_7 = (int32_t)FUNC_3(VAR_5);
    if (VAR_7 > VAR_3)
        return VAR_2;
    VAR_6->comment = (char *)FUNC_0(VAR_7+1);
    if (VAR_6->comment == ((void*)0))
        return VAR_0;
    FUNC_2(VAR_6->comment, 0, VAR_7+1);
    FUNC_4(VAR_6->comment, VAR_5, VAR_7);
    return VAR_1;
}
