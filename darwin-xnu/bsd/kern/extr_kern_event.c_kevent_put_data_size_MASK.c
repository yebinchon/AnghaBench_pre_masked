
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usize ;
typedef int user_size_t ;
typedef int user_addr_t ;
typedef int user64_size_t ;
typedef int user32_size_t ;
typedef scalar_t__ uint64_t ;
struct proc {int dummy; } ;


 scalar_t__ FUNC_0 (struct proc*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_2(
  struct proc *VAR_1,
  uint64_t VAR_2,
  unsigned int VAR_3,
  user_size_t VAR_4)
{
 int VAR_5 = 0;

 if (VAR_2) {
  if (VAR_3 & VAR_0) {
   *(user_size_t *)(uintptr_t)VAR_2 = VAR_4;
  } else if (FUNC_0(VAR_1)) {
   user64_size_t VAR_6 = (user64_size_t)VAR_4;
   VAR_5 = FUNC_1(&VAR_6, (user_addr_t)VAR_2, sizeof(VAR_6));
  } else {
   user32_size_t VAR_7 = (user32_size_t)VAR_4;
   VAR_5 = FUNC_1(&VAR_7, (user_addr_t)VAR_2, sizeof(VAR_7));
  }
 }
 return VAR_5;
}
