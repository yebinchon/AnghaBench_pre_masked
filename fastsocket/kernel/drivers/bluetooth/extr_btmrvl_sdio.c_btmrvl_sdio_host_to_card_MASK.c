
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct btmrvl_sdio_card {int func; int ioport; } ;
struct TYPE_2__ {int tx_dnld_rdy; struct btmrvl_sdio_card* card; } ;
struct btmrvl_private {TYPE_1__ btmrvl_dev; } ;


 scalar_t__ FUNC_0 (void*,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (char*,int ,int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_9(struct btmrvl_private *VAR_8,
    u8 *VAR_9, u16 VAR_10)
{
 struct btmrvl_sdio_card *VAR_11 = VAR_8->btmrvl_dev.card;
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14;
 int VAR_15 = 0;
 u8 *VAR_16 = ((void*)0);
 void *VAR_17 = ((void*)0);
 int VAR_18;

 if (!VAR_11 || !VAR_11->func) {
  FUNC_2("card or function is NULL!");
  return -VAR_2;
 }

 VAR_16 = VAR_9;
 if ((unsigned long) VAR_9 & (VAR_0 - 1)) {
  VAR_18 = FUNC_1(VAR_10, VAR_0);
  VAR_17 = FUNC_3(VAR_18, VAR_5);
  if (!VAR_17)
   return -VAR_4;
  VAR_16 = (u8 *) FUNC_0(VAR_17, VAR_0);
  FUNC_4(VAR_16, VAR_9, VAR_10);
 }

 VAR_14 = VAR_7;
 VAR_13 = (VAR_10 + VAR_14 - 1) / VAR_14;

 FUNC_6(VAR_11->func);

 do {

  VAR_12 = FUNC_8(VAR_11->func, VAR_11->ioport, VAR_16,
       VAR_13 * VAR_14);
  if (VAR_12 < 0) {
   VAR_15++;
   FUNC_2("i=%d writesb failed: %d", VAR_15, VAR_12);
   FUNC_5("", VAR_1,
      VAR_9, VAR_10);
   VAR_12 = -VAR_3;
   if (VAR_15 > VAR_6)
    goto exit;
  }
 } while (VAR_12);

 VAR_8->btmrvl_dev.tx_dnld_rdy = 0;

exit:
 FUNC_7(VAR_11->func);

 return VAR_12;
}
