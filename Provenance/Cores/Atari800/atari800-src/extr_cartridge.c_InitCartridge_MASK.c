
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int type; } ;
typedef TYPE_1__ CARTRIDGE_image_t ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static void FUNC_6(CARTRIDGE_image_t *VAR_6)
{
 FUNC_4(VAR_6);
 FUNC_5(VAR_6);
 if (VAR_6 == &VAR_3) {

  int VAR_7 = FUNC_2(VAR_3.type);
  if (VAR_7 && VAR_2 != VAR_0) {
   FUNC_1(VAR_0);
   VAR_4 = 16;
   FUNC_0();
  }
  else if (!VAR_7 && VAR_2 == VAR_0) {
   FUNC_1(VAR_1);
   VAR_4 = 64;
   FUNC_0();
  }
 }
 if (VAR_6 == VAR_5)
  FUNC_3();
}
