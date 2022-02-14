
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flags; unsigned int immsym_min; unsigned int immsym_max; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned int) ;

__attribute__((used)) static void FUNC_6(int VAR_2)
{
  unsigned int VAR_3 = VAR_2;
  FUNC_1('#');
  if ((VAR_1.flags&VAR_0) && VAR_3>=VAR_1.immsym_min && VAR_3<VAR_1.immsym_max) {
    FUNC_3(VAR_3);
    FUNC_5(VAR_3);
  } else {
    if(FUNC_2(VAR_3) && FUNC_2(VAR_3>>8) && FUNC_2(VAR_3>>16) && FUNC_2(VAR_3>>24)) {
      FUNC_1 ('\'');
      FUNC_0((u32)VAR_3);
      FUNC_1 ('\'');
    } else {
      FUNC_4(VAR_2);
    }
  }
}
