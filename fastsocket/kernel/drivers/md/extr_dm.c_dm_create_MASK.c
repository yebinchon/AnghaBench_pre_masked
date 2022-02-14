
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;


 int VAR_0 ;
 struct mapped_device* FUNC_0 (int) ;
 int FUNC_1 (struct mapped_device*) ;

int FUNC_2(int VAR_1, struct mapped_device **VAR_2)
{
 struct mapped_device *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_1(VAR_3);

 *VAR_2 = VAR_3;
 return 0;
}
