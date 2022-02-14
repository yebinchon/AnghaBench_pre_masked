
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {size_t num_item; size_t num_reserved; void** p; } ;
typedef TYPE_1__ SK ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void** FUNC_1 (void**,int) ;

void FUNC_2(SK *VAR_1, void *VAR_2)
{
 UINT VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = VAR_1->num_item;
 VAR_1->num_item++;


 if (VAR_1->num_item > VAR_1->num_reserved)
 {
  VAR_1->num_reserved = VAR_1->num_reserved * 2;
  VAR_1->p = FUNC_1(VAR_1->p, sizeof(void *) * VAR_1->num_reserved);
 }
 VAR_1->p[VAR_3] = VAR_2;


 FUNC_0(VAR_0);
}
