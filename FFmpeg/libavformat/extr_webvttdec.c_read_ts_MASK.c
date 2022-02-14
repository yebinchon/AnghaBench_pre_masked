
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,int*,int*,int*,...) ;

__attribute__((used)) static int64_t FUNC_1(const char *VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5;
    if (FUNC_0(VAR_1, "%u:%u:%u.%u", &VAR_2, &VAR_3, &VAR_4, &VAR_5) == 4) return (VAR_2*3600LL + VAR_3*60LL + VAR_4) * 1000LL + VAR_5;
    if (FUNC_0(VAR_1, "%u:%u.%u", &VAR_3, &VAR_4, &VAR_5) == 3) return ( VAR_3*60LL + VAR_4) * 1000LL + VAR_5;
    return VAR_0;
}
