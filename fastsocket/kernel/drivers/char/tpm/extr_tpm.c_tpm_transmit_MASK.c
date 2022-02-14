
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_2__ {int (* status ) (struct tpm_chip*) ;int req_complete_mask; int req_complete_val; int req_canceled; int (* recv ) (struct tpm_chip*,int*,size_t) ;int (* cancel ) (struct tpm_chip*) ;scalar_t__ irq; int (* send ) (struct tpm_chip*,int*,size_t) ;} ;
struct tpm_chip {int tpm_mutex; int dev; TYPE_1__ vendor; } ;
typedef int ssize_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 unsigned long VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (struct tpm_chip*,int*,size_t) ;
 int FUNC_7 (struct tpm_chip*) ;
 int FUNC_8 (struct tpm_chip*) ;
 int FUNC_9 (struct tpm_chip*,int*,size_t) ;
 scalar_t__ FUNC_10 (unsigned long,unsigned long) ;
 unsigned long FUNC_11 (struct tpm_chip*,size_t) ;

__attribute__((used)) static ssize_t FUNC_12(struct tpm_chip *VAR_6, const char *VAR_7,
       size_t VAR_8)
{
 ssize_t VAR_9;
 u32 VAR_10, VAR_11;
 unsigned long VAR_12;

 VAR_10 = FUNC_0(*((__be32 *) (VAR_7 + 2)));
 VAR_11 = FUNC_0(*((__be32 *) (VAR_7 + 6)));
 if (VAR_10 == 0)
  return -VAR_2;
 if (VAR_10 > VAR_8) {
  FUNC_1(VAR_6->dev,
   "invalid count value %x %zx \n", VAR_10, VAR_8);
  return -VAR_0;
 }

 FUNC_3(&VAR_6->tpm_mutex);

 if ((VAR_9 = VAR_6->vendor.send(VAR_6, (u8 *) VAR_7, VAR_10)) < 0) {
  FUNC_1(VAR_6->dev,
   "tpm_transmit: tpm_send: error %zd\n", VAR_9);
  goto out;
 }

 if (VAR_6->vendor.irq)
  goto out_recv;

 VAR_12 = VAR_5 + FUNC_11(VAR_6, VAR_11);
 do {
  u8 VAR_13 = VAR_6->vendor.status(VAR_6);
  if ((VAR_13 & VAR_6->vendor.req_complete_mask) ==
      VAR_6->vendor.req_complete_val)
   goto out_recv;

  if (VAR_13 == VAR_6->vendor.req_canceled) {
   FUNC_1(VAR_6->dev, "Operation Canceled\n");
   VAR_9 = -VAR_1;
   goto out;
  }

  FUNC_2(VAR_4);
  FUNC_5();
 } while (FUNC_10(VAR_5, VAR_12));

 VAR_6->vendor.cancel(VAR_6);
 FUNC_1(VAR_6->dev, "Operation Timed out\n");
 VAR_9 = -VAR_3;
 goto out;

out_recv:
 VAR_9 = VAR_6->vendor.recv(VAR_6, (u8 *) VAR_7, VAR_8);
 if (VAR_9 < 0)
  FUNC_1(VAR_6->dev,
   "tpm_transmit: tpm_recv: error %zd\n", VAR_9);
out:
 FUNC_4(&VAR_6->tpm_mutex);
 return VAR_9;
}
