
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

int FUNC_3(void)
{
 int VAR_4;
 unsigned long VAR_5;

 FUNC_0(&VAR_1, VAR_5);

 if (FUNC_2(VAR_2, VAR_3)) {
  VAR_4 = 1;
  VAR_3 = VAR_2 + (VAR_0/5);
 } else
  VAR_4 = 0;

 FUNC_1(&VAR_1, VAR_5);

 return VAR_4;
}
