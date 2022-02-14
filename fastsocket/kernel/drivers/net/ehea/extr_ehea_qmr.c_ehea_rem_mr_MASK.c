
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ehea_mr {int handle; TYPE_1__* adapter; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

int FUNC_2(struct ehea_mr *VAR_4)
{
 u64 VAR_5;

 if (!VAR_4 || !VAR_4->adapter)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_4->adapter->handle, VAR_4->handle,
        VAR_2);
 if (VAR_5 != VAR_3) {
  FUNC_0("destroy MR failed");
  return -VAR_1;
 }

 return 0;
}
