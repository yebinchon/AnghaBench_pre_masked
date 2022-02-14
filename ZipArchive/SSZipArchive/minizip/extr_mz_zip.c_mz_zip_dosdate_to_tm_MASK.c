
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct tm {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tm*,int ,int) ;
 int FUNC_1 (int ,struct tm*) ;
 scalar_t__ FUNC_2 (struct tm*) ;

int32_t FUNC_3(uint64_t VAR_3, struct tm *VAR_4)
{
    if (VAR_4 == ((void*)0))
        return VAR_2;

    FUNC_1(VAR_3, VAR_4);

    if (FUNC_2(VAR_4))
    {

        FUNC_0(VAR_4, 0, sizeof(struct tm));
        return VAR_0;
    }
    return VAR_1;
}
