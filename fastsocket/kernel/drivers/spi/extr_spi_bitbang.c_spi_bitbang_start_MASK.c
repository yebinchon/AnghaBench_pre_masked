
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_bitbang {int flags; int * workqueue; TYPE_2__* master; scalar_t__ busy; scalar_t__ setup_transfer; scalar_t__ txrx_bufs; scalar_t__ use_dma; int queue; int lock; int work; int chipselect; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {int mode_bits; TYPE_1__ dev; scalar_t__ setup; int cleanup; scalar_t__ transfer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct spi_bitbang *VAR_10)
{
 int VAR_11;

 if (!VAR_10->master || !VAR_10->chipselect)
  return -VAR_1;

 FUNC_1(&VAR_10->work, VAR_4);
 FUNC_6(&VAR_10->lock);
 FUNC_0(&VAR_10->queue);

 if (!VAR_10->master->mode_bits)
  VAR_10->master->mode_bits = VAR_3 | VAR_2 | VAR_10->flags;

 if (!VAR_10->master->transfer)
  VAR_10->master->transfer = VAR_9;
 if (!VAR_10->txrx_bufs) {
  VAR_10->use_dma = 0;
  VAR_10->txrx_bufs = VAR_5;
  if (!VAR_10->master->setup) {
   if (!VAR_10->setup_transfer)
    VAR_10->setup_transfer =
      VAR_8;
   VAR_10->master->setup = VAR_7;
   VAR_10->master->cleanup = VAR_6;
  }
 } else if (!VAR_10->master->setup)
  return -VAR_1;


 VAR_10->busy = 0;
 VAR_10->workqueue = FUNC_2(
   FUNC_4(VAR_10->master->dev.parent));
 if (VAR_10->workqueue == ((void*)0)) {
  VAR_11 = -VAR_0;
  goto err1;
 }




 VAR_11 = FUNC_5(VAR_10->master);
 if (VAR_11 < 0)
  goto err2;

 return VAR_11;

err2:
 FUNC_3(VAR_10->workqueue);
err1:
 return VAR_11;
}
