
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_6__ {int sigh; } ;
typedef TYPE_1__ FPU_REG ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;







 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(FPU_REG *VAR_6, u_char VAR_7)
{
 int VAR_8 = 0;
 switch (VAR_7) {
 case 134:
  VAR_8 = VAR_5 | VAR_2;
  break;
 case 131:
  VAR_8 = VAR_5;
  break;
 case 132:
  VAR_8 = VAR_4;
  break;
 case 133:
  switch (FUNC_0(VAR_6)) {
  case 130:
   VAR_8 = VAR_4 | VAR_5;
   break;
  case 128:

   if ((VAR_6->sigh & 0x80000000)
       && (FUNC_1(VAR_6) == VAR_0))
    VAR_8 = VAR_2;
   break;
  case 129:
   VAR_8 = VAR_4 | VAR_2;
   break;
  }
 }
 if (FUNC_2(VAR_6) == VAR_1)
  VAR_8 |= VAR_3;
 FUNC_3(VAR_8);
}
