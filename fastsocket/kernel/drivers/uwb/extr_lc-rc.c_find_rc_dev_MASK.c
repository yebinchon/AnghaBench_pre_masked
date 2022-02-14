
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev_addr; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;
struct uwb_dev_addr {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 struct uwb_rc* FUNC_1 (struct device*) ;
 int FUNC_2 (int *,struct uwb_dev_addr*) ;
 struct uwb_rc* FUNC_3 (struct uwb_rc*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, void *VAR_1)
{
 struct uwb_dev_addr *VAR_2 = VAR_1;
 struct uwb_rc *VAR_3 = FUNC_1(VAR_0);

 if (VAR_3 == ((void*)0)) {
  FUNC_0(1);
  return 0;
 }
 if (!FUNC_2(&VAR_3->uwb_dev.dev_addr, VAR_2)) {
  VAR_3 = FUNC_3(VAR_3);
  return 1;
 }
 return 0;
}
