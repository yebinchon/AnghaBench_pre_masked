
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_7)
{
 unsigned int VAR_8;
 unsigned long VAR_9;

 VAR_7 -= VAR_0;
 VAR_8 = 1 << VAR_7;
 FUNC_1(&VAR_6, VAR_9);
 VAR_3 |= VAR_8;
 if (VAR_7 & 8)
  FUNC_0(VAR_5, VAR_2);
 else
  FUNC_0(VAR_4, VAR_1);
 FUNC_2(&VAR_6, VAR_9);
}
