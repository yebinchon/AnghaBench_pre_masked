
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* iso639_1; } ;
typedef TYPE_1__ iso639_lang_t ;



int FUNC_0(const iso639_lang_t *VAR_0)
{
    int VAR_1 = 0;

    if (VAR_0)
        VAR_1 = (VAR_0->iso639_1[0] << 8) | VAR_0->iso639_1[1];

    return VAR_1;
}
