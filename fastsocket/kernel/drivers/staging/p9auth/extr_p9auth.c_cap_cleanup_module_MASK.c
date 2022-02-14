
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dev_t ;
struct TYPE_4__ {int cdev; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(void)
{
 int VAR_4;
 dev_t VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (VAR_0) {
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
   FUNC_1(VAR_0 + VAR_4);
   FUNC_2(&VAR_0[VAR_4].cdev);
  }
  FUNC_3(VAR_0);
 }
 FUNC_4(VAR_5, VAR_3);

}
