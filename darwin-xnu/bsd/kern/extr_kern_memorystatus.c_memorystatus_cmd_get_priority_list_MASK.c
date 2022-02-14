
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ user_addr_t ;
typedef scalar_t__ pid_t ;
typedef int memorystatus_priority_entry_t ;
typedef size_t int32_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__,size_t) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int **,size_t*,size_t*,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,size_t) ;

__attribute__((used)) static int
FUNC_4(pid_t VAR_3, user_addr_t VAR_4, size_t VAR_5, int32_t *VAR_6) {
 int VAR_7 = 0;
 boolean_t VAR_8;
 size_t VAR_9;





 VAR_8 = ((VAR_4 == VAR_2) ? VAR_1: VAR_0);

 if (VAR_3 != 0) {
  VAR_9 = sizeof(memorystatus_priority_entry_t) * 1;
  if (!VAR_8) {
   VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5);
  }
 } else {
  memorystatus_priority_entry_t *VAR_10 = ((void*)0);
  VAR_7 = FUNC_2(&VAR_10, &VAR_5, &VAR_9, VAR_8);

  if (VAR_7 == 0) {
   if (!VAR_8) {
    VAR_7 = FUNC_0(VAR_10, VAR_4, VAR_9);
   }
  }

  if (VAR_10) {
   FUNC_1(VAR_10, VAR_5);
  }
 }

 if (VAR_7 == 0) {
  *VAR_6 = VAR_9;
 }

 return (VAR_7);
}
