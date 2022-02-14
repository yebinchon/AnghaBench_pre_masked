
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct ci13xxx {TYPE_1__ gadget; } ;


 struct ci13xxx* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct ci13xxx*) ;

__attribute__((used)) static void FUNC_4(void)
{
 struct ci13xxx *VAR_1 = VAR_0;

 if (VAR_1 == ((void*)0)) {
  FUNC_2("EINVAL");
  return;
 }




 FUNC_1(&VAR_1->gadget.dev);

 FUNC_3(VAR_1);
 VAR_0 = ((void*)0);
}
