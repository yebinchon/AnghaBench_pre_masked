
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsxx_cardinfo {scalar_t__ regmap; } ;


 int FUNC_0 (struct rsxx_cardinfo*) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct rsxx_cardinfo *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5 = 0;


 while (VAR_5++ < 10) {
  VAR_4 = FUNC_2(VAR_3->regmap + VAR_0);

  if (VAR_4 & VAR_1) {
   FUNC_3(1);
   continue;
  }

  if (VAR_4 & VAR_2)
   FUNC_1(FUNC_0(VAR_3), "HW: flash controller timeout\n");
  return 0;
 }


 return -1;
}
