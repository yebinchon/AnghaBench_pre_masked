
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;
 char* FUNC_3 (struct device*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

void FUNC_7(struct device *VAR_3)
{
 unsigned long VAR_4;
 const char *VAR_5;

 FUNC_0(!VAR_3);

 FUNC_4(&VAR_2);

 VAR_5 = FUNC_3(VAR_3);

 VAR_4 = FUNC_1(VAR_1);

 if (FUNC_6(VAR_5, "nuc900-emc") == 0)
  VAR_4 |= VAR_0;
 else
  VAR_4 &= ~VAR_0;

 FUNC_2(VAR_4, VAR_1);

 FUNC_5(&VAR_2);
}
