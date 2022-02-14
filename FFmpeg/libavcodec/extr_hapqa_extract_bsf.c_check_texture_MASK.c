
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int texture; } ;
typedef TYPE_1__ HapqaExtractContext ;



__attribute__((used)) static int FUNC_0(HapqaExtractContext *VAR_0, int VAR_1) {
    if (((VAR_0->texture == 0)&&((VAR_1 & 0x0F) == 0x0F)) ||
        ((VAR_0->texture == 1)&&((VAR_1 & 0x0F) == 0x01)))
    {
        return 1;
    } else {
        return 0;
    }
}
