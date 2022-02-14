
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int locality; int read_queue; scalar_t__ irq; scalar_t__ iobase; int int_queue; int timeout_c; int timeout_b; } ;
struct tpm_chip {TYPE_1__ vendor; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tpm_chip*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int VAR_8 ;
 int FUNC_5 (struct tpm_chip*,int ,int ) ;
 scalar_t__ FUNC_6 (struct tpm_chip*,int ) ;
 int FUNC_7 (struct tpm_chip*,int ) ;
 int FUNC_8 (struct tpm_chip*) ;
 int FUNC_9 (struct tpm_chip*) ;
 scalar_t__ FUNC_10 (struct tpm_chip*,int,int ,int *) ;

__attribute__((used)) static int FUNC_11(struct tpm_chip *VAR_9, u8 *VAR_10, size_t VAR_11)
{
 int VAR_12, VAR_13, VAR_14;
 size_t VAR_15 = 0;
 u32 VAR_16;

 if (FUNC_6(VAR_9, 0) < 0)
  return -VAR_0;

 VAR_13 = FUNC_9(VAR_9);
 if ((VAR_13 & VAR_3) == 0) {
  FUNC_8(VAR_9);
  if (FUNC_10
      (VAR_9, VAR_3, VAR_9->vendor.timeout_b,
       &VAR_9->vendor.int_queue) < 0) {
   VAR_12 = -VAR_2;
   goto out_err;
  }
 }

 while (VAR_15 < VAR_11 - 1) {
  VAR_14 = FUNC_3(VAR_9);
  for (; VAR_14 > 0 && VAR_15 < VAR_11 - 1; VAR_14--) {
   FUNC_4(VAR_10[VAR_15], VAR_9->vendor.iobase +
     FUNC_0(VAR_9->vendor.locality));
   VAR_15++;
  }

  FUNC_10(VAR_9, VAR_7, VAR_9->vendor.timeout_c,
      &VAR_9->vendor.int_queue);
  VAR_13 = FUNC_9(VAR_9);
  if (!VAR_8 && (VAR_13 & VAR_5) == 0) {
   VAR_12 = -VAR_1;
   goto out_err;
  }
 }


 FUNC_4(VAR_10[VAR_15],
   VAR_9->vendor.iobase + FUNC_0(VAR_9->vendor.locality));
 FUNC_10(VAR_9, VAR_7, VAR_9->vendor.timeout_c,
     &VAR_9->vendor.int_queue);
 VAR_13 = FUNC_9(VAR_9);
 if ((VAR_13 & VAR_5) != 0) {
  VAR_12 = -VAR_1;
  goto out_err;
 }


 FUNC_4(VAR_6,
   VAR_9->vendor.iobase + FUNC_1(VAR_9->vendor.locality));

 if (VAR_9->vendor.irq) {
  VAR_16 = FUNC_2(*((__be32 *) (VAR_10 + 6)));
  if (FUNC_10
      (VAR_9, VAR_4 | VAR_7,
       FUNC_7(VAR_9, VAR_16),
       &VAR_9->vendor.read_queue) < 0) {
   VAR_12 = -VAR_2;
   goto out_err;
  }
 }
 return VAR_11;
out_err:
 FUNC_8(VAR_9);
 FUNC_5(VAR_9, VAR_9->vendor.locality, 0);
 return VAR_12;
}
