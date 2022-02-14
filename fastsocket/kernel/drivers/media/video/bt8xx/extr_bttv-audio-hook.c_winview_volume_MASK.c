
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bttv {int dummy; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

void FUNC_3(struct bttv *VAR_7, __u16 VAR_8)
{

 int VAR_9, VAR_10, VAR_11, VAR_12;


 VAR_11 = 32 - ((VAR_8>>11));

 VAR_9 = (VAR_1>>(VAR_11%5));

 VAR_9 |= (VAR_0>>(VAR_11/5));
 VAR_9 |= VAR_2 | VAR_3;
 VAR_12 = FUNC_0();
 VAR_12 &= ~(VAR_4| VAR_5|
    VAR_6);
 for (VAR_10 = 17; VAR_10 >= 0 ; VAR_10--) {
  if (VAR_9 & (1<<VAR_10))
   VAR_12 |= VAR_5;
  else
   VAR_12 &= ~VAR_5;
  FUNC_1(VAR_12);
  FUNC_2(5);
  VAR_12 |= VAR_4;
  FUNC_1(VAR_12);
  FUNC_2(5);
  VAR_12 &= ~VAR_4;
  FUNC_1(VAR_12);
 }
 VAR_12 |= VAR_6;
 VAR_12 &= ~VAR_5;
 FUNC_1(VAR_12);
 FUNC_2(10);
 VAR_12 &= ~VAR_6;
 FUNC_1(VAR_12);
}
