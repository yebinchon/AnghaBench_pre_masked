
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_device {int unregistered; scalar_t__ reset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ap_device*,unsigned long*) ;
 int FUNC_1 (struct ap_device*) ;

__attribute__((used)) static int FUNC_2(struct ap_device *VAR_1, unsigned long *VAR_2)
{
 if (!VAR_1->unregistered) {
  if (FUNC_0(VAR_1, VAR_2))
   VAR_1->unregistered = 1;
  if (VAR_1->reset == VAR_0)
   FUNC_1(VAR_1);
 }
 return 0;
}
