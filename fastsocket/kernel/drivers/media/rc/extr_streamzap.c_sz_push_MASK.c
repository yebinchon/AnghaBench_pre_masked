
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct streamzap_ir {int rdev; int dev; } ;
struct ir_raw_event {int duration; scalar_t__ pulse; } ;


 int FUNC_0 (int ,char*,char*,int ) ;
 int FUNC_1 (int ,struct ir_raw_event*) ;

__attribute__((used)) static void FUNC_2(struct streamzap_ir *VAR_0, struct ir_raw_event VAR_1)
{
 FUNC_0(VAR_0->dev, "Storing %s with duration %u us\n",
  (VAR_1.pulse ? "pulse" : "space"), VAR_1.duration);
 FUNC_1(VAR_0->rdev, &VAR_1);
}
