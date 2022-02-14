
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_4 ;

int FUNC_6(int VAR_5, int VAR_6, unsigned int VAR_7)
{
 u32 VAR_8, VAR_9;
 unsigned long VAR_10;

 if (VAR_5 >= VAR_0)
  return -VAR_1;

 VAR_9 = FUNC_1(VAR_7);
 if (VAR_9 & ~VAR_2)
  return -VAR_1;

 FUNC_4(&VAR_4, VAR_10);
 VAR_8 = FUNC_2(FUNC_0(VAR_5));

 if (VAR_6)
  VAR_8 &= ~VAR_3;
 else
  VAR_8 |= VAR_3;

 VAR_8 &= ~VAR_2;
 VAR_8 |= VAR_9;
 FUNC_3(VAR_8, FUNC_0(VAR_5));

 FUNC_5(&VAR_4, VAR_10);
 return 0;
}
