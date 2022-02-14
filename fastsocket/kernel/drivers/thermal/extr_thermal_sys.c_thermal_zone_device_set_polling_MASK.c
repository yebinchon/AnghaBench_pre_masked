
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int poll_queue; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct thermal_zone_device *VAR_0,
         int VAR_1)
{
 FUNC_0(&(VAR_0->poll_queue));

 if (!VAR_1)
  return;

 if (VAR_1 > 1000)
  FUNC_3(&(VAR_0->poll_queue),
          FUNC_2(FUNC_1(VAR_1)));
 else
  FUNC_3(&(VAR_0->poll_queue),
          FUNC_1(VAR_1));
}
