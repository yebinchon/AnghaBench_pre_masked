
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;

void FUNC_1(void)
{
 int VAR_6 = VAR_1[VAR_3];
 int VAR_7 = (VAR_4 & 0x10) ? VAR_0 : 0;
 int VAR_8 = (VAR_7 & 1);
 int VAR_9;
 int VAR_10;



 if (VAR_5 >= 2 && VAR_5 <= 5) {
  VAR_10 = (((VAR_7 >>1) - VAR_6 + 0) & 1) * 2 + 9;
 }
 else if (VAR_5 == 6 || VAR_5 == 7) {
  VAR_10 = (((VAR_7 >> 1) - VAR_6 + 2) & 3) * 2 + 9;
 }
 else {
  VAR_10 = 0;
 }
 VAR_9 = VAR_6 * 2 - 37 + VAR_8 + VAR_10;
 FUNC_0(VAR_2, VAR_9);
 VAR_2 = VAR_9;
}
