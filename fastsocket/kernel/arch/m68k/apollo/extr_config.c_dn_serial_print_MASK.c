
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char rhrb_thrb; int srb_csrb; } ;


 TYPE_1__ VAR_0 ;

void FUNC_0 (const char *VAR_1)
{
    while (*VAR_1) {
        if (*VAR_1 == '\n') {
            VAR_0 = (unsigned char)'\r';
            while (!(VAR_0 & 0x4))
                ;
        }
        VAR_0 = (unsigned char)*VAR_1++;
        while (!(VAR_0 & 0x4))
            ;
    }
}
