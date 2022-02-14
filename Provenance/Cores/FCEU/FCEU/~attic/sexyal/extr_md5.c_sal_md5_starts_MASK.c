
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sal_md5_context {int* state; scalar_t__* total; } ;



void FUNC_0( struct sal_md5_context *VAR_0 )
{
    VAR_0->total[0] = 0;
    VAR_0->total[1] = 0;
    VAR_0->state[0] = 0x67452301;
    VAR_0->state[1] = 0xEFCDAB89;
    VAR_0->state[2] = 0x98BADCFE;
    VAR_0->state[3] = 0x10325476;
}
