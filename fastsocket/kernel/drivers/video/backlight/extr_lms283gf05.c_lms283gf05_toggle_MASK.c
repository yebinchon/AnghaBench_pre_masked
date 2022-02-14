
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct lms283gf05_seq {char reg; int value; int delay; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct spi_device*,char*,int) ;

__attribute__((used)) static void FUNC_2(struct spi_device *VAR_0,
   struct lms283gf05_seq *VAR_1, int VAR_2)
{
 char VAR_3[3];
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3[0] = 0x74;
  VAR_3[1] = 0x00;
  VAR_3[2] = VAR_1[VAR_4].reg;
  FUNC_1(VAR_0, VAR_3, 3);

  VAR_3[0] = 0x76;
  VAR_3[1] = VAR_1[VAR_4].value >> 8;
  VAR_3[2] = VAR_1[VAR_4].value & 0xff;
  FUNC_1(VAR_0, VAR_3, 3);

  FUNC_0(VAR_1[VAR_4].delay);
 }
}
