
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long timeout_d; int locality; scalar_t__ iobase; } ;
struct tpm_chip {TYPE_1__ vendor; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 unsigned long VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct tpm_chip *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;



 VAR_4 = VAR_2 + VAR_3->vendor.timeout_d;
 do {
  VAR_5 = FUNC_1(VAR_3->vendor.iobase +
       FUNC_0(VAR_3->vendor.locality) + 1);
  VAR_5 += FUNC_1(VAR_3->vendor.iobase +
        FUNC_0(VAR_3->vendor.locality) +
        2) << 8;
  if (VAR_5)
   return VAR_5;
  FUNC_2(VAR_1);
 } while (FUNC_3(VAR_2, VAR_4));
 return -VAR_0;
}
