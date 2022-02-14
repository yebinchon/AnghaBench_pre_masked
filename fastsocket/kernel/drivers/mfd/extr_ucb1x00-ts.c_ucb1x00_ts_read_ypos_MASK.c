
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00_ts {int adcsync; int ucb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 () ;
 unsigned int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static inline unsigned int FUNC_5(struct ucb1x00_ts *VAR_8)
{
 if (FUNC_0())
  FUNC_2(VAR_8->ucb, 0, VAR_0);
 else {
  FUNC_3(VAR_8->ucb, VAR_2,
      VAR_6 | VAR_7 |
      VAR_5 | VAR_3);
  FUNC_3(VAR_8->ucb, VAR_2,
      VAR_6 | VAR_7 |
      VAR_5 | VAR_3);
 }

 FUNC_3(VAR_8->ucb, VAR_2,
   VAR_6 | VAR_7 |
   VAR_4 | VAR_3);

 FUNC_4(55);

 return FUNC_1(VAR_8->ucb, VAR_1, VAR_8->adcsync);
}
