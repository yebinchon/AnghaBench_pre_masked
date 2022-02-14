
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt1 {TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt1*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct pt1 *VAR_1)
{
 int VAR_2, VAR_3;
 int VAR_4;
 FUNC_1((VAR_0 + 999) / 1000);
 VAR_4 = VAR_1->pdev->device == 0x211a ? 128 : 166;
 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
  VAR_3 = FUNC_0(VAR_1);
  if (VAR_3 < 0)
   return VAR_3;
 }
 return 0;
}
