
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct au1550_spi {TYPE_1__* pdata; } ;
struct TYPE_2__ {int mainclk_hz; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(struct au1550_spi *VAR_0, unsigned VAR_1)
{
 u32 VAR_2 = VAR_0->pdata->mainclk_hz;
 u32 VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  VAR_4 = VAR_2 / VAR_1 / (4 << VAR_3);

  if (VAR_4 < (4 + 1)) {
   VAR_4 = (4 + 1);
   break;
  }
  if (VAR_4 <= (63 + 1))
   break;
 }
 if (VAR_3 == 4) {
  VAR_3 = 3;
  VAR_4 = (63 + 1);
 }
 VAR_4--;
 return FUNC_0(VAR_4) | FUNC_1(VAR_3);
}
