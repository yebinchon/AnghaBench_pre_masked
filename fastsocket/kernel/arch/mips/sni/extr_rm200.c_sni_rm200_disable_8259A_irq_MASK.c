
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_8)
{
 unsigned int VAR_9;
 unsigned long VAR_10;

 VAR_8 -= VAR_1;
 VAR_9 = 1 << VAR_8;
 FUNC_0(&VAR_7, VAR_10);
 VAR_4 |= VAR_9;
 if (VAR_8 & 8)
  FUNC_2(VAR_3, VAR_6 + VAR_0);
 else
  FUNC_2(VAR_2, VAR_5 + VAR_0);
 FUNC_1(&VAR_7, VAR_10);
}
