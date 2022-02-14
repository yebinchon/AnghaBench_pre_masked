
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int VAR_4 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_5)
{
 unsigned long VAR_6;
 unsigned int VAR_7 = VAR_5 - VAR_2;

 FUNC_1(&VAR_4, VAR_6);

 VAR_3[VAR_7] &= ~VAR_0;
 if (VAR_3[VAR_7] == VAR_1)
  FUNC_0(VAR_7);

 FUNC_2(&VAR_4, VAR_6);
}
