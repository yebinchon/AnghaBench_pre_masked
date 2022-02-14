
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isowbuf_t {int write; int wbits; int* data; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct isowbuf_t *VAR_1, u32 VAR_2, int VAR_3)
{
 int VAR_4 = VAR_1->write;
 VAR_2 <<= VAR_1->wbits;
 VAR_2 |= VAR_1->data[VAR_4];
 VAR_3 += VAR_1->wbits;
 while (VAR_3 >= 8) {
  VAR_1->data[VAR_4++] = VAR_2 & 0xff;
  VAR_4 %= VAR_0;
  VAR_2 >>= 8;
  VAR_3 -= 8;
 }
 VAR_1->wbits = VAR_3;
 VAR_1->data[VAR_4] = VAR_2 & 0xff;
 VAR_1->write = VAR_4;
}
