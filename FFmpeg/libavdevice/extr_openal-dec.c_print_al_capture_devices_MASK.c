
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,int ) ;
 int FUNC_1 (void*,int ,char*,...) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static inline void FUNC_3(void *VAR_2)
{
    const char *VAR_3;

    if (!(VAR_3 = FUNC_0(((void*)0), VAR_0)))
        return;

    FUNC_1(VAR_2, VAR_1, "List of OpenAL capture devices on this system:\n");

    for (; *VAR_3 != '\0'; VAR_3 += FUNC_2(VAR_3) + 1)
        FUNC_1(VAR_2, VAR_1, "  %s\n", VAR_3);
}
