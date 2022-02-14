
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int* i; int buf; scalar_t__* in; } ;
typedef TYPE_1__ MD5_CTX ;


 int FUNC_0 (int ,int*) ;

void FUNC_1(MD5_CTX *VAR_0, uint8_t *VAR_1, unsigned int VAR_2) {
  uint32_t VAR_3[16];
  int VAR_4;
  unsigned int VAR_5, VAR_6;


  VAR_4 = (int)((VAR_0->i[0] >> 3) & 0x3F);


  if ((VAR_0->i[0] + ((uint32_t)VAR_2 << 3)) < VAR_0->i[0]) VAR_0->i[1]++;
  VAR_0->i[0] += ((uint32_t)VAR_2 << 3);
  VAR_0->i[1] += ((uint32_t)VAR_2 >> 29);

  while (VAR_2--) {

    VAR_0->in[VAR_4++] = *VAR_1++;


    if (VAR_4 == 0x40) {
      for (VAR_5 = 0, VAR_6 = 0; VAR_5 < 16; VAR_5++, VAR_6 += 4)
        VAR_3[VAR_5] = (((uint32_t)VAR_0->in[VAR_6 + 3]) << 24) | (((uint32_t)VAR_0->in[VAR_6 + 2]) << 16) |
                (((uint32_t)VAR_0->in[VAR_6 + 1]) << 8) | ((uint32_t)VAR_0->in[VAR_6]);
      FUNC_0(VAR_0->buf, VAR_3);
      VAR_4 = 0;
    }
  }
}
