
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {char const* pattern; int pattern_ignore_case; } ;
typedef TYPE_1__ mz_zip_reader ;



void FUNC_0(void *VAR_0, const char *VAR_1, uint8_t VAR_2)
{
    mz_zip_reader *VAR_3 = (mz_zip_reader *)VAR_0;
    VAR_3->pattern = VAR_1;
    VAR_3->pattern_ignore_case = VAR_2;
}
