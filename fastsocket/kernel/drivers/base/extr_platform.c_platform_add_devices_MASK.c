
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;


 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*) ;

int FUNC_2(struct platform_device **VAR_0, int VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_3 = FUNC_0(VAR_0[VAR_2]);
  if (VAR_3) {
   while (--VAR_2 >= 0)
    FUNC_1(VAR_0[VAR_2]);
   break;
  }
 }

 return VAR_3;
}
