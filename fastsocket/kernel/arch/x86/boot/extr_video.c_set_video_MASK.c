
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ vid_mode; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

void FUNC_9(void)
{
 u16 VAR_3 = VAR_1.hdr.vid_mode;

 FUNC_0();

 FUNC_7();
 FUNC_5();
 FUNC_3(0);

 for (;;) {
  if (VAR_3 == VAR_0)
   VAR_3 = FUNC_1();

  if (!FUNC_6(VAR_3))
   break;

  FUNC_2("Undefined video mode number: %x\n", VAR_3);
  VAR_3 = VAR_0;
 }
 VAR_1.hdr.vid_mode = VAR_3;
 FUNC_8();
 FUNC_7();

 if (VAR_2)
  FUNC_4();
}
