
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int const* VAR_2 ;
 int VAR_3 ;
 int const* VAR_4 ;

__attribute__((used)) static UBYTE const * FUNC_0(UBYTE VAR_5)
{



 if (VAR_0
     && (VAR_5 & 0x02) == 0
     && ((VAR_5 & 0x10) != 0 || (VAR_3 != 576 && VAR_3 != 1088)))
  return VAR_2;




 if (VAR_1
     && (VAR_5 & 0x40) == 0
     && ((VAR_5 & 0x10) != 0 || VAR_3 < 320))
  return VAR_4;
 return ((void*)0);
}
