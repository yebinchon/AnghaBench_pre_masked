
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e100_serial {int * icmdadr; scalar_t__ uses_dma_in; } ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct e100_serial*) ;

__attribute__((used)) static void
FUNC_4(struct e100_serial *VAR_3)
{






 if (VAR_3->uses_dma_in) {


  *VAR_3->icmdadr = FUNC_1(VAR_0, VAR_1, VAR_2);
  while (FUNC_0(VAR_0, VAR_1, *VAR_3->icmdadr) ==
         FUNC_2(VAR_0, VAR_1, VAR_2));

  FUNC_3(VAR_3);
 }
}
