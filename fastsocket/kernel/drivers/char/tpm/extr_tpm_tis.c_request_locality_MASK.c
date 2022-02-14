
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long timeout_a; int int_queue; scalar_t__ irq; scalar_t__ iobase; } ;
struct tpm_chip {TYPE_1__ vendor; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct tpm_chip*,int) ;
 int FUNC_2 (int ,scalar_t__) ;
 unsigned long VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 long FUNC_5 (int ,int,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct tpm_chip *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 long VAR_6;

 if (FUNC_1(VAR_3, VAR_4) >= 0)
  return VAR_4;

 FUNC_2(VAR_0,
   VAR_3->vendor.iobase + FUNC_0(VAR_4));

 if (VAR_3->vendor.irq) {
  VAR_6 = FUNC_5(VAR_3->vendor.int_queue,
            (FUNC_1
             (VAR_3, VAR_4) >= 0),
            VAR_3->vendor.timeout_a);
  if (VAR_6 > 0)
   return VAR_4;

 } else {

  VAR_5 = VAR_2 + VAR_3->vendor.timeout_a;
  do {
   if (FUNC_1(VAR_3, VAR_4) >= 0)
    return VAR_4;
   FUNC_3(VAR_1);
  }
  while (FUNC_4(VAR_2, VAR_5));
 }
 return -1;
}
