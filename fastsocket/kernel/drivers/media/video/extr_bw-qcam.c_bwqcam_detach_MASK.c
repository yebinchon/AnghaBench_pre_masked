
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcam_device {TYPE_1__* pdev; } ;
struct parport {int dummy; } ;
struct TYPE_2__ {struct parport* port; } ;


 int FUNC_0 (struct qcam_device*) ;
 int VAR_0 ;
 struct qcam_device** VAR_1 ;

__attribute__((used)) static void FUNC_1(struct parport *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct qcam_device *VAR_4 = VAR_1[VAR_3];
  if (VAR_4 && VAR_4->pdev->port == VAR_2) {
   VAR_1[VAR_3] = ((void*)0);
   FUNC_0(VAR_4);
  }
 }
}
