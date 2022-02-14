
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {scalar_t__ state; int kick_validate; int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct dasd_device *VAR_2)
{
 FUNC_0(VAR_2);

 if (FUNC_3(VAR_0, &VAR_2->flags) ||
     VAR_2->state < VAR_1) {
  FUNC_1(VAR_2);
  return;
 }

 FUNC_2(&VAR_2->kick_validate);
}
