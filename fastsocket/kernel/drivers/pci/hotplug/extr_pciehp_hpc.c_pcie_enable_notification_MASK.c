
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct controller {int dummy; } ;


 scalar_t__ FUNC_0 (struct controller*) ;
 scalar_t__ FUNC_1 (struct controller*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct controller*) ;
 int FUNC_3 (struct controller*,char*) ;
 scalar_t__ FUNC_4 (struct controller*,int,int) ;
 int VAR_6 ;

int FUNC_5(struct controller *VAR_7)
{
 u16 VAR_8, VAR_9;

 VAR_8 = VAR_4;
 if (FUNC_0(VAR_7))
  VAR_8 |= VAR_0;
 if (FUNC_2(VAR_7))
  VAR_8 |= VAR_5;
 if (FUNC_1(VAR_7))
  VAR_8 |= VAR_3;
 if (!VAR_6)
  VAR_8 |= VAR_2 | VAR_1;

 VAR_9 = (VAR_4 | VAR_0 |
  VAR_3 | VAR_5 |
  VAR_2 | VAR_1);

 if (FUNC_4(VAR_7, VAR_8, VAR_9)) {
  FUNC_3(VAR_7, "Cannot enable software notification\n");
  return -1;
 }
 return 0;
}
