
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
typedef int t ;
struct wl1251 {size_t buffer_cmd; int * buffer_busyword; } ;
struct spi_transfer {size_t* tx_buf; int len; int * rx_buf; } ;
struct spi_message {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct spi_transfer*,int ,int) ;
 int FUNC_1 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_2 (struct spi_message*) ;
 int FUNC_3 (int ,struct spi_message*) ;
 int FUNC_4 (int ,char*,void*,size_t) ;
 int FUNC_5 (struct wl1251*) ;

__attribute__((used)) static void FUNC_6(struct wl1251 *VAR_6, int VAR_7, void *VAR_8,
       size_t VAR_9)
{
 struct spi_transfer VAR_10[3];
 struct spi_message VAR_11;
 u8 *VAR_12;
 u32 *VAR_13;

 VAR_13 = &VAR_6->buffer_cmd;
 VAR_12 = VAR_6->buffer_busyword;

 *VAR_13 = 0;
 *VAR_13 |= VAR_5;
 *VAR_13 |= (VAR_9 << VAR_4) & VAR_3;
 *VAR_13 |= VAR_7 & VAR_2;

 FUNC_2(&VAR_11);
 FUNC_0(VAR_10, 0, sizeof(VAR_10));

 VAR_10[0].tx_buf = VAR_13;
 VAR_10[0].len = 4;
 FUNC_1(&VAR_10[0], &VAR_11);


 VAR_10[1].rx_buf = VAR_12;
 VAR_10[1].len = VAR_1;
 FUNC_1(&VAR_10[1], &VAR_11);

 VAR_10[2].rx_buf = VAR_8;
 VAR_10[2].len = VAR_9;
 FUNC_1(&VAR_10[2], &VAR_11);

 FUNC_3(FUNC_5(VAR_6), &VAR_11);



 FUNC_4(VAR_0, "spi_read cmd -> ", VAR_13, sizeof(*VAR_13));
 FUNC_4(VAR_0, "spi_read buf <- ", VAR_8, VAR_9);
}
