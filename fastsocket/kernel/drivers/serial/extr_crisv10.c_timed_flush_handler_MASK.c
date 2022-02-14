
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e100_serial {scalar_t__ uses_dma_in; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct e100_serial*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;
 struct e100_serial* VAR_4 ;

__attribute__((used)) static void
FUNC_2(unsigned long VAR_5)
{
 struct e100_serial *VAR_6;
 int VAR_7;





 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_6 = VAR_4 + VAR_7;
  if (VAR_6->uses_dma_in)
   FUNC_0(VAR_6);
 }


 FUNC_1(&VAR_2, VAR_3 + VAR_0);
}
