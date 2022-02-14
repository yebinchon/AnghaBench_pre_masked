
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef int fullpath ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 int FUNC_2 (char*,int ) ;
 size_t FUNC_3 (char const*,char*,int) ;
 int FUNC_4 (char*,char*,char const*,...) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 char* FUNC_6 (int ) ;

void
FUNC_7(const char *VAR_5, const char *VAR_6, const char *VAR_7)
{
    char VAR_8[32];
    FUNC_4(VAR_8, "appimage-portable-%s", VAR_7);

    if (VAR_5 && FUNC_5(VAR_5, VAR_8)==0) {
        char VAR_9[VAR_1];
        char VAR_10[VAR_1];

        ssize_t VAR_11 = FUNC_3(VAR_6, VAR_10, sizeof(VAR_10));
        if (VAR_11 < 0) {
            FUNC_1(VAR_4, "Error getting realpath for %s\n", VAR_6);
            FUNC_0(VAR_0);
        }
        VAR_10[VAR_11] = '\0';

        FUNC_4(VAR_9, "%s.%s", VAR_10, VAR_7);
        if (!FUNC_2(VAR_9, VAR_2))
            FUNC_1(VAR_4, "Portable %s directory created at %s\n", VAR_7, VAR_9);
        else
            FUNC_1(VAR_4, "Error creating portable %s directory at %s: %s\n", VAR_7, VAR_9, FUNC_6(VAR_3));

        FUNC_0(0);
    }
}
