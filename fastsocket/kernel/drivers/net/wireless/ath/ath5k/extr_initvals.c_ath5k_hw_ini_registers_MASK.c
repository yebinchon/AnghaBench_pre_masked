
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_ini {scalar_t__ ini_register; int ini_mode; int ini_value; } ;
struct ath5k_hw {int dummy; } ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct ath5k_hw*,scalar_t__) ;
 int FUNC_2 (struct ath5k_hw*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct ath5k_hw *VAR_2, unsigned int VAR_3,
  const struct ath5k_ini *VAR_4, bool VAR_5)
{
 unsigned int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {


  if (VAR_5 &&
    VAR_4[VAR_6].ini_register >= VAR_1 &&
    VAR_4[VAR_6].ini_register <= VAR_0)
   continue;

  switch (VAR_4[VAR_6].ini_mode) {
  case 129:

   FUNC_1(VAR_2, VAR_4[VAR_6].ini_register);
   break;
  case 128:
  default:
   FUNC_0(VAR_6);
   FUNC_2(VAR_2, VAR_4[VAR_6].ini_value,
     VAR_4[VAR_6].ini_register);
  }
 }
}
