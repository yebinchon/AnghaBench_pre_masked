
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;
typedef int int64 ;


 int FUNC_0 (scalar_t__*,char const*,char**) ;

__attribute__((used)) static int
FUNC_1(int64 *VAR_0, const char *VAR_1, char **VAR_2)
{
    int VAR_3;
    uint32 VAR_4;

    VAR_3 = FUNC_0(&VAR_4, VAR_1, VAR_2);
    if (VAR_3)
        return VAR_3;
    *VAR_0 = ((int64) VAR_4) * 1000000000;
    return 0;
}
