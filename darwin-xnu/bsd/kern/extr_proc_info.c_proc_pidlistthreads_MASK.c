
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int user_addr_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef TYPE_1__* proc_t ;
typedef int int32_t ;
struct TYPE_3__ {int task; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (int ,void*,int,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (void*,int) ;

int
FUNC_6(proc_t VAR_1, bool VAR_2, user_addr_t VAR_3, uint32_t VAR_4, int32_t *VAR_5)
{
 uint32_t VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8 = 0;
 void * VAR_9;
 uint32_t VAR_10 = 0;

 int VAR_11 = FUNC_3(VAR_1->task) + 10;
 if (VAR_11 > 0) {
  VAR_10 = (uint32_t)VAR_11;
 }

 VAR_6 = VAR_4/(sizeof(uint64_t));

 if (VAR_10 > VAR_6) {
  VAR_10 = VAR_6;
 }

 VAR_9 = (void *)FUNC_4(VAR_10 * sizeof(uint64_t));
 if (VAR_9 == ((void*)0))
  return(VAR_0);
 FUNC_0(VAR_9, VAR_10 * sizeof(uint64_t));

 VAR_7 = FUNC_2(VAR_1->task, VAR_9, VAR_10, VAR_2);

 VAR_8 = FUNC_1(VAR_9, VAR_3, VAR_7);
 FUNC_5(VAR_9, VAR_10 * sizeof(uint64_t));
 if (VAR_8 == 0)
  *VAR_5 = VAR_7;
 return(VAR_8);

}
