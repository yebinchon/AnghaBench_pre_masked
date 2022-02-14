
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MetadataContext ;


 float VAR_0 ;
 int FUNC_0 (char const*,char*,float*) ;

__attribute__((used)) static int FUNC_1(MetadataContext *VAR_1, const char *VAR_2, const char *VAR_3)
{
    float VAR_4, VAR_5;

    if (FUNC_0(VAR_2, "%f", &VAR_4) + FUNC_0(VAR_3, "%f", &VAR_5) != 2)
        return 0;

    return (VAR_4 - VAR_5) < VAR_0;
}
