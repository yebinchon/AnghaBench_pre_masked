
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jmb38x_ms_host {int io_pos; unsigned char* io_word; scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned char,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_3(struct jmb38x_ms_host *VAR_3,
      unsigned char *VAR_4,
      unsigned int VAR_5)
{
 unsigned int VAR_6 = 0;

 if (VAR_3->io_pos) {
  while (VAR_3->io_pos < 4 && VAR_5) {
   VAR_3->io_word[0] |= VAR_4[VAR_6++] << (VAR_3->io_pos * 8);
   VAR_3->io_pos++;
   VAR_5--;
  }
 }

 if (VAR_3->io_pos == 4
     && !(VAR_2 & FUNC_1(VAR_3->addr + VAR_1))) {
  FUNC_2(VAR_3->io_word[0], VAR_3->addr + VAR_0);
  VAR_3->io_pos = 0;
  VAR_3->io_word[0] = 0;
 } else if (VAR_3->io_pos) {
  return VAR_6;
 }

 if (!VAR_5)
  return VAR_6;

 while (!(VAR_2 & FUNC_1(VAR_3->addr + VAR_1))) {
  if (VAR_5 < 4)
   break;

  FUNC_0(*(unsigned int *)(VAR_4 + VAR_6),
        VAR_3->addr + VAR_0);
  VAR_5 -= 4;
  VAR_6 += 4;
 }

 switch (VAR_5) {
 case 3:
  VAR_3->io_word[0] |= VAR_4[VAR_6 + 2] << 16;
  VAR_3->io_pos++;
 case 2:
  VAR_3->io_word[0] |= VAR_4[VAR_6 + 1] << 8;
  VAR_3->io_pos++;
 case 1:
  VAR_3->io_word[0] |= VAR_4[VAR_6];
  VAR_3->io_pos++;
 }

 VAR_6 += VAR_3->io_pos;

 return VAR_6;
}
