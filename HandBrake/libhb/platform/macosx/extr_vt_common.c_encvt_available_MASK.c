
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CFStringRef ;
typedef scalar_t__ CFIndex ;
typedef int CFDictionaryRef ;
typedef int CFArrayRef ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int VAR_0 ;

int FUNC_6(CFStringRef VAR_1)
{
    CFArrayRef VAR_2;
    FUNC_5(((void*)0), &VAR_2);
    CFIndex VAR_3 = FUNC_0(VAR_2);

    for (CFIndex VAR_4 = 0; VAR_4 < VAR_3; VAR_4++ )
    {
        CFDictionaryRef VAR_5 = FUNC_1(VAR_2, VAR_4);
        CFStringRef VAR_6 = FUNC_2(VAR_5, VAR_0);
        if (FUNC_3(VAR_6, VAR_1))
        {
            FUNC_4(VAR_2);
            return 1;
        }
    }
    FUNC_4(VAR_2);
    return 0;
}
