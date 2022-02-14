
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int irq; int locality; scalar_t__ iobase; } ;
struct tpm_chip {TYPE_1__ vendor; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct tpm_chip *VAR_4 = VAR_3;
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_4->vendor.iobase +
        FUNC_0(VAR_4->vendor.locality));

 if (VAR_5 == 0)
  return VAR_1;

 VAR_4->vendor.irq = VAR_2;


 FUNC_2(VAR_5,
    VAR_4->vendor.iobase +
    FUNC_0(VAR_4->vendor.locality));
 return VAR_0;
}
