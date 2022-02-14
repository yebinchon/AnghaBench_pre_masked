
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_buffer_length; scalar_t__ transfer_buffer; } ;



__attribute__((used)) static void FUNC_0(struct urb *VAR_0, int VAR_1[],
     int VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1[0] == 256 && VAR_1[1] == 256)
  return;

 if (VAR_2 == 4) {
  short *VAR_4, *VAR_5;
  VAR_4 = (short *)VAR_0->transfer_buffer;
  VAR_5 = VAR_4 + VAR_0->transfer_buffer_length / sizeof(*VAR_4);

  for (; VAR_4 < VAR_5; ++VAR_4) {
   *VAR_4 = (*VAR_4 * VAR_1[VAR_3 & 1]) >> 8;
   ++VAR_3;
  }
 } else if (VAR_2 == 6) {
  unsigned char *VAR_6, *VAR_7;
  VAR_6 = (unsigned char *)VAR_0->transfer_buffer;
  VAR_7 = VAR_6 + VAR_0->transfer_buffer_length;

  for (; VAR_6 < VAR_7; VAR_6 += 3) {
   int VAR_8;
   VAR_8 = VAR_6[0] + (VAR_6[1] << 8) + ((signed char)VAR_6[2] << 16);
   VAR_8 = (VAR_8 * VAR_1[VAR_3 & 1]) >> 8;
   VAR_6[0] = VAR_8;
   VAR_6[1] = VAR_8 >> 8;
   VAR_6[2] = VAR_8 >> 16;
   ++VAR_3;
  }
 }
}
