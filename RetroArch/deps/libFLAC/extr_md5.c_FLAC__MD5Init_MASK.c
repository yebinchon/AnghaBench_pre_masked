
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ p8; } ;
struct TYPE_5__ {int* buf; scalar_t__ capacity; TYPE_1__ internal_buf; scalar_t__* bytes; } ;
typedef TYPE_2__ FLAC__MD5Context ;



void FUNC_0(FLAC__MD5Context *VAR_0)
{
 VAR_0->buf[0] = 0x67452301;
 VAR_0->buf[1] = 0xefcdab89;
 VAR_0->buf[2] = 0x98badcfe;
 VAR_0->buf[3] = 0x10325476;

 VAR_0->bytes[0] = 0;
 VAR_0->bytes[1] = 0;

 VAR_0->internal_buf.p8 = 0;
 VAR_0->capacity = 0;
}
