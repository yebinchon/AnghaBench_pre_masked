
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int boolean_t ;
typedef int UInt8 ;
typedef int * CFURLRef ;
typedef int * CFStringRef ;
typedef int * CFDictionaryRef ;
typedef int * CFBundleRef ;


 int * FUNC_0 (int ,int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int const*,int ,int ) ;
 int VAR_0 ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (char*) ;
 char const* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 int VAR_5 ;
 int FUNC_10 (char const*) ;
 int FUNC_11 () ;

int
FUNC_12(int VAR_6, const char *VAR_7[])
{
    int VAR_8 = 1;
    boolean_t VAR_9 = 0;
    boolean_t VAR_10 = 0;
    CFURLRef VAR_11 = ((void*)0);
    CFBundleRef VAR_12 = ((void*)0);
    CFDictionaryRef VAR_13 = ((void*)0);
    CFStringRef VAR_14 = ((void*)0);
    CFStringRef VAR_15 = ((void*)0);
    char *VAR_16 = ((void*)0);
    char *VAR_17 = ((void*)0);

    VAR_1 = VAR_7[0];

    if (VAR_6 != 2) {
        FUNC_11();
        goto finish;
    }

    VAR_11 = FUNC_4(VAR_2,
        (const UInt8 *) VAR_7[1], FUNC_10(VAR_7[1]), VAR_0);
    if (!VAR_11) {
        FUNC_6(VAR_5, "Can't create path from %s\n", VAR_7[1]);
        goto finish;
    }

    VAR_12 = FUNC_0(VAR_2, VAR_11);
    if (!VAR_12) {
        FUNC_6(VAR_5, "Can't create bundle at path %s\n", VAR_7[1]);
        goto finish;
    }

    VAR_13 = FUNC_1(VAR_12);
    if (!VAR_13) {
        FUNC_6(VAR_5, "Can't get info dictionary from bundle\n");
        goto finish;
    }

    VAR_14 = FUNC_2(VAR_13, VAR_3);
    VAR_15 = FUNC_2(VAR_13, VAR_4);

    if (!VAR_14 && !VAR_15) {
        FUNC_6(VAR_5, "This kext does not have a value for NSHumanReadableCopyright");
        goto finish;
    }

    if (VAR_14) {
        FUNC_6(VAR_5, "Warning: This kext has a value for CFBundleGetInfoString.\n"
            "This key is obsolete, and may be removed from the kext's Info.plist.\n"
            "It has been replaced by CFBundleVersion and NSHumanReadableCopyright.\n\n");

        VAR_16 = FUNC_5(VAR_14);
        if (!VAR_16) goto finish;

        VAR_9 = FUNC_8(VAR_16);
    }

    if (VAR_15) {
        VAR_17 = FUNC_5(VAR_15);
        if (!VAR_17) goto finish;

        VAR_10 = FUNC_8(VAR_17);
    }

    if (!VAR_10) {
        if (VAR_9) {
            FUNC_6(VAR_5, "Warning: The copyright string in NSHumanReadableCopyright is invalid,\n"
                    "but the string in CFBundleGetInfoString is valid.  CFBundleGetInfoString is\n"
                    "obsolete.  Please migrate your copyright string to NSHumanReadableCopyright.\n\n");
        } else {
            FUNC_6(VAR_5, "Error: There is no valid copyright string for this kext.\n\n");
            FUNC_9();
            goto finish;
        }
    }

    VAR_8 = 0;
finish:
    if (VAR_11) FUNC_3(VAR_11);
    if (VAR_12) FUNC_3(VAR_12);
    if (VAR_16) FUNC_7(VAR_16);
    if (VAR_17) FUNC_7(VAR_17);

    return VAR_8;
}
