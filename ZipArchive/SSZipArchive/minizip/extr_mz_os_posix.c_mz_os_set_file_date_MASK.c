
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* time_t ;
struct utimbuf {void* modtime; void* actime; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (char const*,struct utimbuf*) ;

int32_t FUNC_2(const char *VAR_2, time_t VAR_3, time_t VAR_4, time_t VAR_5)
{
    struct utimbuf VAR_6;

    VAR_6.actime = VAR_4;
    VAR_6.modtime = VAR_3;


    FUNC_0(VAR_5);

    if (FUNC_1(VAR_2, &VAR_6) != 0)
        return VAR_0;

    return VAR_1;
}
