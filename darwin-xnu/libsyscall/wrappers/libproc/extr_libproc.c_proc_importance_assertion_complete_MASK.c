
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ,int *,int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 () ;
 int VAR_7 ;
 int FUNC_2 (char*) ;

int
FUNC_3(uint64_t VAR_8)
{
 int VAR_9 = 0;

 if (VAR_8 == 0)
  return (0);

 if (VAR_8 == (uint64_t) &VAR_7) {
  VAR_9 = FUNC_0(VAR_5,
        VAR_2,
        VAR_3,
        VAR_4,
        ((void*)0), FUNC_1(), 0);
  if (VAR_9 == 0) {
   return (0);
  } else if (VAR_6 == VAR_1) {
   FUNC_2("Attempted to drop too many assertions");
   return (VAR_6);
  } else {
   return (VAR_6);
  }
 } else {
  FUNC_2("Attempted to drop assertion with invalid token");
  return (VAR_0);
 }
}
