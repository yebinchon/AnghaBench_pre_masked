
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_reserved; int sorted; int * cmp; void* p; scalar_t__ Param1; scalar_t__ num_item; int * ref; int * lock; } ;
typedef TYPE_1__ LIST ;
typedef int COMPARE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int * FUNC_3 () ;
 int * FUNC_4 () ;

LIST *FUNC_5(COMPARE *VAR_2, bool VAR_3, bool VAR_4)
{
 LIST *VAR_5;

 if (VAR_4 == 0)
 {
  VAR_5 = FUNC_1(sizeof(LIST));
 }
 else
 {
  VAR_5 = FUNC_2(sizeof(LIST));
 }

 if (VAR_3 == 0)
 {
  VAR_5->lock = FUNC_3();
  VAR_5->ref = FUNC_4();
 }
 else
 {
  VAR_5->lock = ((void*)0);
  VAR_5->ref = ((void*)0);
 }
 VAR_5->num_item = 0;
 VAR_5->num_reserved = VAR_0;
 VAR_5->Param1 = 0;

 if (VAR_4 == 0)
 {
  VAR_5->p = FUNC_1(sizeof(void *) * VAR_5->num_reserved);
 }
 else
 {
  VAR_5->p = FUNC_2(sizeof(void *) * VAR_5->num_reserved);
 }

 VAR_5->cmp = VAR_2;
 VAR_5->sorted = 1;


 FUNC_0(VAR_1);

 return VAR_5;
}
