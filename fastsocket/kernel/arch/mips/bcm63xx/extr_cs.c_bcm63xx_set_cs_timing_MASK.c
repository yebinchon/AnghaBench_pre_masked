
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(unsigned int VAR_8, unsigned int VAR_9,
      unsigned int VAR_10, unsigned int VAR_11)
{
 unsigned long VAR_12;
 u32 VAR_13;

 if (!FUNC_3(VAR_8))
  return -VAR_0;

 FUNC_4(&VAR_7, VAR_12);
 VAR_13 = FUNC_1(FUNC_0(VAR_8));
 VAR_13 &= ~(VAR_5);
 VAR_13 &= ~(VAR_3);
 VAR_13 &= ~(VAR_1);
 VAR_13 |= VAR_9 << VAR_6;
 VAR_13 |= VAR_10 << VAR_4;
 VAR_13 |= VAR_11 << VAR_2;
 FUNC_2(VAR_13, FUNC_0(VAR_8));
 FUNC_5(&VAR_7, VAR_12);

 return 0;
}
