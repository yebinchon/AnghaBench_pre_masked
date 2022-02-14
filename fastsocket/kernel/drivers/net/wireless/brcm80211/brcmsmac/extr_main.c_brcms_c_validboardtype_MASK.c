
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct brcms_hardware {int boardrev; int sih; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct brcms_hardware *VAR_1)
{
 uint VAR_2 = VAR_1->boardrev;


 uint VAR_3 = (VAR_2 & 0xf000) >> 12;
 uint VAR_4 = (VAR_2 & 0xf00) >> 8;
 uint VAR_5 = (VAR_2 & 0xf0) >> 4;
 uint VAR_6 = VAR_2 & 0xf;


 if (FUNC_0(VAR_1->sih) != VAR_0)
  return 1;


 if (VAR_2 == 0)
  return 0;

 if (VAR_2 <= 0xff)
  return 1;

 if ((VAR_3 > 2) || (VAR_3 == 0) || (VAR_4 > 9) || (VAR_4 == 0) || (VAR_5 > 9)
  || (VAR_6 > 9))
  return 0;

 return 1;
}
