
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* name; } ;
typedef TYPE_1__ OptionDef ;


 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,int) ;

__attribute__((used)) static const OptionDef *FUNC_3(const OptionDef *VAR_0, const char *VAR_1)
{
    const char *VAR_2 = FUNC_0(VAR_1, ':');
    int VAR_3 = VAR_2 ? VAR_2 - VAR_1 : FUNC_1(VAR_1);

    while (VAR_0->name) {
        if (!FUNC_2(VAR_1, VAR_0->name, VAR_3) && FUNC_1(VAR_0->name) == VAR_3)
            break;
        VAR_0++;
    }
    return VAR_0;
}
