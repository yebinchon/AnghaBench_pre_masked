
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

void FUNC_3(unsigned int VAR_5, int VAR_6, int VAR_7)
{
 u32 VAR_8 = FUNC_0(VAR_0);
 u32 VAR_9, VAR_10, VAR_11;

 if (VAR_5 >= 24)
  VAR_9 = VAR_1;
 else if (VAR_5 >= 16)
  VAR_9 = VAR_4;
 else if (VAR_5 >= 8)
  VAR_9 = VAR_3;
 else
  VAR_9 = VAR_2;

 VAR_10 = (VAR_5 % 8) * 4;

 VAR_11 = FUNC_1(VAR_8 + VAR_9);


 VAR_11 &= ~(0xF << VAR_10);



 VAR_11 |= ((VAR_6 & 7) << VAR_10);



 if (VAR_7)
  VAR_11 |= (1 << (VAR_10 + 3));

 FUNC_2(VAR_11, VAR_8 + VAR_9);
}
