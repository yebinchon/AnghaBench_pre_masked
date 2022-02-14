
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wahc {int rpipe_bm; int rpipes; TYPE_1__* usb_iface; } ;
struct device {int dummy; } ;
typedef int buf ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int,int ,int ) ;
 int FUNC_3 (struct device*,char*,char*) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct wahc *VAR_0)
{
 struct device *VAR_1 = &VAR_0->usb_iface->dev;

 if (!FUNC_1(VAR_0->rpipe_bm, VAR_0->rpipes)) {
  char VAR_2[256];
  FUNC_0(1);
  FUNC_2(VAR_2, sizeof(VAR_2), VAR_0->rpipe_bm, VAR_0->rpipes);
  FUNC_3(VAR_1, "BUG: pipes not released on exit: %s\n", VAR_2);
 }
 FUNC_4(VAR_0->rpipe_bm);
}
