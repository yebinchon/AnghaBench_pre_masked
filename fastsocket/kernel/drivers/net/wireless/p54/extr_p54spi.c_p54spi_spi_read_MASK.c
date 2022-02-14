
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int t ;
struct spi_transfer {int len; void* rx_buf; int * tx_buf; } ;
struct spi_message {int dummy; } ;
struct p54s_priv {int spi; } ;
typedef int addr ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct spi_transfer*,int ,int) ;
 int FUNC_2 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_3 (struct spi_message*) ;
 int FUNC_4 (int ,struct spi_message*) ;

__attribute__((used)) static void FUNC_5(struct p54s_priv *VAR_1, u8 VAR_2,
         void *VAR_3, size_t VAR_4)
{
 struct spi_transfer VAR_5[2];
 struct spi_message VAR_6;
 __le16 VAR_7;


 VAR_7 = FUNC_0(VAR_2 << 8 | VAR_0);

 FUNC_3(&VAR_6);
 FUNC_1(VAR_5, 0, sizeof(VAR_5));

 VAR_5[0].tx_buf = &VAR_7;
 VAR_5[0].len = sizeof(VAR_7);
 FUNC_2(&VAR_5[0], &VAR_6);

 VAR_5[1].rx_buf = VAR_3;
 VAR_5[1].len = VAR_4;
 FUNC_2(&VAR_5[1], &VAR_6);

 FUNC_4(VAR_1->spi, &VAR_6);
}
