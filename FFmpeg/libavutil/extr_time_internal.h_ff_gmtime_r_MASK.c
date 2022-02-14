
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;


 struct tm* FUNC_0 (int const*) ;

__attribute__((used)) static inline struct tm *FUNC_1(const time_t* VAR_0, struct tm *VAR_1)
{
    struct tm *VAR_2 = FUNC_0(VAR_0);
    if (!VAR_2)
        return ((void*)0);
    *VAR_1 = *VAR_2;
    return VAR_1;
}
