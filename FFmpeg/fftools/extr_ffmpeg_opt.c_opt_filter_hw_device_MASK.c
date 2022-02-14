
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(void *VAR_3, const char *VAR_4, const char *VAR_5)
{
    if (VAR_2) {
        FUNC_1(((void*)0), VAR_0, "Only one filter device can be used.\n");
        return FUNC_0(VAR_1);
    }
    VAR_2 = FUNC_2(VAR_5);
    if (!VAR_2) {
        FUNC_1(((void*)0), VAR_0, "Invalid filter device %s.\n", VAR_5);
        return FUNC_0(VAR_1);
    }
    return 0;
}
