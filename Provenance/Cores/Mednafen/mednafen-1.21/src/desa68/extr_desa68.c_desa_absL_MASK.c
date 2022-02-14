
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; unsigned int immsym_min; unsigned int immsym_max; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned int,int,char) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(int VAR_2)
{
  unsigned int VAR_3 = VAR_2 & 0xFFFFFF;

  if ((VAR_1.flags&VAR_0) && VAR_3>=VAR_1.immsym_min && VAR_3<VAR_1.immsym_max) {
    FUNC_1(VAR_3, 6, 'L');
  } else {
    FUNC_2(VAR_2);
    FUNC_0(".L");
  }
}
