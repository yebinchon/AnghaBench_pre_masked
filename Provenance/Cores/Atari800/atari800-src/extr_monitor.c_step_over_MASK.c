
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;

__attribute__((used)) static void FUNC_1(void)
{
 UBYTE VAR_6 = FUNC_0(VAR_0);
 if ((VAR_6 & 0x1f) == 0x10 || VAR_6 == 0x20) {

  VAR_1 = VAR_0 + (VAR_3[FUNC_0(VAR_0)] & 0x3);
  VAR_5 = VAR_4;
 }
 else
  VAR_2 = VAR_4;
}
