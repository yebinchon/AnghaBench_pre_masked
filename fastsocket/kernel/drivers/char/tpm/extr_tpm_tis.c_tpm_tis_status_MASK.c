
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int locality; scalar_t__ iobase; } ;
struct tpm_chip {TYPE_1__ vendor; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u8 FUNC_2(struct tpm_chip *VAR_0)
{
 return FUNC_1(VAR_0->vendor.iobase +
         FUNC_0(VAR_0->vendor.locality));
}
