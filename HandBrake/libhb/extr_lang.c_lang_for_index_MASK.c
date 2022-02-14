
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iso639_lang_t ;


 int const VAR_0 ;
 int VAR_1 ;
 int const* VAR_2 ;

const iso639_lang_t * FUNC_0( int VAR_3 )
{
    if (VAR_3 == -1)
        return &VAR_0;

    if (VAR_3 < 0 || VAR_3 >= VAR_1)
        return ((void*)0);

    return &VAR_2[VAR_3];
}
