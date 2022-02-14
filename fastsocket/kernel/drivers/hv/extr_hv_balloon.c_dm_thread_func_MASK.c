
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hv_dynmem_device {int dummy; } ;
struct TYPE_2__ {int config_event; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct hv_dynmem_device*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_2)
{
 struct hv_dynmem_device *VAR_3 = VAR_2;
 int VAR_4;

 while (!FUNC_0()) {
  VAR_4 = FUNC_2(&VAR_1.config_event, 1*VAR_0);





  if (VAR_4 == 0)
   FUNC_1(VAR_3);

 }

 return 0;
}
