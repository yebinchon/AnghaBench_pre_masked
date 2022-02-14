
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int* VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_8, unsigned int VAR_9)
{
 unsigned long VAR_10;

 FUNC_2(&VAR_7, VAR_10);

  if (VAR_9) {
  FUNC_0(VAR_8, VAR_3);
  FUNC_1(VAR_8, VAR_2);

  *VAR_4 = (VAR_9 & ~VAR_6) | VAR_5;
 } else {
  FUNC_0(VAR_8, VAR_1);
  FUNC_1(VAR_8, VAR_0);

  *VAR_4 = 0;
 }

 FUNC_3(&VAR_7, VAR_10);
}
