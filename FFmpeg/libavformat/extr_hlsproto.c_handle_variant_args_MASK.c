
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct variant_info {char* bandwidth; } ;


 int FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static void FUNC_1(struct variant_info *VAR_0, const char *VAR_1,
                                int VAR_2, char **VAR_3, int *VAR_4)
{
    if (!FUNC_0(VAR_1, "BANDWIDTH=", VAR_2)) {
        *VAR_3 = VAR_0->bandwidth;
        *VAR_4 = sizeof(VAR_0->bandwidth);
    }
}
