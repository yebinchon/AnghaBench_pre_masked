
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mipid_device {TYPE_2__* spi; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int member_0; int member_1; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct mipid_device*) ;
 int FUNC_2 (struct mipid_device*,int,int*,int) ;
 int FUNC_3 (struct mipid_device*,int,int*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct mipid_device *VAR_0)
{
 int VAR_1;
 u8 VAR_2[2];
 static const struct {
  int cmd;
  int wlen;
  u16 wbuf[3];
 } *VAR_3, VAR_4[7] = {
  { 0xb0, 4, { 0x0101, 0x01fe, } },
  { 0xb1, 4, { 0x01de, 0x0121, } },
  { 0xc2, 4, { 0x0100, 0x0100, } },
  { 0xbd, 2, { 0x0100, } },
  { 0xc2, 4, { 0x01fc, 0x0103, } },
  { 0xb4, 0, },
  { 0x00, 0, },
 };

 VAR_3 = VAR_4;
 for (VAR_1 = 0; VAR_1 < 3; VAR_1++, VAR_3++)
  FUNC_3(VAR_0, VAR_3->cmd, (u8 *)VAR_3->wbuf, VAR_3->wlen);

 FUNC_4(10);
 FUNC_2(VAR_0, VAR_3->cmd, VAR_2, 2);
 VAR_3++;

 for (VAR_1 = 0; VAR_1 < 3; VAR_1++, VAR_3++) {
  FUNC_4(10);
  FUNC_3(VAR_0, VAR_3->cmd, (u8 *)VAR_3->wbuf, VAR_3->wlen);
 }

 FUNC_0(&VAR_0->spi->dev, "ESD mode 2 state %02x\n", VAR_2[1]);
 if (VAR_2[1] == 0x00)
  FUNC_1(VAR_0);
}
