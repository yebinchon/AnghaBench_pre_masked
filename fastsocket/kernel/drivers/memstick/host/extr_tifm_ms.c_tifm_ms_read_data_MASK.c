
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tifm_ms {int io_pos; int io_word; struct tifm_dev* dev; } ;
struct tifm_dev {scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_2(struct tifm_ms *VAR_3,
          unsigned char *VAR_4, unsigned int VAR_5)
{
 struct tifm_dev *VAR_6 = VAR_3->dev;
 unsigned int VAR_7 = 0;

 while (VAR_3->io_pos && VAR_5) {
  VAR_4[VAR_7++] = VAR_3->io_word & 0xff;
  VAR_3->io_word >>= 8;
  VAR_5--;
  VAR_3->io_pos--;
 }

 if (!VAR_5)
  return VAR_7;

 while (!(VAR_2 & FUNC_1(VAR_6->addr + VAR_1))) {
  if (VAR_5 < 4)
   break;
  *(unsigned int *)(VAR_4 + VAR_7) = FUNC_0(VAR_6->addr
          + VAR_0);
  VAR_5 -= 4;
  VAR_7 += 4;
 }

 if (VAR_5
     && !(VAR_2 & FUNC_1(VAR_6->addr + VAR_1))) {
  VAR_3->io_word = FUNC_1(VAR_6->addr + VAR_0);
  for (VAR_3->io_pos = 4; VAR_3->io_pos; --VAR_3->io_pos) {
   VAR_4[VAR_7++] = VAR_3->io_word & 0xff;
   VAR_3->io_word >>= 8;
   VAR_5--;
   if (!VAR_5)
    break;
  }
 }

 return VAR_7;
}
