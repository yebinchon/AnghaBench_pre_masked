
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int,unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10;
 int VAR_11 = (0xf6 << 10) | (VAR_8 << 5) | VAR_9;
 unsigned int VAR_12 = 0;
 unsigned int VAR_13 = VAR_7 + VAR_5;

 if (VAR_6)
  FUNC_1(VAR_7, 32);


 for (VAR_10 = 14; VAR_10 >= 0; VAR_10--) {
  int VAR_14 = (VAR_11&(1<<VAR_10)) ? VAR_2 : VAR_1;
  FUNC_2(VAR_14, VAR_13);
  FUNC_2(VAR_14 | VAR_4, VAR_13);
 }

 for (VAR_10 = 19; VAR_10 > 0; VAR_10--) {
  FUNC_2(VAR_3, VAR_13);
  VAR_12 = (VAR_12 << 1) | ((FUNC_0(VAR_13) & VAR_0) ? 1 : 0);
  FUNC_2(VAR_3 | VAR_4, VAR_13);
 }
 return (VAR_12>>1) & 0xffff;
}
