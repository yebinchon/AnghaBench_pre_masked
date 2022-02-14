
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FAS216_Info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(FAS216_Info *VAR_16)
{
 int VAR_17, VAR_18;




 FUNC_1(VAR_16, VAR_6, VAR_1);
 FUNC_3(50);
 FUNC_1(VAR_16, VAR_6, VAR_0);




 FUNC_1(VAR_16, VAR_8, 0);
 FUNC_1(VAR_16, VAR_7, VAR_4);






 if ((FUNC_0(VAR_16, VAR_7) & (~0xe0)) != VAR_4)
  return VAR_12;




 FUNC_1(VAR_16, VAR_7, 0);
 FUNC_1(VAR_16, VAR_8, 0);
 FUNC_1(VAR_16, VAR_8, 5);





 if (FUNC_0(VAR_16, VAR_8) != 5)
  return VAR_13;




 FUNC_1(VAR_16, VAR_8, 0);

 FUNC_1(VAR_16, VAR_8, VAR_5);
 FUNC_1(VAR_16, VAR_8, 0);

 FUNC_1(VAR_16, VAR_6, VAR_1);
 FUNC_3(50);
 FUNC_1(VAR_16, VAR_6, VAR_2 | VAR_0);

 FUNC_1(VAR_16, VAR_7, VAR_3);
 FUNC_1(VAR_16, VAR_6, VAR_1);
 FUNC_3(50);
 FUNC_1(VAR_16, VAR_6, VAR_0);

 VAR_18 = FUNC_0(VAR_16, VAR_9);
 VAR_17 = VAR_18 >> 3;
 VAR_18 &= 7;

 switch (VAR_17) {
 case 0x01:
  if (VAR_18 == 4)
   return VAR_10;
  break;

 case 0x02:
  switch (VAR_18) {
  case 2:
   return VAR_11;
  case 3:
   return VAR_15;
  }
  break;

 default:
  break;
 }
 FUNC_2("family %x rev %x\n", VAR_17, VAR_18);
 return VAR_14;
}
