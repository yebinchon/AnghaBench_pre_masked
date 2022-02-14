
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int code32_start; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;

void FUNC_10(void)
{

 FUNC_6();


 if (FUNC_2()) {
  FUNC_5("A20 gate not responding, unable to boot...\n");
  FUNC_0();
 }


 FUNC_7();


 FUNC_3();


 FUNC_9();
 FUNC_8();
 FUNC_4(VAR_0.hdr.code32_start,
       (u32)&VAR_0 + (FUNC_1() << 4));
}
