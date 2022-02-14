
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;
 char* FUNC_3 (struct device*) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

void FUNC_7(struct device *VAR_7)
{
 unsigned long VAR_8;
 const char *VAR_9;

 FUNC_0(!VAR_7);

 FUNC_4(&VAR_6);

 VAR_9 = FUNC_3(VAR_7);

 VAR_8 = FUNC_1(VAR_5);

 if (FUNC_6(VAR_9, "nuc900-spi") == 0) {
  VAR_8 &= ~(VAR_3 | VAR_4);
  VAR_8 |= VAR_2;
 } else if (FUNC_6(VAR_9, "nuc900-i2c0") == 0) {
  VAR_8 &= ~(VAR_3);
  VAR_8 |= VAR_0;
 } else if (FUNC_6(VAR_9, "nuc900-i2c1") == 0) {
  VAR_8 &= ~(VAR_4);
  VAR_8 |= VAR_1;
 } else {
  VAR_8 &= ~(VAR_3 | VAR_4);
 }

 FUNC_2(VAR_8, VAR_5);

 FUNC_5(&VAR_6);
}
