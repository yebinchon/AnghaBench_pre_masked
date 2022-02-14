
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int extensionLoaded; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;

bool
FUNC_4(void)
{
 if (!VAR_0.extensionLoaded || VAR_1)
 {





  bool VAR_2 = FUNC_0();

  if (VAR_2 && !VAR_0.extensionLoaded)
  {
   FUNC_3();
   FUNC_2();






   FUNC_1();
  }

  VAR_0.extensionLoaded = VAR_2;
 }

 return VAR_0.extensionLoaded;
}
