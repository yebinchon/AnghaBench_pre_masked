
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mca_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct mca_device*) ;
 int FUNC_1 (struct mca_device*,int) ;
 struct mca_device* FUNC_2 (int) ;

int FUNC_3(int VAR_0)
{
 struct mca_device *VAR_1 = FUNC_2(VAR_0);

 if(!VAR_1)

  return 1;

 if(FUNC_0(VAR_1))
  return 1;

 FUNC_1(VAR_1, 1);

 return 0;
}
