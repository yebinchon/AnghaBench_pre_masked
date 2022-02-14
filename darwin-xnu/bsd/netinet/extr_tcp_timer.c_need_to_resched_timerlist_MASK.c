
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;
struct tcptimerlist {int runtime; int scheduled; scalar_t__ running; } ;
typedef scalar_t__ int32_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct tcptimerlist VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static boolean_t
FUNC_1(u_int32_t VAR_8, u_int16_t VAR_9)
{
 struct tcptimerlist *VAR_10 = &VAR_7;
 int32_t VAR_11;






 if (VAR_10->running)
  return (VAR_6);

 if (!VAR_10->scheduled)
  return (VAR_6);

 VAR_11 = FUNC_0(VAR_10->runtime, 0, VAR_8, 0);
 if (VAR_11 <= 0) {

  return (VAR_0);
 } else {
  if (VAR_9 & VAR_2) {
   if (VAR_11 <= VAR_4)
    return (VAR_0);
  } else if (VAR_9 & VAR_1) {
   if (VAR_11 <= VAR_3)
    return (VAR_0);
  } else {
   if (VAR_11 <= VAR_5)
    return (VAR_0);
  }
 }
 return (VAR_6);
}
