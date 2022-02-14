
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* str; } ;
typedef TYPE_1__ AVBPrint ;


 int FUNC_0 (TYPE_1__*,char const,int) ;

__attribute__((used)) static const char *FUNC_1(AVBPrint *VAR_0, const char *VAR_1, const char VAR_2)
{
    const char *VAR_3;

    for (VAR_3 = VAR_1; *VAR_3; VAR_3++) {
        if (!((*VAR_3 >= '0' && *VAR_3 <= '9') ||
              (*VAR_3 >= 'a' && *VAR_3 <= 'z') ||
              (*VAR_3 >= 'A' && *VAR_3 <= 'Z')))
            FUNC_0(VAR_0, '_', 1);
        else
            FUNC_0(VAR_0, *VAR_3, 1);
    }
    return VAR_0->str;
}
