
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* ABCD; scalar_t__ len; } ;
typedef TYPE_1__ AVMD5 ;



void FUNC_0(AVMD5 *VAR_0)
{
    VAR_0->len = 0;

    VAR_0->ABCD[0] = 0x10325476;
    VAR_0->ABCD[1] = 0x98badcfe;
    VAR_0->ABCD[2] = 0xefcdab89;
    VAR_0->ABCD[3] = 0x67452301;
}
