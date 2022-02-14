
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mca_device {int dummy; } ;


 unsigned char FUNC_0 (struct mca_device*,int) ;
 struct mca_device* FUNC_1 (int) ;

unsigned char FUNC_2(int VAR_0, int VAR_1)
{
 struct mca_device *VAR_2 = FUNC_1(VAR_0);

 if(!VAR_2)
  return 0;

 return FUNC_0(VAR_2, VAR_1);
}
