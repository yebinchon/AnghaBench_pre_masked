
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_4__ {void** buf; } ;
typedef TYPE_1__ MD5_CTX ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(MD5_CTX *VAR_0) {
  FUNC_0(VAR_0, 0, sizeof(MD5_CTX));


  VAR_0->buf[0] = (uint32_t)0x67452301;
  VAR_0->buf[1] = (uint32_t)0xefcdab89;
  VAR_0->buf[2] = (uint32_t)0x98badcfe;
  VAR_0->buf[3] = (uint32_t)0x10325476;
}
