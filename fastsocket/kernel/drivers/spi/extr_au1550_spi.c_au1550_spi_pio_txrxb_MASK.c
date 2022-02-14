
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_transfer {scalar_t__ len; int rx_buf; int tx_buf; } ;
struct spi_device {int master; } ;
struct au1550_spi {scalar_t__ len; scalar_t__ tx_count; scalar_t__ rx_count; int master_done; TYPE_1__* regs; int (* tx_word ) (struct au1550_spi*) ;int rx; int tx; } ;
struct TYPE_2__ {int psc_spistat; int psc_spimsk; int psc_spipcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 struct au1550_spi* FUNC_1 (int ) ;
 int FUNC_2 (struct au1550_spi*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_4, struct spi_transfer *VAR_5)
{
 u32 VAR_6, VAR_7;
 struct au1550_spi *VAR_8 = FUNC_1(VAR_4->master);

 VAR_8->tx = VAR_5->tx_buf;
 VAR_8->rx = VAR_5->rx_buf;
 VAR_8->len = VAR_5->len;
 VAR_8->tx_count = 0;
 VAR_8->rx_count = 0;


 VAR_7 = VAR_0;


 while (VAR_8->tx_count < VAR_8->len) {

  VAR_8->tx_word(VAR_8);

  if (VAR_8->tx_count >= VAR_8->len) {

   VAR_7 |= VAR_1;
  }

  VAR_6 = VAR_8->regs->psc_spistat;
  FUNC_0();
  if (VAR_6 & VAR_3)
   break;
 }


 VAR_8->regs->psc_spimsk = VAR_7;
 FUNC_0();


 VAR_8->regs->psc_spipcr = VAR_2;
 FUNC_0();

 FUNC_3(&VAR_8->master_done);

 return VAR_8->rx_count < VAR_8->tx_count ? VAR_8->rx_count : VAR_8->tx_count;
}
