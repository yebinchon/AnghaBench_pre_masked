
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(unsigned int VAR_4, u32 VAR_5, unsigned int VAR_6)
{
 unsigned long VAR_7;
 u32 VAR_8;

 if (!FUNC_3(VAR_4))
  return -VAR_0;


 if (VAR_6 != FUNC_4(VAR_6))
  return -VAR_0;

 if (VAR_6 < 8 * 1024 || VAR_6 > 256 * 1024 * 1024)
  return -VAR_0;

 VAR_8 = (VAR_5 & VAR_1);

 VAR_8 |= (FUNC_2(VAR_6) - FUNC_2(8 * 1024)) << VAR_2;

 FUNC_5(&VAR_3, VAR_7);
 FUNC_1(VAR_8, FUNC_0(VAR_4));
 FUNC_6(&VAR_3, VAR_7);

 return 0;
}
