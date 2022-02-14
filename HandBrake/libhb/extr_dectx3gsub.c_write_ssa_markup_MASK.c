
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int faceStyleFlags; int textColorRGBA; } ;
typedef TYPE_1__ StyleRecord ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(char *VAR_3, StyleRecord *VAR_4)
{
    if (VAR_4 == ((void*)0))
    {
        FUNC_1(VAR_3, "{\\r}");
        return FUNC_2(VAR_3);
    }
    FUNC_1(VAR_3, "{\\i%d\\b%d\\u%d\\1c&H%X&\\1a&H%02X&}",
        !!(VAR_4->faceStyleFlags & VAR_1),
        !!(VAR_4->faceStyleFlags & VAR_0),
        !!(VAR_4->faceStyleFlags & VAR_2),
        FUNC_0(VAR_4->textColorRGBA >> 8),
        255 - (VAR_4->textColorRGBA & 0xFF));

    return FUNC_2(VAR_3);
}
