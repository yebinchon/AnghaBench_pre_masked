
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int loadflags; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 () ;

int FUNC_15(void)
{

 FUNC_1();


 FUNC_5();


 if (FUNC_14()) {
  FUNC_7("Unable to boot - please use a kernel appropriate "
       "for your CPU.\n");
  FUNC_3();
 }


 FUNC_12();


 FUNC_2();


 FUNC_6();


 FUNC_11();


 FUNC_10();
 FUNC_13();


 if (FUNC_0("quiet"))
  VAR_1.hdr.loadflags |= VAR_0;


 FUNC_4();
}
