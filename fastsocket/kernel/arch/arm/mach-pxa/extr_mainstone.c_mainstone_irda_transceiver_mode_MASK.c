
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct device*,int) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_8, int VAR_9)
{
 unsigned long VAR_10;

 FUNC_1(VAR_10);
 if (VAR_9 & VAR_2) {
  VAR_3 &= ~VAR_4;
 } else if (VAR_9 & VAR_0) {
  VAR_3 |= VAR_4;
 }
 FUNC_2(VAR_8, VAR_9);
 if (VAR_9 & VAR_1) {
  VAR_3 = (VAR_3 & ~VAR_6) | VAR_7;
 } else {
  VAR_3 = (VAR_3 & ~VAR_6) | VAR_5;
 }
 FUNC_0(VAR_10);
}
