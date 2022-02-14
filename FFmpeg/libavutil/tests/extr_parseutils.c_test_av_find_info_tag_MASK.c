
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buff ;


 int FUNC_0 (char const**) ;
 scalar_t__ FUNC_1 (char*,int,char const*,char const*) ;
 int FUNC_2 (char*,int,char const*,...) ;

__attribute__((used)) static void FUNC_3(void)
{
    static const char VAR_0[] = "?tag1=val1&tag2=val2&tag3=val3&tag41=value 41&tag42=random1";
    static const char *VAR_1[] = {"tag1", "tag2", "tag3", "tag4", "tag41", "41", "random1"};
    char VAR_2[16];
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); ++VAR_3) {
        if (FUNC_1(VAR_2, sizeof(VAR_2), VAR_1[VAR_3], VAR_0))
            FUNC_2("%d. %s found: %s\n", VAR_3, VAR_1[VAR_3], VAR_2);
        else
            FUNC_2("%d. %s not found\n", VAR_3, VAR_1[VAR_3]);
    }
}
