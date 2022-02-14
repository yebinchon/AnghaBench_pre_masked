
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsxx_cardinfo {scalar_t__ regmap; int eeh_state; } ;
struct creg_cmd {scalar_t__ addr; scalar_t__ cnt8; scalar_t__ op; int stream; scalar_t__ buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rsxx_cardinfo*,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct rsxx_cardinfo *VAR_4, struct creg_cmd *VAR_5)
{
 int VAR_6;

 if (FUNC_2(VAR_4->eeh_state))
  return;

 FUNC_1(VAR_5->addr, VAR_4->regmap + VAR_0);
 FUNC_1(VAR_5->cnt8, VAR_4->regmap + VAR_2);

 if (VAR_5->op == VAR_3) {
  if (VAR_5->buf) {
   VAR_6 = FUNC_0(VAR_4, VAR_5->cnt8,
            VAR_5->buf, VAR_5->stream);
   if (VAR_6)
    return;
  }
 }

 if (FUNC_2(VAR_4->eeh_state))
  return;


 FUNC_1(VAR_5->op, VAR_4->regmap + VAR_1);
}
