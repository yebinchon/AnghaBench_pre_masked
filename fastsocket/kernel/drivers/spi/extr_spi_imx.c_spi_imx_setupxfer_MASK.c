
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int bits_per_word; scalar_t__ speed_hz; } ;
struct spi_imx_data {int (* config ) (struct spi_imx_data*,struct spi_imx_config*) ;int tx; int rx; int * chipselect; } ;
struct spi_imx_config {int bpw; scalar_t__ speed_hz; int cs; int mode; } ;
struct spi_device {int bits_per_word; size_t chip_select; scalar_t__ max_speed_hz; int mode; int master; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct spi_imx_data* FUNC_1 (int ) ;
 int FUNC_2 (struct spi_imx_data*,struct spi_imx_config*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_6,
     struct spi_transfer *VAR_7)
{
 struct spi_imx_data *VAR_8 = FUNC_1(VAR_6->master);
 struct spi_imx_config VAR_9;

 VAR_9.bpw = VAR_7 ? VAR_7->bits_per_word : VAR_6->bits_per_word;
 VAR_9.speed_hz = VAR_7 ? VAR_7->speed_hz : VAR_6->max_speed_hz;
 VAR_9.mode = VAR_6->mode;
 VAR_9.cs = VAR_8->chipselect[VAR_6->chip_select];

 if (!VAR_9.speed_hz)
  VAR_9.speed_hz = VAR_6->max_speed_hz;
 if (!VAR_9.bpw)
  VAR_9.bpw = VAR_6->bits_per_word;
 if (!VAR_9.speed_hz)
  VAR_9.speed_hz = VAR_6->max_speed_hz;


 if (VAR_9.bpw <= 8) {
  VAR_8->rx = VAR_2;
  VAR_8->tx = VAR_5;
 } else if (VAR_9.bpw <= 16) {
  VAR_8->rx = VAR_0;
  VAR_8->tx = VAR_3;
 } else if (VAR_9.bpw <= 32) {
  VAR_8->rx = VAR_1;
  VAR_8->tx = VAR_4;
 } else
  FUNC_0();

 VAR_8->config(VAR_8, &VAR_9);

 return 0;
}
