
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;

int FUNC_2(int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13 = (VAR_6 == VAR_1) ? 0 : 8;

 if (VAR_5 < 0 || VAR_5 >= VAR_2)
  return -VAR_0;





 switch (VAR_7) {
 case 128:





  VAR_9 = VAR_4;
  VAR_10 = 1 << (VAR_5 + 24);
  break;

 case 129:
  VAR_9 = VAR_4;
  VAR_10 = 1 << (VAR_5 + VAR_13);
  break;

 case 130:
  VAR_9 = VAR_3;
  VAR_10 = 1 << (VAR_5 + VAR_13);
  break;

 default:
  return -VAR_0;
 }

 FUNC_0(VAR_9, VAR_11, VAR_12);

 if (VAR_8)
  VAR_11 |= VAR_10;
 else
  VAR_11 &= ~VAR_10;

 FUNC_1(VAR_9, VAR_11, VAR_12);
 return 0;
}
