
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdio_func {int num; } ;
struct btmrvl_sdio_card {int ioport; struct sdio_func* func; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct sdio_func*) ;
 int FUNC_3 (struct sdio_func*,int ) ;
 int FUNC_4 (struct sdio_func*) ;
 int FUNC_5 (struct sdio_func*) ;
 int FUNC_6 (struct sdio_func*,int ,int*) ;
 int FUNC_7 (struct sdio_func*) ;
 int FUNC_8 (struct sdio_func*) ;
 int FUNC_9 (struct sdio_func*,int ) ;
 int FUNC_10 (struct sdio_func*,struct btmrvl_sdio_card*) ;

__attribute__((used)) static int FUNC_11(struct btmrvl_sdio_card *VAR_7)
{
 struct sdio_func *VAR_8;
 u8 VAR_9;
 int VAR_10 = 0;

 if (!VAR_7 || !VAR_7->func) {
  FUNC_1("Error: card or function is NULL!");
  VAR_10 = -VAR_0;
  goto failed;
 }

 VAR_8 = VAR_7->func;

 FUNC_2(VAR_8);

 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10) {
  FUNC_1("sdio_enable_func() failed: ret=%d", VAR_10);
  VAR_10 = -VAR_1;
  goto release_host;
 }

 VAR_10 = FUNC_3(VAR_8, VAR_6);
 if (VAR_10) {
  FUNC_1("sdio_claim_irq failed: ret=%d", VAR_10);
  VAR_10 = -VAR_1;
  goto disable_func;
 }

 VAR_10 = FUNC_9(VAR_7->func, VAR_5);
 if (VAR_10) {
  FUNC_1("cannot set SDIO block size");
  VAR_10 = -VAR_1;
  goto release_irq;
 }

 VAR_9 = FUNC_6(VAR_8, VAR_2, &VAR_10);
 if (VAR_10 < 0) {
  VAR_10 = -VAR_1;
  goto release_irq;
 }

 VAR_7->ioport = VAR_9;

 VAR_9 = FUNC_6(VAR_8, VAR_3, &VAR_10);
 if (VAR_10 < 0) {
  VAR_10 = -VAR_1;
  goto release_irq;
 }

 VAR_7->ioport |= (VAR_9 << 8);

 VAR_9 = FUNC_6(VAR_8, VAR_4, &VAR_10);
 if (VAR_10 < 0) {
  VAR_10 = -VAR_1;
  goto release_irq;
 }

 VAR_7->ioport |= (VAR_9 << 16);

 FUNC_0("SDIO FUNC%d IO port: 0x%x", VAR_8->num, VAR_7->ioport);

 FUNC_10(VAR_8, VAR_7);

 FUNC_7(VAR_8);

 return 0;

release_irq:
 FUNC_8(VAR_8);

disable_func:
 FUNC_4(VAR_8);

release_host:
 FUNC_7(VAR_8);

failed:
 return VAR_10;
}
