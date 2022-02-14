
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,struct tm*) ;
 int FUNC_1 (struct tm*,struct tm*,int) ;
 int FUNC_2 (struct tm*,int ,int) ;

int32_t FUNC_3(time_t VAR_3, struct tm *VAR_4)
{
    struct tm VAR_5;
    if (VAR_4 == ((void*)0))
        return VAR_2;
    if (FUNC_0(&VAR_3, &VAR_5) == ((void*)0))
    {

        FUNC_2(VAR_4, 0, sizeof(struct tm));
        return VAR_0;
    }
    FUNC_1(VAR_4, &VAR_5, sizeof(struct tm));
    return VAR_1;
}
