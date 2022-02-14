
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tifm_ms {int cmd_flags; scalar_t__ use_dma; scalar_t__ req; } ;
struct tifm_dev {int lock; scalar_t__ addr; int dev; } ;
struct memstick_host {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,char*,unsigned int,unsigned int,int ) ;
 struct tifm_ms* FUNC_1 (struct memstick_host*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct tifm_dev*) ;
 int FUNC_6 (struct tifm_ms*) ;
 int FUNC_7 (struct tifm_ms*) ;
 int FUNC_8 (struct tifm_ms*) ;
 int FUNC_9 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct tifm_dev *VAR_4)
{
 struct tifm_ms *VAR_5;
 unsigned int VAR_6 = 0, VAR_7 = 0;
 int VAR_8 = 1;

 FUNC_3(&VAR_4->lock);
 VAR_5 = FUNC_1((struct memstick_host *)FUNC_5(VAR_4));
 VAR_6 = FUNC_2(VAR_4->addr + VAR_1);
 VAR_7 = FUNC_2(VAR_4->addr + VAR_2);
 FUNC_0(&VAR_4->dev,
  "data event: fifo_status %x, host_status %x, flags %x\n",
  VAR_6, VAR_7, VAR_5->cmd_flags);

 if (VAR_5->req) {
  if (VAR_5->use_dma && (VAR_6 & 1)) {
   VAR_5->cmd_flags |= VAR_0;
   VAR_8 = FUNC_6(VAR_5);
  }
  if (!VAR_5->use_dma && (VAR_6 & VAR_3)) {
   if (!FUNC_8(VAR_5)) {
    VAR_5->cmd_flags |= VAR_0;
    VAR_8 = FUNC_6(VAR_5);
   }
  }
 }

 FUNC_9(VAR_6, VAR_4->addr + VAR_1);
 if (!VAR_8)
  FUNC_7(VAR_5);

 FUNC_4(&VAR_4->lock);
}
