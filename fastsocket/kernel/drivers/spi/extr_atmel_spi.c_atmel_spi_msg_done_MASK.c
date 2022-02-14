
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_message {int status; int context; int (* complete ) (int ) ;int actual_length; int queue; int spi; } ;
struct TYPE_2__ {int parent; } ;
struct spi_master {TYPE_1__ dev; } ;
struct atmel_spi {scalar_t__ stopping; int queue; int * next_transfer; int * current_transfer; int lock; int stay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct spi_master*) ;
 int FUNC_2 (struct atmel_spi*,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct atmel_spi*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct spi_master *VAR_3, struct atmel_spi *VAR_4,
  struct spi_message *VAR_5, int VAR_6, int VAR_7)
{
 if (!VAR_7 || VAR_6 < 0)
  FUNC_2(VAR_4, VAR_5->spi);
 else
  VAR_4->stay = VAR_5->spi;

 FUNC_4(&VAR_5->queue);
 VAR_5->status = VAR_6;

 FUNC_3(VAR_3->dev.parent,
  "xfer complete: %u bytes transferred\n",
  VAR_5->actual_length);

 FUNC_8(&VAR_4->lock);
 VAR_5->complete(VAR_5->context);
 FUNC_7(&VAR_4->lock);

 VAR_4->current_transfer = ((void*)0);
 VAR_4->next_transfer = ((void*)0);


 if (FUNC_5(&VAR_4->queue) || VAR_4->stopping)
  FUNC_6(VAR_4, VAR_0, FUNC_0(VAR_1) | FUNC_0(VAR_2));
 else
  FUNC_1(VAR_3);
}
