
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct spi_transfer {int len; } ;
struct tdo24m {int* buf; int msg; int spi_dev; int color_invert; struct spi_transfer xfer; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct tdo24m *VAR_1, uint32_t *VAR_2)
{
 struct spi_transfer *VAR_3 = &VAR_1->xfer;
 uint32_t VAR_4, *VAR_5 = VAR_2;
 int VAR_6, VAR_7 = 0;

 for (; *VAR_5 != VAR_0; VAR_5++) {
  if (!VAR_1->color_invert && *VAR_5 == FUNC_0(0x21))
   continue;

  VAR_6 = (*VAR_5 >> 30) & 0x3;

  VAR_4 = *VAR_5 << (7 - VAR_6);
  switch (VAR_6) {
  case 0:
   VAR_1->buf[0] = (VAR_4 >> 8) & 0xff;
   VAR_1->buf[1] = VAR_4 & 0xff;
   break;
  case 1:
   VAR_1->buf[0] = (VAR_4 >> 16) & 0xff;
   VAR_1->buf[1] = (VAR_4 >> 8) & 0xff;
   VAR_1->buf[2] = VAR_4 & 0xff;
   break;
  case 2:
   VAR_1->buf[0] = (VAR_4 >> 24) & 0xff;
   VAR_1->buf[1] = (VAR_4 >> 16) & 0xff;
   VAR_1->buf[2] = (VAR_4 >> 8) & 0xff;
   VAR_1->buf[3] = VAR_4 & 0xff;
   break;
  default:
   continue;
  }
  VAR_3->len = VAR_6 + 2;
  VAR_7 = FUNC_1(VAR_1->spi_dev, &VAR_1->msg);
  if (VAR_7)
   break;
 }

 return VAR_7;
}
