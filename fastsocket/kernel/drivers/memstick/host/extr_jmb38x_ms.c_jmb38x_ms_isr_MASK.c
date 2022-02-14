
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct memstick_host {int dummy; } ;
struct jmb38x_ms_host {int cmd_flags; int io_pos; int lock; TYPE_3__* req; scalar_t__ addr; TYPE_2__* chip; void** io_word; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {scalar_t__ data_dir; int error; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct memstick_host*,int ) ;
 int FUNC_2 (struct jmb38x_ms_host*) ;
 int FUNC_3 (struct memstick_host*) ;
 struct jmb38x_ms_host* FUNC_4 (struct memstick_host*) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (unsigned int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_20, void *VAR_21)
{
 struct memstick_host *VAR_22 = VAR_21;
 struct jmb38x_ms_host *VAR_23 = FUNC_4(VAR_22);
 unsigned int VAR_24;

 FUNC_6(&VAR_23->lock);
 VAR_24 = FUNC_5(VAR_23->addr + VAR_5);
 FUNC_0(&VAR_23->chip->pdev->dev, "irq_status = %08x\n", VAR_24);
 if (VAR_24 == 0 || VAR_24 == (~0)) {
  FUNC_7(&VAR_23->lock);
  return VAR_15;
 }

 if (VAR_23->req) {
  if (VAR_24 & VAR_6) {
   if (VAR_24 & VAR_7)
    VAR_23->req->error = -VAR_2;
   else
    VAR_23->req->error = -VAR_3;
  } else {
   if (VAR_23->cmd_flags & VAR_1) {
    if (VAR_24 & VAR_9)
     VAR_23->cmd_flags |= VAR_4;
   } else {
    if (VAR_24 & (VAR_10
        | VAR_11))
     FUNC_2(VAR_23);

    if (VAR_24 & VAR_9) {
     FUNC_2(VAR_23);
     VAR_23->cmd_flags |= VAR_4;
    }
   }

   if (VAR_24 & VAR_8) {
    VAR_23->cmd_flags |= VAR_0;
    if (VAR_23->cmd_flags & VAR_17) {
     if (VAR_23->req->data_dir == VAR_16) {
      VAR_23->io_word[0]
       = FUNC_5(VAR_23->addr
        + VAR_18);
      VAR_23->io_word[1]
       = FUNC_5(VAR_23->addr
        + VAR_19);
      VAR_23->io_pos = 8;

      FUNC_2(VAR_23);
     }
     VAR_23->cmd_flags |= VAR_4;
    }
   }
  }
 }

 if (VAR_24 & (VAR_12 | VAR_13)) {
  FUNC_0(&VAR_23->chip->pdev->dev, "media changed\n");
  FUNC_3(VAR_22);
 }

 FUNC_8(VAR_24, VAR_23->addr + VAR_5);

 if (VAR_23->req
     && (((VAR_23->cmd_flags & VAR_0)
   && (VAR_23->cmd_flags & VAR_4))
  || VAR_23->req->error))
  FUNC_1(VAR_22, 0);

 FUNC_7(&VAR_23->lock);
 return VAR_14;
}
