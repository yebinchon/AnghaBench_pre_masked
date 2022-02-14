
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int num_item; int num_reserved; void** p; } ;
typedef TYPE_1__ SL_LIST ;


 int FUNC_0 (void**,void*,int) ;
 int FUNC_1 (void*) ;
 void** FUNC_2 (int) ;

void FUNC_3(SL_LIST *VAR_0, void *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = VAR_0->num_item;
 VAR_0->num_item++;

 if (VAR_0->num_item > VAR_0->num_reserved)
 {
  UINT VAR_3 = VAR_0->num_reserved;
  void *VAR_4 = VAR_0->p;

  VAR_0->num_reserved = VAR_0->num_reserved * 2;

  VAR_0->p = FUNC_2(sizeof(void *) * VAR_0->num_reserved);
  FUNC_0(VAR_0->p, VAR_4, sizeof(void *) * VAR_3);
  FUNC_1(VAR_4);
 }

 VAR_0->p[VAR_2] = VAR_1;
}
