
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* iso639_2b; char* iso639_2; } ;
typedef TYPE_1__ iso639_lang_t ;





 TYPE_1__* FUNC_0 (char*) ;

__attribute__((used)) static char* FUNC_1(int VAR_0, char *VAR_1)
{
    iso639_lang_t *VAR_2;
    char *VAR_3 = ((void*)0);

    switch (VAR_0)
    {
        case 129:
            VAR_3 = VAR_1;
            break;
        case 130:
        case 128:


            VAR_2 = FUNC_0( VAR_1 );
            VAR_3 = VAR_2->iso639_2b ? VAR_2->iso639_2b : VAR_2->iso639_2;
            break;
        default:
            break;
    }
    return VAR_3;
}
