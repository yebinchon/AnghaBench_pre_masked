
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int* i; int* buf; void** digest; scalar_t__* in; } ;
typedef TYPE_1__ MD5_CTX ;


 int FUNC_0 (TYPE_1__*,int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int*,int*) ;

void FUNC_2(MD5_CTX *VAR_1) {
  uint32_t VAR_2[16];
  int VAR_3;
  unsigned int VAR_4, VAR_5;
  unsigned int VAR_6;


  VAR_2[14] = VAR_1->i[0];
  VAR_2[15] = VAR_1->i[1];


  VAR_3 = (int)((VAR_1->i[0] >> 3) & 0x3F);


  VAR_6 = (VAR_3 < 56) ? (56 - VAR_3) : (120 - VAR_3);
  FUNC_0(VAR_1, VAR_0, VAR_6);


  for (VAR_4 = 0, VAR_5 = 0; VAR_4 < 14; VAR_4++, VAR_5 += 4)
    VAR_2[VAR_4] = (((uint32_t)VAR_1->in[VAR_5 + 3]) << 24) | (((uint32_t)VAR_1->in[VAR_5 + 2]) << 16) |
            (((uint32_t)VAR_1->in[VAR_5 + 1]) << 8) | ((uint32_t)VAR_1->in[VAR_5]);
  FUNC_1(VAR_1->buf, VAR_2);


  for (VAR_4 = 0, VAR_5 = 0; VAR_4 < 4; VAR_4++, VAR_5 += 4) {
    VAR_1->digest[VAR_5] = (uint8_t)(VAR_1->buf[VAR_4] & 0xFF);
    VAR_1->digest[VAR_5 + 1] = (uint8_t)((VAR_1->buf[VAR_4] >> 8) & 0xFF);
    VAR_1->digest[VAR_5 + 2] = (uint8_t)((VAR_1->buf[VAR_4] >> 16) & 0xFF);
    VAR_1->digest[VAR_5 + 3] = (uint8_t)((VAR_1->buf[VAR_4] >> 24) & 0xFF);
  }
}
