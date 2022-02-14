
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int UInt8 ;
typedef int CFStringRef ;
typedef int * CFDataRef ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_4 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_6 (char const*) ;

char *
FUNC_7(CFStringRef VAR_3)
{
    char *VAR_4 = ((void*)0);
    CFDataRef VAR_5 = ((void*)0);
    const UInt8 *VAR_6 = ((void*)0);
    char *VAR_7 = ((void*)0);
    u_long VAR_8 = 0;
    u_long VAR_9 = 0;

    VAR_5 = FUNC_2(VAR_0,
        VAR_3, VAR_1, 0);
    if (!VAR_5) {
        FUNC_3(VAR_2, "Failed to convert string\n");
        goto finish;
    }

    VAR_6 = FUNC_0(VAR_5);
    if (!VAR_6) {
        FUNC_3(VAR_2, "Failed to get converted string bytes\n");
        goto finish;
    }

    VAR_8 = FUNC_6((const char *)VAR_6) + 1;
    VAR_7 = FUNC_4(VAR_8);
    if (!VAR_7) {
        FUNC_3(VAR_2, "Failed to allocate memory\n");
        goto finish;
    }

    VAR_9 = FUNC_5(VAR_7, (const char *) VAR_6,
        VAR_8) + 1;
    if (VAR_9 != VAR_8) {
        FUNC_3(VAR_2, "Failed to copy converted string\n");
        goto finish;
    }

    VAR_4 = VAR_7;
finish:
    if (VAR_5) FUNC_1(VAR_5);
    return VAR_4;
}
