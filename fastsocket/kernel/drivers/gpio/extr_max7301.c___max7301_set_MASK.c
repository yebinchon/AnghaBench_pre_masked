
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max7301 {int out_level; int spi; } ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct max7301 *VAR_0, unsigned VAR_1, int VAR_2)
{
 if (VAR_2) {
  VAR_0->out_level |= 1 << VAR_1;
  return FUNC_0(VAR_0->spi, 0x20 + VAR_1, 0x01);
 } else {
  VAR_0->out_level &= ~(1 << VAR_1);
  return FUNC_0(VAR_0->spi, 0x20 + VAR_1, 0x00);
 }
}
