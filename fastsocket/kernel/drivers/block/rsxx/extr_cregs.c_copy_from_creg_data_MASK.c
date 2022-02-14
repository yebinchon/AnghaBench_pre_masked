
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsxx_cardinfo {scalar_t__ regmap; int eeh_state; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct rsxx_cardinfo *VAR_2,
    int VAR_3,
    void *VAR_4,
    unsigned int VAR_5)
{
 int VAR_6 = 0;
 u32 *VAR_7 = VAR_4;

 if (FUNC_3(VAR_2->eeh_state))
  return -VAR_0;

 for (VAR_6 = 0; VAR_3 > 0; VAR_6++, VAR_3 -= 4) {




  if (VAR_1 && VAR_5)
   VAR_7[VAR_6] = FUNC_2(VAR_2->regmap + FUNC_0(VAR_6));
  else
   VAR_7[VAR_6] = FUNC_1(VAR_2->regmap + FUNC_0(VAR_6));
 }

 return 0;
}
