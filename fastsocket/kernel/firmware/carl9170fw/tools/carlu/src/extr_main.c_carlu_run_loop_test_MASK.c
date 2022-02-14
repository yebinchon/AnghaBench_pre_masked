
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carlu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct carlu*) ;
 int FUNC_1 (struct carlu*) ;
 int FUNC_2 (struct carlu*,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct carlu*,int,int,int,int) ;
 int FUNC_5 (struct carlu*) ;
 struct carlu* FUNC_6 () ;

__attribute__((used)) static int FUNC_7(void)
{
 struct carlu *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3();
 if (VAR_5)
  return VAR_2;

 VAR_4 = FUNC_6();
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
  goto out;
 }

 FUNC_2(VAR_4, VAR_0, 0xFFFFFFFF);
 FUNC_2(VAR_4, VAR_1, 0xFFFFFFFF);


 FUNC_4(VAR_4, 9000, 1000, 1566, 1566);
 FUNC_5(VAR_4);

out:
 return VAR_5 ? VAR_2 : VAR_3;
}
