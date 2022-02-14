
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carlu {int dummy; } ;


 struct carlu* FUNC_0 (int) ;
 struct carlu* FUNC_1 (int) ;
 int FUNC_2 (struct carlu*) ;
 int FUNC_3 (struct carlu*,int) ;
 int FUNC_4 (struct carlu*) ;

__attribute__((used)) static struct carlu *FUNC_5(void)
{
 struct carlu *VAR_0;
 int VAR_1;

 VAR_0 = FUNC_1(sizeof(*VAR_0));
 if (VAR_0 == ((void*)0))
  return ((void*)0);

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1 < 0)
  goto err_out;

 VAR_1 = FUNC_3(VAR_0, 1);
 if (VAR_1 < 0)
  goto err_out;

 return VAR_0;

err_out:
 FUNC_2(VAR_0);
 return FUNC_0(VAR_1);
}
