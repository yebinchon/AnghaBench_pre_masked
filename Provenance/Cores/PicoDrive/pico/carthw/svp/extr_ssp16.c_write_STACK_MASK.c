
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * stack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*,int,int ) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_2(u32 VAR_4)
{
 if (VAR_2 >= 6) {
  FUNC_1(VAR_0|VAR_1, "ssp FIXME: stack overflow! (%i) @ %04x", VAR_2, FUNC_0());
  VAR_2 = 0;
 }
 VAR_3->stack[VAR_2++] = VAR_4;
}
