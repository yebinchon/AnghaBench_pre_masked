
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 unsigned int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (unsigned int,scalar_t__) ;

int FUNC_6(unsigned VAR_7, int VAR_8)
{
 unsigned long VAR_9;
 u32 VAR_10;

 if (VAR_7 > VAR_1)
  return -VAR_0;

 FUNC_3(VAR_9);
 VAR_10 = FUNC_4(VAR_6 + VAR_3 + FUNC_0(VAR_7) *
    VAR_2);

 VAR_10 &= ~(VAR_4 << ((VAR_7 & 0x07) << 1));




 VAR_10 |= (VAR_5
   << ((VAR_7 & 0x07) << 1));
 FUNC_5(VAR_10, VAR_6 + VAR_3 + FUNC_0(VAR_7) *
    VAR_2);
 FUNC_1(VAR_7, VAR_8);
 FUNC_2(VAR_9);
 return 0;
}
