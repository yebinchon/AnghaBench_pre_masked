
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* xpcm_buffer; unsigned char* xpcm_ptr; int fifo_bytes; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

void FUNC_3(short *VAR_6, int VAR_7, int VAR_8)
{
  unsigned char *VAR_9 = VAR_1.xpcm_buffer;
  unsigned char *VAR_10 = VAR_1.xpcm_ptr;
  int VAR_11, VAR_12 = 0;

  if (VAR_9 == VAR_10) goto end;

  for (; VAR_7 > 0 && VAR_9 < VAR_10; VAR_9++)
  {
    VAR_11 = *VAR_9 >> 4;
    FUNC_0();

    for (VAR_12 += VAR_5; VAR_12 > (1<<10) && VAR_7 > 0; VAR_12 -= (1<<10), VAR_7--) {
      *VAR_6++ += VAR_3;
      if (VAR_8) { VAR_6[0] = VAR_6[-1]; VAR_6++; }
    }

    VAR_11 = *VAR_9 & 0xf;
    FUNC_0();

    for (VAR_12 += VAR_5; VAR_12 > (1<<10) && VAR_7 > 0; VAR_12 -= (1<<10), VAR_7--) {
      *VAR_6++ += VAR_3;
      if (VAR_8) { VAR_6[0] = VAR_6[-1]; VAR_6++; }
    }


    VAR_4 += (VAR_3 < 0) ? -1 : 1;
    if (VAR_4 < -16 || VAR_4 > 16) VAR_3 -= VAR_3 >> 5;
  }

  if (VAR_9 < VAR_10) {
    int VAR_13 = VAR_10 - VAR_9;
    FUNC_2(VAR_1.xpcm_buffer, VAR_9, VAR_13);
    VAR_1.xpcm_ptr = VAR_1.xpcm_buffer + VAR_13;
    FUNC_1(VAR_0, "xpcm update: over %i", VAR_13);

    VAR_1.fifo_bytes = VAR_13;
    return;
  }

  FUNC_1(VAR_0, "xpcm update: under %i", VAR_7);
  VAR_1.xpcm_ptr = VAR_1.xpcm_buffer;

end:
  if (VAR_8)

    for (; VAR_7 > 0; VAR_6+=2, VAR_7--)
      VAR_6[1] = VAR_6[0];

  VAR_3 = VAR_4 = 0;
  VAR_2 = 0x7f;
}
