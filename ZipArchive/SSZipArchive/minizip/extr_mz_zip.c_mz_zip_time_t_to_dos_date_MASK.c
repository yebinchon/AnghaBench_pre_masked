
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int time_t ;
struct tm {int dummy; } ;


 int FUNC_0 (int ,struct tm*) ;
 int FUNC_1 (struct tm const*) ;

uint32_t FUNC_2(time_t VAR_0)
{
    struct tm VAR_1;
    FUNC_0(VAR_0, &VAR_1);
    return FUNC_1((const struct tm *)&VAR_1);
}
