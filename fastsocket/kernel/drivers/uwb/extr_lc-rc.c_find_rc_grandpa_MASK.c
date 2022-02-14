
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* parent; } ;
struct TYPE_6__ {TYPE_2__ dev; } ;
struct uwb_rc {TYPE_3__ uwb_dev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device* parent; } ;


 struct uwb_rc* FUNC_0 (struct device*) ;
 struct uwb_rc* FUNC_1 (struct uwb_rc*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 struct device *VAR_2 = VAR_1;
 struct uwb_rc *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3->uwb_dev.dev.parent->parent == VAR_2) {
  VAR_3 = FUNC_1(VAR_3);
  return 1;
 }
 return 0;
}
