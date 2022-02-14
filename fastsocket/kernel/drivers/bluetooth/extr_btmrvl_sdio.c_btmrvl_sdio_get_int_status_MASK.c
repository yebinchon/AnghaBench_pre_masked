
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct btmrvl_sdio_card {int func; } ;
struct TYPE_2__ {int tx_dnld_rdy; struct btmrvl_sdio_card* card; } ;
struct btmrvl_private {TYPE_1__ btmrvl_dev; } ;
typedef int sdio_ireg ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct btmrvl_private*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct btmrvl_private *VAR_4, u8 * VAR_5)
{
 int VAR_6;
 u8 VAR_7 = 0;
 struct btmrvl_sdio_card *VAR_8 = VAR_4->btmrvl_dev.card;

 *VAR_5 = 0;

 VAR_7 = FUNC_3(VAR_8->func, VAR_2, &VAR_6);
 if (VAR_6) {
  FUNC_1("sdio_readb: read int status register failed");
  VAR_6 = -VAR_1;
  goto done;
 }

 if (VAR_7 != 0) {





  FUNC_0("sdio_ireg = 0x%x", VAR_7);

  FUNC_4(VAR_8->func, ~(VAR_7) & (VAR_0 |
       VAR_3),
       VAR_2, &VAR_6);
  if (VAR_6) {
   FUNC_1("sdio_writeb: clear int status register "
    "failed");
   VAR_6 = -VAR_1;
   goto done;
  }
 }

 if (VAR_7 & VAR_0) {
  if (VAR_4->btmrvl_dev.tx_dnld_rdy)
   FUNC_0("tx_done already received: "
    " int_status=0x%x", VAR_7);
  else
   VAR_4->btmrvl_dev.tx_dnld_rdy = 1;
 }

 if (VAR_7 & VAR_3)
  FUNC_2(VAR_4);

 *VAR_5 = VAR_7;

 VAR_6 = 0;

done:
 return VAR_6;
}
