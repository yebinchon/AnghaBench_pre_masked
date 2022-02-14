
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hso_device {int dummy; } ;


 int VAR_0 ;
 struct hso_device** VAR_1 ;

__attribute__((used)) static int FUNC_0(struct hso_device *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3] == VAR_2) {
   VAR_1[VAR_3] = ((void*)0);
   break;
  }
 }
 if (VAR_3 == VAR_0)
  return -1;
 return 0;
}
