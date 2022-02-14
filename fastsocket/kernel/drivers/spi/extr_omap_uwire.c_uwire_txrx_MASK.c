
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct uwire_state {unsigned int bits_per_word; } ;
struct spi_transfer {unsigned int len; int * rx_buf; int * tx_buf; } ;
struct spi_device {int chip_select; int dev; struct uwire_state* controller_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,unsigned int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int,int,int) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_9, struct spi_transfer *VAR_10)
{
 struct uwire_state *VAR_11 = VAR_9->controller_state;
 unsigned VAR_12 = VAR_10->len;
 unsigned VAR_13 = VAR_11->bits_per_word;
 unsigned VAR_14;
 u16 VAR_15, VAR_16;
 int VAR_17 = 0;

 if (!VAR_10->tx_buf && !VAR_10->rx_buf)
  return 0;


 if (VAR_10->tx_buf && VAR_10->rx_buf)
  return -VAR_3;

 VAR_16 = VAR_9->chip_select << 10;
 VAR_16 |= VAR_1;

 if (VAR_10->tx_buf) {
  const u8 *VAR_18 = VAR_10->tx_buf;




  while (VAR_12 >= 1) {



   VAR_15 = *VAR_18++;
   if (VAR_13 > 8) {
    VAR_14 = 2;
    VAR_15 |= *VAR_18++ << 8;
   } else
    VAR_14 = 1;
   VAR_15 <<= 16 - VAR_13;





   if (FUNC_4(VAR_0, 0, 0))
    goto eio;

   FUNC_3(VAR_8, VAR_15);


   VAR_15 = VAR_5 | VAR_16 | (VAR_13 << 5);

   FUNC_3(VAR_6, VAR_15);
   VAR_12 -= VAR_14;





   if (FUNC_4(VAR_0, VAR_0, 1))
    goto eio;

   VAR_17 += VAR_14;
  }


  if (FUNC_4(VAR_0, 0, 0))
   goto eio;

 } else if (VAR_10->rx_buf) {
  u8 *VAR_19 = VAR_10->rx_buf;


  while (VAR_12) {
   if (VAR_13 > 8) {
    VAR_14 = 2;
   } else
    VAR_14 = 1;


   VAR_15 = VAR_5 | VAR_16 | (VAR_13 << 0);
   FUNC_3(VAR_6, VAR_15);
   VAR_12 -= VAR_14;


   (void) FUNC_4(VAR_0, VAR_0, 1);

   if (FUNC_4(VAR_4 | VAR_0,
      VAR_4, 0))
    goto eio;




   VAR_15 = FUNC_2(VAR_7);
   VAR_15 &= (1 << VAR_13) - 1;
   *VAR_19++ = (u8) VAR_15;
   if (VAR_14 == 2)
    *VAR_19++ = VAR_15 >> 8;
   VAR_17 += VAR_14;





  }
 }
 return VAR_17;
eio:
 return -VAR_2;
}
