
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct controller {scalar_t__ hpc_reg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct controller*) ;
 int FUNC_4 (struct controller*,int,int*,int) ;
 int FUNC_5 (struct controller*) ;
 int FUNC_6 (int,scalar_t__) ;

int FUNC_7(struct controller *VAR_3, int VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_3->hpc_reg + VAR_2) & 0x0f;

 switch (VAR_4) {
 case 1:




  VAR_5 = FUNC_2(VAR_3->hpc_reg + VAR_1);
  VAR_6 = 0x01010101;
  FUNC_4(VAR_3, VAR_8, &VAR_6, 0);
  FUNC_4(VAR_3, VAR_8, &VAR_6, 1);
  FUNC_4(VAR_3, VAR_8, &VAR_6, 0);
  FUNC_4(VAR_3, VAR_8, &VAR_6, 1);

  VAR_6 = 0x01010000;
  FUNC_6(VAR_6, VAR_3->hpc_reg + VAR_1);
  FUNC_4(VAR_3, VAR_8, &VAR_6, 0);
  FUNC_4(VAR_3, VAR_8, &VAR_6, 1);
  VAR_6 = 0x00000101;
  FUNC_6(VAR_6, VAR_3->hpc_reg + VAR_1);
  FUNC_4(VAR_3, VAR_8, &VAR_6, 0);
  FUNC_4(VAR_3, VAR_8, &VAR_6, 1);

  VAR_6 = 0x01010000;
  FUNC_6(VAR_6, VAR_3->hpc_reg + VAR_1);
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
   FUNC_3(VAR_3);


   FUNC_5 (VAR_3);


   FUNC_0((3*VAR_0)/10);
   VAR_6 = VAR_6 >> 16;
   FUNC_6(VAR_6, VAR_3->hpc_reg + VAR_1);

   FUNC_3(VAR_3);


   FUNC_5 (VAR_3);


   FUNC_0((3*VAR_0)/10);
   VAR_6 = VAR_6 << 16;
   FUNC_6(VAR_6, VAR_3->hpc_reg + VAR_1);
   VAR_6 = VAR_6 << 1;
   FUNC_6(VAR_6, VAR_3->hpc_reg + VAR_1);
  }


  FUNC_6(VAR_5, VAR_3->hpc_reg + VAR_1);

  FUNC_3(VAR_3);


  FUNC_5 (VAR_3);
  break;
 case 2:

  break;
 case 3:

  break;
 }
 return 0;
}
