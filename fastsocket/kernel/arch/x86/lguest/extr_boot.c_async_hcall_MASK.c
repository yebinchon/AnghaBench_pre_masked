
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* hcall_status; TYPE_1__* hcalls; } ;
struct TYPE_3__ {unsigned long arg0; unsigned long arg1; unsigned long arg2; unsigned long arg3; unsigned long arg4; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2, unsigned long VAR_3,
   unsigned long VAR_4, unsigned long VAR_5,
   unsigned long VAR_6)
{

 static unsigned int VAR_7;
 unsigned long VAR_8;






 FUNC_2(VAR_8);
 if (VAR_1.hcall_status[VAR_7] != 0xFF) {

  FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 } else {
  VAR_1.hcalls[VAR_7].arg0 = VAR_2;
  VAR_1.hcalls[VAR_7].arg1 = VAR_3;
  VAR_1.hcalls[VAR_7].arg2 = VAR_4;
  VAR_1.hcalls[VAR_7].arg3 = VAR_5;
  VAR_1.hcalls[VAR_7].arg4 = VAR_6;

  FUNC_3();
  VAR_1.hcall_status[VAR_7] = 0;
  if (++VAR_7 == VAR_0)
   VAR_7 = 0;
 }
 FUNC_1(VAR_8);
}
