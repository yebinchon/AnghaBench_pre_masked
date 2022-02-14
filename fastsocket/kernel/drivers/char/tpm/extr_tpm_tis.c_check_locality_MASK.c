
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int locality; scalar_t__ iobase; } ;
struct tpm_chip {TYPE_1__ vendor; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct tpm_chip *VAR_2, int VAR_3)
{
 if ((FUNC_1(VAR_2->vendor.iobase + FUNC_0(VAR_3)) &
      (VAR_0 | VAR_1)) ==
     (VAR_0 | VAR_1))
  return VAR_2->vendor.locality = VAR_3;

 return -1;
}
