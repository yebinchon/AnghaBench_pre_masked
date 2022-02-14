
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct memstick_host {int dev; } ;
struct jmb38x_ms_host {int cmd_flags; unsigned int* io_word; scalar_t__ addr; TYPE_2__* req; scalar_t__ timeout_jiffies; int timer; TYPE_1__* chip; scalar_t__ io_pos; scalar_t__ block_pos; } ;
struct TYPE_8__ {unsigned int length; } ;
struct TYPE_7__ {int error; int tpc; scalar_t__ data_dir; unsigned char* data; unsigned int data_len; TYPE_3__ sg; scalar_t__ long_data; scalar_t__ need_card_int; } ;
struct TYPE_6__ {int pdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 unsigned int VAR_21 ;
 scalar_t__ VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 unsigned int VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ VAR_29 ;
 int FUNC_1 (struct jmb38x_ms_host*) ;
 struct jmb38x_ms_host* FUNC_2 (struct memstick_host*) ;
 int FUNC_3 (int *,scalar_t__) ;
 int VAR_30 ;
 int FUNC_4 (int ,TYPE_3__*,int,int ) ;
 unsigned int FUNC_5 (scalar_t__) ;
 unsigned int FUNC_6 (TYPE_3__*) ;
 unsigned int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct memstick_host *VAR_31)
{
 struct jmb38x_ms_host *VAR_32 = FUNC_2(VAR_31);
 unsigned char *VAR_33;
 unsigned int VAR_34, VAR_35, VAR_36;

 if (!(VAR_21 & FUNC_5(VAR_32->addr + VAR_20))) {
  FUNC_0(&VAR_31->dev, "no media status\n");
  VAR_32->req->error = -VAR_8;
  return VAR_32->req->error;
 }

 FUNC_0(&VAR_31->dev, "control %08x\n", FUNC_5(VAR_32->addr + VAR_9));
 FUNC_0(&VAR_31->dev, "status %08x\n", FUNC_5(VAR_32->addr + VAR_12));
 FUNC_0(&VAR_31->dev, "hstatus %08x\n", FUNC_5(VAR_32->addr + VAR_20));

 VAR_32->cmd_flags = 0;
 VAR_32->block_pos = 0;
 VAR_32->io_pos = 0;
 VAR_32->io_word[0] = 0;
 VAR_32->io_word[1] = 0;

 VAR_35 = VAR_32->req->tpc << 16;
 VAR_35 |= VAR_23;

 if (VAR_32->req->data_dir == VAR_18)
  VAR_35 |= VAR_24;
 if (VAR_32->req->need_card_int)
  VAR_35 |= VAR_27;

 VAR_33 = VAR_32->req->data;

 if (!VAR_30)
  VAR_32->cmd_flags |= VAR_6;

 if (VAR_32->req->long_data) {
  VAR_34 = VAR_32->req->sg.length;
 } else {
  VAR_34 = VAR_32->req->data_len;
  VAR_32->cmd_flags &= ~VAR_6;
 }

 if (VAR_34 <= 8) {
  VAR_35 &= ~(VAR_23 | 0xf);
  VAR_32->cmd_flags |= VAR_19;
  VAR_35 |= VAR_34 & 0xf;
  VAR_32->cmd_flags &= ~VAR_6;
 }

 if (VAR_32->cmd_flags & VAR_6) {
  if (1 != FUNC_4(VAR_32->chip->pdev, &VAR_32->req->sg, 1,
        VAR_32->req->data_dir == VAR_18
        ? VAR_16
        : VAR_17)) {
   VAR_32->req->error = -VAR_7;
   return VAR_32->req->error;
  }
  VAR_34 = FUNC_7(&VAR_32->req->sg);
  FUNC_8(FUNC_6(&VAR_32->req->sg),
         VAR_32->addr + VAR_3);
  FUNC_8(((1 << 16) & VAR_1)
         | (VAR_34 & VAR_2),
         VAR_32->addr + VAR_0);
  FUNC_8(VAR_5, VAR_32->addr + VAR_4);
 } else if (!(VAR_32->cmd_flags & VAR_19)) {
  FUNC_8(((1 << 16) & VAR_1)
         | (VAR_34 & VAR_2),
         VAR_32->addr + VAR_0);
   VAR_36 = FUNC_5(VAR_32->addr + VAR_13);
   VAR_36 |= VAR_32->req->data_dir == VAR_18
     ? VAR_14
     : VAR_15;

   FUNC_8(VAR_36, VAR_32->addr + VAR_13);
   FUNC_8(VAR_36, VAR_32->addr + VAR_11);
 } else {
  VAR_35 &= ~(VAR_23 | 0xf);
  VAR_32->cmd_flags |= VAR_19;
  VAR_35 |= VAR_34 & 0xf;

  if (VAR_32->req->data_dir == VAR_28) {
   FUNC_1(VAR_32);
   FUNC_8(VAR_32->io_word[0], VAR_32->addr + VAR_25);
   FUNC_8(VAR_32->io_word[1], VAR_32->addr + VAR_26);
  }
 }

 FUNC_3(&VAR_32->timer, VAR_29 + VAR_32->timeout_jiffies);
 FUNC_8(VAR_10 | FUNC_5(VAR_32->addr + VAR_9),
        VAR_32->addr + VAR_9);
 VAR_32->req->error = 0;

 FUNC_8(VAR_35, VAR_32->addr + VAR_22);
 FUNC_0(&VAR_31->dev, "executing TPC %08x, len %x\n", VAR_35, VAR_34);

 return 0;
}
