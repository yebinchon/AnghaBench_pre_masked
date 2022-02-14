
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usize ;
typedef scalar_t__ user_size_t ;
typedef int user_addr_t ;
typedef scalar_t__ user64_size_t ;
typedef scalar_t__ user32_size_t ;
typedef scalar_t__ uint64_t ;
struct proc {int dummy; } ;


 scalar_t__ FUNC_0 (struct proc*) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_2(
  struct proc *VAR_2,
  uint64_t VAR_3,
  unsigned int VAR_4,
  user_size_t *VAR_5)
{
 user_size_t VAR_6;
 int VAR_7 = 0;

 if (VAR_3 != VAR_1) {
  if (VAR_4 & VAR_0) {
   VAR_6 = *(user_size_t *)(uintptr_t)VAR_3;
  } else if (FUNC_0(VAR_2)) {
   user64_size_t VAR_8;
   VAR_7 = FUNC_1((user_addr_t)VAR_3, &VAR_8, sizeof(VAR_8));
   VAR_6 = (user_size_t)VAR_8;
  } else {
   user32_size_t VAR_9;
   VAR_7 = FUNC_1((user_addr_t)VAR_3, &VAR_9, sizeof(VAR_9));
   VAR_6 = (user_size_t)VAR_9;
  }
  if (VAR_7)
   return(VAR_7);
 } else {
  VAR_6 = 0;
 }
 *VAR_5 = VAR_6;
 return 0;
}
