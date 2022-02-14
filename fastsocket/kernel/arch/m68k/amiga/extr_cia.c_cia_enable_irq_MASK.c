
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,unsigned char) ;
 int FUNC_1 (int *,unsigned char) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_5)
{
 unsigned char VAR_6;

 if (VAR_5 >= VAR_2) {
  VAR_6 = 1 << (VAR_5 - VAR_2);
  FUNC_1(&VAR_4, VAR_6);
  FUNC_0(&VAR_4, VAR_0 | VAR_6);
 } else {
  VAR_6 = 1 << (VAR_5 - VAR_1);
  FUNC_1(&VAR_3, VAR_6);
  FUNC_0(&VAR_3, VAR_0 | VAR_6);
 }
}
