
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* set_config ) (int ,int ,int) ;} ;
struct TYPE_3__ {int drv_data; int drv_id; int probed; } ;


 TYPE_2__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int *,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(int VAR_5)
{
 int VAR_6, VAR_7;


 if (!VAR_3) {
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   if (!VAR_2[VAR_6].probed)
    continue;

   FUNC_0(VAR_2[VAR_6].drv_id).set_config(
    VAR_2[VAR_6].drv_data, VAR_0,
    VAR_5);
  }
 }

 VAR_4 = 0;


 do {
  VAR_7 = FUNC_1(((void*)0), ((void*)0), ((void*)0), 0);
 } while (VAR_7 >= 0);

 return 0;
}
