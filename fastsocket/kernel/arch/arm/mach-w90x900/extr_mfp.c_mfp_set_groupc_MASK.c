
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;
 char* FUNC_3 (struct device*) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

void FUNC_7(struct device *VAR_5)
{
 unsigned long VAR_6;
 const char *VAR_7;

 FUNC_0(!VAR_5);

 FUNC_4(&VAR_4);

 VAR_7 = FUNC_3(VAR_5);

 VAR_6 = FUNC_1(VAR_3);

 if (FUNC_6(VAR_7, "nuc900-lcd") == 0)
  VAR_6 |= VAR_2;
 else if (FUNC_6(VAR_7, "nuc900-kpi") == 0) {
  VAR_6 &= (~VAR_2);
  VAR_6 |= VAR_0;
 } else if (FUNC_6(VAR_7, "nuc900-nand") == 0) {
  VAR_6 &= (~VAR_2);
  VAR_6 |= VAR_1;
 } else
  VAR_6 &= (~VAR_2);

 FUNC_2(VAR_6, VAR_3);

 FUNC_5(&VAR_4);
}
