
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t xstate_t ;
typedef void x86_fx_thread_state ;
struct TYPE_3__ {scalar_t__ alloc_size; scalar_t__ free_elements; scalar_t__ elem_size; } ;


 int FUNC_0 (void*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,int ) ;
 int * VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_3 (char*,void*,unsigned int,void*,unsigned int) ;
 void* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void *
FUNC_5(xstate_t VAR_2)
{
 struct x86_fx_thread_state *VAR_3;

 FUNC_1(VAR_1[VAR_2] != ((void*)0));
 VAR_3 = FUNC_4(VAR_1[VAR_2]);
 FUNC_2(VAR_3, VAR_0[VAR_2]);

 return VAR_3;
}
