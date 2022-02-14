
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_struct {scalar_t__ tls_array; } ;
struct TYPE_2__ {struct thread_struct thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int
FUNC_1 (void)
{
 struct thread_struct *VAR_4 = &VAR_3->thread;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (FUNC_0(VAR_4->tls_array + VAR_5))
   return VAR_5 + VAR_2;
 return -VAR_0;
}
