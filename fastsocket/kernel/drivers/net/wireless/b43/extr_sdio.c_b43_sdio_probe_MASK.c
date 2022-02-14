
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sdio_func_tuple {int code; int* data; int size; struct sdio_func_tuple* next; } ;
struct sdio_func {int dev; struct sdio_func_tuple* tuples; } ;
struct sdio_device_id {int dummy; } ;
struct b43_sdio {int ssb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int,int) ;
 int FUNC_3 (struct b43_sdio*) ;
 struct b43_sdio* FUNC_4 (int,int ) ;
 int FUNC_5 (struct sdio_func*) ;
 int FUNC_6 (struct sdio_func*) ;
 int FUNC_7 (struct sdio_func*) ;
 int FUNC_8 (struct sdio_func*) ;
 int FUNC_9 (struct sdio_func*,int ) ;
 int FUNC_10 (struct sdio_func*,struct b43_sdio*) ;
 int FUNC_11 (int *,struct sdio_func*,int ) ;

__attribute__((used)) static int FUNC_12(struct sdio_func *VAR_4,
        const struct sdio_device_id *VAR_5)
{
 struct b43_sdio *VAR_6;
 struct sdio_func_tuple *VAR_7;
 u16 VAR_8 = 0, VAR_9 = 0;
 int VAR_10;


 VAR_7 = VAR_4->tuples;
 while (VAR_7) {
  switch (VAR_7->code) {
  case 0x80:
   switch (VAR_7->data[0]) {
   case 128:
    if (VAR_7->size != 5)
     break;
    VAR_8 = VAR_7->data[1] | (VAR_7->data[2]<<8);
    VAR_9 = VAR_7->data[3] | (VAR_7->data[4]<<8);
    FUNC_2(&VAR_4->dev, "Chip ID %04x:%04x\n",
      VAR_8, VAR_9);
    break;
   default:
    break;
   }
   break;
  default:
   break;
  }
  VAR_7 = VAR_7->next;
 }
 if (!VAR_8 || !VAR_9) {
  VAR_10 = -VAR_1;
  goto out;
 }

 FUNC_5(VAR_4);
 VAR_10 = FUNC_9(VAR_4, VAR_0);
 if (VAR_10) {
  FUNC_1(&VAR_4->dev, "failed to set block size to %u bytes,"
   " error %d\n", VAR_0, VAR_10);
  goto err_release_host;
 }
 VAR_10 = FUNC_7(VAR_4);
 if (VAR_10) {
  FUNC_1(&VAR_4->dev, "failed to enable func, error %d\n", VAR_10);
  goto err_release_host;
 }
 FUNC_8(VAR_4);

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_3);
 if (!VAR_6) {
  VAR_10 = -VAR_2;
  FUNC_1(&VAR_4->dev, "failed to allocate ssb bus\n");
  goto err_disable_func;
 }
 VAR_10 = FUNC_11(&VAR_6->ssb, VAR_4,
      FUNC_0(VAR_8, VAR_9));
 if (VAR_10) {
  FUNC_1(&VAR_4->dev, "failed to register ssb sdio bus,"
   " error %d\n", VAR_10);
  goto err_free_ssb;
 }
 FUNC_10(VAR_4, VAR_6);

 return 0;

err_free_ssb:
 FUNC_3(VAR_6);
err_disable_func:
 FUNC_5(VAR_4);
 FUNC_6(VAR_4);
err_release_host:
 FUNC_8(VAR_4);
out:
 return VAR_10;
}
