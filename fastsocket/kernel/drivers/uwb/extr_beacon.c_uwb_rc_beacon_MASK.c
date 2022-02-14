
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;
struct uwb_rc {int beaconing; TYPE_2__* ies; TYPE_1__ uwb_dev; } ;
struct TYPE_4__ {int wIELength; } ;


 int FUNC_0 (struct device*,char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct uwb_rc*,TYPE_2__*) ;
 int FUNC_3 (struct uwb_rc*,unsigned int,int) ;
 int FUNC_4 (struct uwb_rc*) ;

int FUNC_5(struct uwb_rc *VAR_0, int VAR_1, unsigned VAR_2)
{
 int VAR_3;
 struct device *VAR_4 = &VAR_0->uwb_dev.dev;

 if (VAR_1 < 0)
  VAR_1 = -1;
 if (VAR_1 == -1)
  VAR_3 = FUNC_4(VAR_0);
 else {

  VAR_3 = FUNC_3(VAR_0, VAR_2, VAR_1);
  if (VAR_3 < 0)
   return VAR_3;
  if (FUNC_1(VAR_0->ies->wIELength) > 0) {
   VAR_3 = FUNC_2(VAR_0, VAR_0->ies);
   if (VAR_3 < 0) {
    FUNC_0(VAR_4, "Cannot set new IE on device: "
     "%d\n", VAR_3);
    VAR_3 = FUNC_4(VAR_0);
    VAR_1 = -1;
    VAR_2 = 0;
   }
  }
 }

 if (VAR_3 >= 0)
  VAR_0->beaconing = VAR_1;
 return VAR_3;
}
