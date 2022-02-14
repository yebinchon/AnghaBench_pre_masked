
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t FUNC_0 (char const*) ;
 size_t FUNC_1 (char const*,int ) ;

__attribute__((used)) static bool
FUNC_2(const char *VAR_1, size_t VAR_2)
{
    size_t VAR_3 = FUNC_0(VAR_1);
    return 0 < VAR_3 && VAR_3 <= VAR_2 &&
        FUNC_1(VAR_1, VAR_0) == VAR_3 &&
        VAR_1[0] != '-';
}
