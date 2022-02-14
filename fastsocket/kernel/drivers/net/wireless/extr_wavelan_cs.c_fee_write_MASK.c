
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_long ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(u_long VAR_15,
   u_short VAR_16,
   u_short * VAR_17,
   int VAR_18)
{
  VAR_17 += VAR_18;
  FUNC_3(VAR_15, FUNC_5(0, VAR_11), VAR_1);
  FUNC_3(VAR_15, FUNC_5(0, VAR_12), VAR_7);

  FUNC_0(VAR_15, 10, 100);


  FUNC_3(VAR_15, FUNC_5(0, VAR_11), VAR_16 + VAR_18 - 1);


  while(VAR_18-- > 0)
    {

      FUNC_3(VAR_15, FUNC_5(0, VAR_13), (*--VAR_17) >> 8);
      FUNC_3(VAR_15, FUNC_5(0, VAR_14), *VAR_17 & 0xFF);


      FUNC_3(VAR_15, FUNC_5(0, VAR_12), VAR_8);


      FUNC_1(10);
      FUNC_0(VAR_15, 10, 100);
    }


  FUNC_3(VAR_15, FUNC_5(0, VAR_11), VAR_0);
  FUNC_3(VAR_15, FUNC_5(0, VAR_12), VAR_6);

  FUNC_0(VAR_15, 10, 100);
}
