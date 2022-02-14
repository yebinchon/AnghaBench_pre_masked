
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_6__ {int sigh; } ;
typedef TYPE_1__ FPU_REG ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_5 ;

 int VAR_6 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(FPU_REG *VAR_7, u_char VAR_8)
{
 int VAR_9;

 switch (VAR_8) {
 case 128:
  VAR_9 = (FUNC_2(VAR_7) == VAR_2)
      && (VAR_7->sigh & 0x80000000);
  if (VAR_9 && !(VAR_7->sigh & 0x40000000)) {
   FUNC_0(VAR_4);
   if (VAR_6 & VAR_1) {


    VAR_7->sigh |= 0x40000000;
    FUNC_3();
    FUNC_1(VAR_7, VAR_5);
   }
  } else if (VAR_9) {

   FUNC_3();
   FUNC_1(VAR_7, VAR_5);
  } else {

   FUNC_0(VAR_4);
   if (VAR_6 & VAR_1) {

    FUNC_1(&VAR_0, VAR_5);
    FUNC_3();
    FUNC_1(&VAR_0, VAR_5);
   }
  }
  break;




 }
}
