
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char*,char const*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_2(void *VAR_7, const char *VAR_8, const char *VAR_9)
{
    if (!FUNC_0(VAR_9, "cfr")) VAR_6 = VAR_2;
    else if (!FUNC_0(VAR_9, "vfr")) VAR_6 = VAR_5;
    else if (!FUNC_0(VAR_9, "passthrough")) VAR_6 = VAR_4;
    else if (!FUNC_0(VAR_9, "drop")) VAR_6 = VAR_3;

    if (VAR_6 == VAR_1)
        VAR_6 = FUNC_1("vsync", VAR_9, VAR_0, VAR_1, VAR_5);
    return 0;
}
