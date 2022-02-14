
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00_ts {int ucb; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 unsigned int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline int FUNC_2(struct ucb1x00_ts *VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_3->ucb, VAR_0);

 if (FUNC_0())
  return (!(VAR_4 & (VAR_2)));
 else
  return (VAR_4 & (VAR_2 | VAR_1));
}
