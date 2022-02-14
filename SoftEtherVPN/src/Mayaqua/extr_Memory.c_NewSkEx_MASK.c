
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_reserved; int no_compact; void* p; scalar_t__ num_item; int ref; int lock; } ;
typedef TYPE_1__ SK ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

SK *FUNC_4(bool VAR_2)
{
 SK *VAR_3;

 VAR_3 = FUNC_1(sizeof(SK));
 VAR_3->lock = FUNC_2();
 VAR_3->ref = FUNC_3();
 VAR_3->num_item = 0;
 VAR_3->num_reserved = VAR_0;
 VAR_3->p = FUNC_1(sizeof(void *) * VAR_3->num_reserved);
 VAR_3->no_compact = VAR_2;


 FUNC_0(VAR_1);

 return VAR_3;
}
