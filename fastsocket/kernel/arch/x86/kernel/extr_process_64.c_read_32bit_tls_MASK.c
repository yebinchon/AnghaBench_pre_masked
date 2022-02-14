
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * tls_array; } ;
struct task_struct {TYPE_1__ thread; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline u32 FUNC_1(struct task_struct *VAR_0, int VAR_1)
{
 return FUNC_0(&VAR_0->thread.tls_array[VAR_1]);
}
