
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(unsigned int VAR_3)
{
 unsigned int VAR_4 = 1<<VAR_3;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_1(&VAR_2, VAR_5);
 if (VAR_3 < 8)
  VAR_6 = FUNC_0(VAR_0) & VAR_4;
 else
  VAR_6 = FUNC_0(VAR_1) & (VAR_4 >> 8);
 FUNC_2(&VAR_2, VAR_5);

 return VAR_6;
}
