
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ iobase; } ;
struct tpm_chip {TYPE_1__ vendor; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct tpm_chip *VAR_3, int VAR_4, int VAR_5)
{
 if (VAR_5 || (FUNC_1(VAR_3->vendor.iobase + FUNC_0(VAR_4)) &
        (VAR_1 | VAR_2)) ==
     (VAR_1 | VAR_2))
  FUNC_2(VAR_0,
    VAR_3->vendor.iobase + FUNC_0(VAR_4));
}
