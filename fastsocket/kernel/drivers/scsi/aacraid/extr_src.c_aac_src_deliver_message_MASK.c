
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct fib {int hw_fib_pa; TYPE_4__* hw_fib_va; struct aac_dev* dev; } ;
struct aac_queue {int lock; int numpending; } ;
struct aac_fib_xporthdr {void* Size; int HostAddress; void* Handle; } ;
struct aac_dev {scalar_t__ comm_interface; TYPE_1__* queues; } ;
typedef int dma_addr_t ;
struct TYPE_10__ {int IQ_L; int IQ_H; } ;
struct TYPE_7__ {scalar_t__ TimeStamp; } ;
struct TYPE_8__ {int SenderFibAddress; int Handle; TYPE_2__ u; int StructType; int Size; } ;
struct TYPE_9__ {TYPE_3__ header; } ;
struct TYPE_6__ {struct aac_queue* queue; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__ VAR_6 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (struct aac_dev*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct fib *VAR_7)
{
 struct aac_dev *VAR_8 = VAR_7->dev;
 struct aac_queue *VAR_9 = &VAR_8->queues->queue[VAR_2];
 unsigned long VAR_10;
 u32 VAR_11;
 dma_addr_t VAR_12;
 struct aac_fib_xporthdr *VAR_13;
 u16 VAR_14 = FUNC_3(VAR_7->hw_fib_va->header.Size);

 FUNC_4(VAR_9->lock, VAR_10);
 VAR_9->numpending++;
 FUNC_5(VAR_9->lock, VAR_10);

 if (VAR_8->comm_interface == VAR_0) {

  VAR_11 = (VAR_14 + 127) / 128 - 1;
  if (VAR_11 > (VAR_1 - 1))
   return -VAR_4;

  VAR_12 = VAR_7->hw_fib_pa;
  VAR_7->hw_fib_va->header.StructType = VAR_5;
  VAR_7->hw_fib_va->header.SenderFibAddress = (u32)VAR_12;
  VAR_7->hw_fib_va->header.u.TimeStamp = 0;
  FUNC_0((u32)(VAR_12 >> 32) != 0L);
  VAR_12 |= VAR_11;
 } else {

  VAR_11 = (sizeof(struct aac_fib_xporthdr) + VAR_14 + 127) / 128 - 1;
  if (VAR_11 > (VAR_1 - 1))
   return -VAR_4;


  VAR_13 = (void *)VAR_7->hw_fib_va - sizeof(struct aac_fib_xporthdr);
  VAR_13->Handle = FUNC_1(VAR_7->hw_fib_va->header.Handle);
  VAR_13->HostAddress = FUNC_2(VAR_7->hw_fib_pa);
  VAR_13->Size = FUNC_1(VAR_14);





  VAR_12 = VAR_7->hw_fib_pa - sizeof(struct aac_fib_xporthdr);
  if (VAR_12 & (VAR_1 - 1))
   return -VAR_3;
  VAR_12 |= VAR_11;
 }

 FUNC_6(VAR_8, VAR_6.IQ_H, (VAR_12 >> 32) & 0xffffffff);
 FUNC_6(VAR_8, VAR_6.IQ_L, VAR_12 & 0xffffffff);

 return 0;
}
