
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tcpcb {scalar_t__ t_challengeack_count; int t_challengeack_last; } ;
typedef int int32_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static boolean_t
FUNC_1(struct tcpcb *VAR_4)
{
 boolean_t VAR_5 = VAR_1;
 uint32_t VAR_6 = VAR_3;
 int32_t VAR_7 = 0;

 VAR_7 = FUNC_0(VAR_6, 0, VAR_4->t_challengeack_last, 0);




 if (VAR_4->t_challengeack_last == 0 || VAR_7 >= 1000) {
  VAR_4->t_challengeack_last = VAR_6;
  VAR_4->t_challengeack_count = 0;
  VAR_5 = VAR_0;
 } else if (VAR_4->t_challengeack_count < VAR_2) {
  VAR_5 = VAR_0;
 }


 if (VAR_5 == VAR_0 && (VAR_4->t_challengeack_count + 1 > 0))
  VAR_4->t_challengeack_count++;

 return (VAR_5);
}
