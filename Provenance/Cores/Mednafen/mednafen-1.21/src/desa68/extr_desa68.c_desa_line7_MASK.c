
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ s8 ;
struct TYPE_2__ {int w; scalar_t__ reg9; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
  if(VAR_0.w&0400) {
    FUNC_1();
  } else {
    FUNC_3("MOVEQ #");
    FUNC_2((int)(s8)VAR_0.w);
    FUNC_0(',D0'+VAR_0.reg9);
  }
}
