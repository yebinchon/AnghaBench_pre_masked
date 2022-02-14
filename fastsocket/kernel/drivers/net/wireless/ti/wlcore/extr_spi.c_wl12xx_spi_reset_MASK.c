
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; struct spi_transfer* tx_buf; } ;
typedef struct spi_transfer u8 ;
typedef int t ;
struct wl12xx_spi_glue {int dev; } ;
struct spi_message {int dummy; } ;
struct device {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct wl12xx_spi_glue* FUNC_1 (int ) ;
 int FUNC_2 (struct spi_transfer*) ;
 struct spi_transfer* FUNC_3 (int,int ) ;
 int FUNC_4 (struct spi_transfer*,int,int) ;
 int FUNC_5 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_6 (struct spi_message*) ;
 int FUNC_7 (int ,struct spi_message*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct device *VAR_2)
{
 struct wl12xx_spi_glue *VAR_3 = FUNC_1(VAR_2->parent);
 u8 *VAR_4;
 struct spi_transfer VAR_5;
 struct spi_message VAR_6;

 VAR_4 = FUNC_3(VAR_1, VAR_0);
 if (!VAR_4) {
  FUNC_0(VAR_2->parent,
   "could not allocate cmd for spi reset\n");
  return;
 }

 FUNC_4(&VAR_5, 0, sizeof(VAR_5));
 FUNC_6(&VAR_6);

 FUNC_4(VAR_4, 0xff, VAR_1);

 VAR_5.tx_buf = VAR_4;
 VAR_5.len = VAR_1;
 FUNC_5(&VAR_5, &VAR_6);

 FUNC_7(FUNC_8(VAR_3->dev), &VAR_6);

 FUNC_2(VAR_4);
}
