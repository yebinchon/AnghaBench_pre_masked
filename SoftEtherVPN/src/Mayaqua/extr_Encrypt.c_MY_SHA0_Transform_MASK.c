
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_3__ {int* state; int * buf; } ;
typedef TYPE_1__ MY_SHA0_CTX ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(MY_SHA0_CTX* VAR_0) {
 UINT VAR_1[80];
 UINT VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 UCHAR* VAR_7 = VAR_0->buf;
 int VAR_8;
 for(VAR_8 = 0; VAR_8 < 16; ++VAR_8) {
  UINT VAR_9 = *VAR_7++ << 24;
  VAR_9 |= *VAR_7++ << 16;
  VAR_9 |= *VAR_7++ << 8;
  VAR_9 |= *VAR_7++;
  VAR_1[VAR_8] = VAR_9;
 }
 for(; VAR_8 < 80; VAR_8++) {

  VAR_1[VAR_8] = (1,VAR_1[VAR_8-3] ^ VAR_1[VAR_8-8] ^ VAR_1[VAR_8-14] ^ VAR_1[VAR_8-16]);
 }
 VAR_2 = VAR_0->state[0];
 VAR_3 = VAR_0->state[1];
 VAR_4 = VAR_0->state[2];
 VAR_5 = VAR_0->state[3];
 VAR_6 = VAR_0->state[4];
 for(VAR_8 = 0; VAR_8 < 80; VAR_8++) {
  UINT VAR_10 = FUNC_0(5,VAR_2) + VAR_6 + VAR_1[VAR_8];
  if (VAR_8 < 20)
   VAR_10 += (VAR_5^(VAR_3&(VAR_4^VAR_5))) + 0x5A827999;
  else if ( VAR_8 < 40)
   VAR_10 += (VAR_3^VAR_4^VAR_5) + 0x6ED9EBA1;
  else if ( VAR_8 < 60)
   VAR_10 += ((VAR_3&VAR_4)|(VAR_5&(VAR_3|VAR_4))) + 0x8F1BBCDC;
  else
   VAR_10 += (VAR_3^VAR_4^VAR_5) + 0xCA62C1D6;
  VAR_6 = VAR_5;
  VAR_5 = VAR_4;
  VAR_4 = FUNC_0(30,VAR_3);
  VAR_3 = VAR_2;
  VAR_2 = VAR_10;
 }
 VAR_0->state[0] += VAR_2;
 VAR_0->state[1] += VAR_3;
 VAR_0->state[2] += VAR_4;
 VAR_0->state[3] += VAR_5;
 VAR_0->state[4] += VAR_6;
}
