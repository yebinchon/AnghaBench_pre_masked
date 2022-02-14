
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {scalar_t__ running; TYPE_1__* desc; int name; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_2)
{

 if (VAR_2->desc->status == 0)
  FUNC_0(VAR_2);
 else if (VAR_2->desc->status & VAR_1) {
  FUNC_2("Device %s configuration FAILED", VAR_2->name);
  if (VAR_2->running)
   FUNC_0(VAR_2);
 } else if (VAR_2->desc->status & VAR_0) {
  if (!VAR_2->running)
   FUNC_1(VAR_2);
 }
}
