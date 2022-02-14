
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct controller {scalar_t__ hpc_reg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct controller*) ;
 int FUNC_2 (struct controller*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct controller *VAR_2, const int VAR_3,
   u32 *VAR_4, const int VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (VAR_5)
   *VAR_4 = *VAR_4 >> 1;
  else
   *VAR_4 = *VAR_4 << 1;
  FUNC_3(*VAR_4, VAR_2->hpc_reg + VAR_1);

  FUNC_1(VAR_2);


  FUNC_2(VAR_2);


  FUNC_0((2*VAR_0)/10);
 }
}
