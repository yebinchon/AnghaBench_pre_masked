
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct spi_transfer {int len; int const* tx_buf; } ;
struct spi_message {int dummy; } ;
struct if_spi_card {int spi; } ;
typedef int reg_trans ;
typedef int reg_out ;
typedef int data_trans ;
typedef int const __le16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int const FUNC_1 (int) ;
 int FUNC_2 (struct spi_transfer*,int ,int) ;
 int FUNC_3 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_4 (struct spi_message*) ;
 int FUNC_5 (int ,struct spi_message*) ;
 int FUNC_6 (struct if_spi_card*) ;
 int FUNC_7 (struct if_spi_card*) ;

__attribute__((used)) static int FUNC_8(struct if_spi_card *VAR_1, u16 VAR_2, const u8 *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 __le16 VAR_6 = FUNC_1(VAR_2 | VAR_0);
 struct spi_message VAR_7;
 struct spi_transfer VAR_8;
 struct spi_transfer VAR_9;

 FUNC_4(&VAR_7);
 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 FUNC_2(&VAR_9, 0, sizeof(VAR_9));



 FUNC_0(VAR_4 & 0x1);

 FUNC_7(VAR_1);


 VAR_8.tx_buf = &VAR_6;
 VAR_8.len = sizeof(VAR_6);

 VAR_9.tx_buf = VAR_3;
 VAR_9.len = VAR_4;

 FUNC_3(&VAR_8, &VAR_7);
 FUNC_3(&VAR_9, &VAR_7);

 VAR_5 = FUNC_5(VAR_1->spi, &VAR_7);
 FUNC_6(VAR_1);
 return VAR_5;
}
