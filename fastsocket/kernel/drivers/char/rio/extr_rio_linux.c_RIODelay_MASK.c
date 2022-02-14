
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (int ) ;

int FUNC_6(struct Port *VAR_3, int VAR_4)
{
 FUNC_0();

 FUNC_4(VAR_0, "delaying %d jiffies\n", VAR_4);
 FUNC_3(FUNC_2(VAR_4));
 FUNC_1();

 if (FUNC_5(VAR_2))
  return VAR_1;
 else
  return !VAR_1;
}
