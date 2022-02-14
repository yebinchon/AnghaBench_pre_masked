
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(unsigned int VAR_4)
{
 unsigned int VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 VAR_4 -= VAR_0;
 VAR_5 = 1 << VAR_4;
 FUNC_1(&VAR_3, VAR_6);
 if (VAR_4 < 8)
  VAR_7 = FUNC_0(VAR_1) & VAR_5;
 else
  VAR_7 = FUNC_0(VAR_2) & (VAR_5 >> 8);
 FUNC_2(&VAR_3, VAR_6);

 return VAR_7;
}
