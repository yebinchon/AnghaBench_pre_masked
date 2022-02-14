
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* thread_t ;
struct TYPE_3__ {int * kpc_buf; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(thread_t VAR_0)
{
 uint64_t *VAR_1 = ((void*)0);


 if( !VAR_0->kpc_buf )
  return;


 VAR_1 = VAR_0->kpc_buf;
 VAR_0->kpc_buf = ((void*)0);
 FUNC_0(VAR_1);
}
