
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cond; int cond_lock; int buffer; int rd; } ;
typedef TYPE_1__ rsd_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
   rsd_t *VAR_1 = (rsd_t*)VAR_0;

   FUNC_3(VAR_1->rd);
   FUNC_2(VAR_1->rd);

   FUNC_0(VAR_1->buffer);
   FUNC_5(VAR_1->cond_lock);
   FUNC_4(VAR_1->cond);

   FUNC_1(VAR_1);
}
