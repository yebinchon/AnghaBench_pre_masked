
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;
 char* FUNC_3 (struct device*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

void FUNC_7(struct device *VAR_4)
{
 unsigned long VAR_5;
 const char *VAR_6;

 FUNC_0(!VAR_4);

 FUNC_4(&VAR_3);

 VAR_6 = FUNC_3(VAR_4);

 VAR_5 = FUNC_1(VAR_2);

 VAR_5 &= ~VAR_1;

 if (FUNC_6(VAR_6, "nuc900-wdog") == 0)
  VAR_5 |= VAR_1;
 else if (FUNC_6(VAR_6, "nuc900-atapi") == 0)
  VAR_5 |= VAR_0;
 else if (FUNC_6(VAR_6, "nuc900-keypad") == 0)
  VAR_5 &= ~VAR_0;

 FUNC_2(VAR_5, VAR_2);

 FUNC_5(&VAR_3);
}
