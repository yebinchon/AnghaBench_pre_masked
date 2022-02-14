
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CMSampleBufferRef ;
typedef int CFIndex ;
typedef int CFDictionaryRef ;
typedef int CFBooleanRef ;
typedef int CFArrayRef ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,void const**) ;
 int FUNC_4 (int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(CMSampleBufferRef VAR_1, bool *VAR_2)
{
    CFArrayRef VAR_3;
    CFDictionaryRef VAR_4;
    CFBooleanRef VAR_5;
    CFIndex VAR_6;

    VAR_3 = FUNC_4(VAR_1, 0);
    VAR_6 = !VAR_3 ? 0 : FUNC_0(VAR_3);

    if (!VAR_6) {
        *VAR_2 = 1;
        return;
    }

    VAR_4 = FUNC_1(VAR_3, 0);

    if (FUNC_3(VAR_4,
                                      VAR_0,
                                      (const void **)&VAR_5))
    {
        *VAR_2 = !FUNC_2(VAR_5);
    } else {
        *VAR_2 = 1;
    }
}
