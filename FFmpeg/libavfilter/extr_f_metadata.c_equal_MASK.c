
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MetadataContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (float) ;
 int FUNC_1 (char const*,char*,float*) ;

__attribute__((used)) static int FUNC_2(MetadataContext *VAR_1, const char *VAR_2, const char *VAR_3)
{
    float VAR_4, VAR_5;

    if (FUNC_1(VAR_2, "%f", &VAR_4) + FUNC_1(VAR_3, "%f", &VAR_5) != 2)
        return 0;

    return FUNC_0(VAR_4 - VAR_5) < VAR_0;
}
