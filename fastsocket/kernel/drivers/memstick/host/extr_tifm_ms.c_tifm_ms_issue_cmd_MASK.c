
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tifm_ms {int use_dma; unsigned int mode_mask; TYPE_1__* req; scalar_t__ timeout_jiffies; int timer; scalar_t__ cmd_flags; scalar_t__ io_word; scalar_t__ io_pos; scalar_t__ block_pos; struct tifm_dev* dev; } ;
struct tifm_dev {int dev; scalar_t__ addr; } ;
struct TYPE_6__ {unsigned int length; } ;
struct TYPE_5__ {unsigned char* data; unsigned int data_len; scalar_t__ data_dir; int error; int tpc; TYPE_2__ sg; scalar_t__ long_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_0 (int *,char*,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ VAR_24 ;
 int FUNC_3 (int *,scalar_t__) ;
 int VAR_25 ;
 unsigned int FUNC_4 (scalar_t__) ;
 unsigned int FUNC_5 (TYPE_2__*) ;
 unsigned int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct tifm_dev*,TYPE_2__*,int,int ) ;
 int FUNC_8 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct tifm_ms *VAR_26)
{
 struct tifm_dev *VAR_27 = VAR_26->dev;
 unsigned char *VAR_28;
 unsigned int VAR_29, VAR_30, VAR_31;

 VAR_26->cmd_flags = 0;
 VAR_26->block_pos = 0;
 VAR_26->io_pos = 0;
 VAR_26->io_word = 0;
 VAR_26->cmd_flags = 0;

 VAR_28 = VAR_26->req->data;

 VAR_26->use_dma = !VAR_25;

 if (VAR_26->req->long_data) {
  VAR_29 = VAR_26->req->sg.length;
  if (!FUNC_2(VAR_29))
   VAR_26->use_dma = 0;
 } else {
  VAR_29 = VAR_26->req->data_len;
  VAR_26->use_dma = 0;
 }

 FUNC_8(VAR_18,
        VAR_27->addr + VAR_7);
 FUNC_8(VAR_16,
        VAR_27->addr + VAR_9);

 if (VAR_26->use_dma) {
  if (1 != FUNC_7(VAR_27, &VAR_26->req->sg, 1,
         VAR_26->req->data_dir == VAR_3
         ? VAR_1
         : VAR_2)) {
   VAR_26->req->error = -VAR_0;
   return VAR_26->req->error;
  }
  VAR_29 = FUNC_6(&VAR_26->req->sg);

  FUNC_8(FUNC_1(VAR_29) - 2,
         VAR_27->addr + VAR_10);
  FUNC_8(VAR_17,
         VAR_27->addr + VAR_8);
  VAR_31 = VAR_14 | (1 << 8);
  if (VAR_26->req->data_dir == VAR_23)
   VAR_31 |= VAR_15;

  FUNC_8(VAR_17,
         VAR_27->addr + VAR_8);

  FUNC_8(FUNC_5(&VAR_26->req->sg),
         VAR_27->addr + VAR_5);
  FUNC_8(VAR_31, VAR_27->addr + VAR_6);
 } else {
  FUNC_8(VAR_26->mode_mask | VAR_21,
         VAR_27->addr + VAR_12);

  FUNC_8(VAR_19,
         VAR_27->addr + VAR_8);
 }

 FUNC_3(&VAR_26->timer, VAR_24 + VAR_26->timeout_jiffies);
 FUNC_8(VAR_13 | FUNC_4(VAR_27->addr + VAR_4),
        VAR_27->addr + VAR_4);
 VAR_26->req->error = 0;

 VAR_31 = FUNC_4(VAR_27->addr + VAR_12);
 VAR_31 |= VAR_22;

 if (VAR_26->use_dma)
  VAR_31 |= VAR_20;
 else
  VAR_31 &= ~VAR_20;

 FUNC_8(VAR_31, VAR_27->addr + VAR_12);

 VAR_30 = (VAR_26->req->tpc & 0xf) << 12;
 VAR_30 |= VAR_29;
 FUNC_8(VAR_30, VAR_27->addr + VAR_11);

 FUNC_0(&VAR_27->dev, "executing TPC %x, %x\n", VAR_30, VAR_31);
 return 0;
}
