
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_head_t ;
typedef int u8 ;
struct TYPE_2__ {int (* status ) (struct tpm_chip*) ;scalar_t__ irq; } ;
struct tpm_chip {TYPE_1__ vendor; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned long VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tpm_chip*) ;
 int FUNC_4 (struct tpm_chip*) ;
 int FUNC_5 (struct tpm_chip*) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 long FUNC_7 (int ,int,unsigned long) ;

int FUNC_8(struct tpm_chip *VAR_6, u8 VAR_7, unsigned long VAR_8,
    wait_queue_head_t *VAR_9)
{
 unsigned long VAR_10;
 long VAR_11;
 u8 VAR_12;


 VAR_12 = VAR_6->vendor.status(VAR_6);
 if ((VAR_12 & VAR_7) == VAR_7)
  return 0;

 VAR_10 = VAR_5 + VAR_8;

 if (VAR_6->vendor.irq) {
again:
  VAR_8 = VAR_10 - VAR_5;
  if ((long)VAR_8 <= 0)
   return -VAR_1;
  VAR_11 = FUNC_7(*VAR_9,
            ((VAR_6->vendor.status(VAR_6)
            & VAR_7) == VAR_7),
            VAR_8);
  if (VAR_11 > 0)
   return 0;
  if (VAR_11 == -VAR_0 && FUNC_1(VAR_4)) {
   FUNC_0(VAR_2);
   goto again;
  }
 } else {
  do {
   FUNC_2(VAR_3);
   VAR_12 = VAR_6->vendor.status(VAR_6);
   if ((VAR_12 & VAR_7) == VAR_7)
    return 0;
  } while (FUNC_6(VAR_5, VAR_10));
 }
 return -VAR_1;
}
