
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_size_t ;
typedef int user_addr_t ;
typedef int uint64_t ;
struct proc {int dummy; } ;
typedef int kqueue_id_t ;
typedef int int32_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct proc*,int ,int *,int ,int,int ,int,int ,int ,unsigned int,unsigned long long,int *,int *) ;

int
FUNC_1(struct proc *VAR_1, int VAR_2,
      user_addr_t VAR_3, int VAR_4,
      user_addr_t VAR_5, int VAR_6,
      user_addr_t VAR_7, user_size_t *VAR_8,
      unsigned int VAR_9,
      int32_t *VAR_10)
{
 return FUNC_0(VAR_1,
                        (kqueue_id_t)VAR_2, ((void*)0),
                        VAR_3, VAR_4,
                        VAR_5, VAR_6,
                        VAR_7, (uint64_t)VAR_8,
                        (VAR_9 | VAR_0),
                        0ULL,
                        ((void*)0),
                        VAR_10);
}
