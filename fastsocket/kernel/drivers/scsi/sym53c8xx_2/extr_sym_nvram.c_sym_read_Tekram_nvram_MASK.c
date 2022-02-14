
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
struct sym_device {TYPE_1__* pdev; } ;
typedef int Tekram_nvram ;
struct TYPE_2__ {int device; } ;






 int VAR_0 ;
 int FUNC_0 (struct sym_device*,int ,int*,int) ;
 int FUNC_1 (struct sym_device*,int *) ;

__attribute__((used)) static int FUNC_2 (struct sym_device *VAR_1, Tekram_nvram *VAR_2)
{
 u_char *VAR_3 = (u_char *) VAR_2;
 int VAR_4 = sizeof(*VAR_2);
 u_short VAR_5;
 int VAR_6;

 switch (VAR_1->pdev->device) {
 case 130:
 case 129:
 case 128:
  VAR_6 = FUNC_0(VAR_1, VAR_0,
       VAR_3, VAR_4);
  break;
 case 131:
  VAR_6 = FUNC_0(VAR_1, VAR_0,
       VAR_3, VAR_4);
  if (!VAR_6)
   break;
 default:
  VAR_6 = FUNC_1(VAR_1, VAR_2);
  break;
 }
 if (VAR_6)
  return 1;


 for (VAR_6 = 0, VAR_5 = 0; VAR_6 < VAR_4 - 1; VAR_6 += 2)
  VAR_5 += VAR_3[VAR_6] + (VAR_3[VAR_6+1] << 8);
 if (VAR_5 != 0x1234)
  return 1;

 return 0;
}
