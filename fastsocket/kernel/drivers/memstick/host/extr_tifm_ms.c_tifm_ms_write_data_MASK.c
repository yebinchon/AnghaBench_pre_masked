
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tifm_ms {int io_pos; unsigned char io_word; struct tifm_dev* dev; } ;
struct tifm_dev {scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_3(struct tifm_ms *VAR_5,
           unsigned char *VAR_6, unsigned int VAR_7)
{
 struct tifm_dev *VAR_8 = VAR_5->dev;
 unsigned int VAR_9 = 0;

 if (VAR_5->io_pos) {
  while (VAR_5->io_pos < 4 && VAR_7) {
   VAR_5->io_word |= VAR_6[VAR_9++] << (VAR_5->io_pos * 8);
   VAR_5->io_pos++;
   VAR_7--;
  }
 }

 if (VAR_5->io_pos == 4
     && !(VAR_3 & FUNC_1(VAR_8->addr + VAR_1))) {
  FUNC_2(VAR_4 | FUNC_1(VAR_8->addr + VAR_2),
         VAR_8->addr + VAR_2);
  FUNC_2(VAR_5->io_word, VAR_8->addr + VAR_0);
  VAR_5->io_pos = 0;
  VAR_5->io_word = 0;
 } else if (VAR_5->io_pos) {
  return VAR_9;
 }

 if (!VAR_7)
  return VAR_9;

 while (!(VAR_3 & FUNC_1(VAR_8->addr + VAR_1))) {
  if (VAR_7 < 4)
   break;
  FUNC_2(VAR_4 | FUNC_1(VAR_8->addr + VAR_2),
         VAR_8->addr + VAR_2);
  FUNC_0(*(unsigned int *)(VAR_6 + VAR_9),
        VAR_8->addr + VAR_0);
  VAR_7 -= 4;
  VAR_9 += 4;
 }

 switch (VAR_7) {
 case 3:
  VAR_5->io_word |= VAR_6[VAR_9 + 2] << 16;
  VAR_5->io_pos++;
 case 2:
  VAR_5->io_word |= VAR_6[VAR_9 + 1] << 8;
  VAR_5->io_pos++;
 case 1:
  VAR_5->io_word |= VAR_6[VAR_9];
  VAR_5->io_pos++;
 }

 VAR_9 += VAR_5->io_pos;

 return VAR_9;
}
