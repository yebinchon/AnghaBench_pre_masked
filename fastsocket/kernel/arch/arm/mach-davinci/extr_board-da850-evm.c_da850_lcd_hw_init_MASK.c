
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0, "lcd bl\n");
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_1, "lcd pwr\n");
 if (VAR_2 < 0) {
  FUNC_1(VAR_0);
  return VAR_2;
 }

 FUNC_0(VAR_0, 0);
 FUNC_0(VAR_1, 0);


 FUNC_3(VAR_0, 0);


 FUNC_3(VAR_1, 0);


 FUNC_3(VAR_1, 1);


 FUNC_3(VAR_0, 1);

 return 0;
}
