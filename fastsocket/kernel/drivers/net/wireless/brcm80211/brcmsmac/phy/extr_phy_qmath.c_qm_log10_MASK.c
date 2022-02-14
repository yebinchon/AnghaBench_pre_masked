
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
typedef int s32 ;
typedef int s16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;

void FUNC_6(s32 VAR_3, s16 VAR_4, s16 *VAR_5, s16 *VAR_6)
{
 s16 VAR_7, VAR_8, VAR_9;
 u16 VAR_10;
 s32 VAR_11;


 VAR_7 = FUNC_4(VAR_3);
 VAR_3 = VAR_3 << VAR_7;







 VAR_4 = VAR_4 + VAR_7 - 30;



 VAR_8 = (s16) (VAR_3 >> (32 - (2 + VAR_1)));


 VAR_8 =
  VAR_8 & (s16) ((1 << VAR_1) - 1);


 VAR_3 = VAR_3 & ((1 << (32 - (2 + VAR_1))) - 1);



 VAR_10 = (u16) (VAR_3 >> (32 - (2 + VAR_1 + 16)));


 VAR_11 = VAR_2[VAR_8];


 VAR_9 = (s16) FUNC_3(VAR_10,
    (u16) (VAR_2[VAR_8 + 1] -
           VAR_2[VAR_8]));


 VAR_11 = FUNC_0((s16) VAR_11, VAR_9);




 VAR_11 = FUNC_1(VAR_11, ((s32) -VAR_4) << 15);


 VAR_7 = FUNC_4(VAR_11);



 VAR_11 = FUNC_5(VAR_11, VAR_7 - 16);





 *VAR_5 = FUNC_2((s16) VAR_11, (s16) VAR_0);


 *VAR_6 = 15 + VAR_7 - 16 + 1;

 return;
}
