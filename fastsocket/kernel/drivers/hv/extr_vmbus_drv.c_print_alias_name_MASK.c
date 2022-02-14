
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* b; } ;
struct hv_device {TYPE_1__ dev_type; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void FUNC_1(struct hv_device *VAR_1, char *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3 += 2)
  FUNC_0(&VAR_2[VAR_3], "%02x", VAR_1->dev_type.b[VAR_3/2]);
}
