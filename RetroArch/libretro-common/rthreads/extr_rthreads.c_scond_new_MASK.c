
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cond; int * head; scalar_t__ wakens; scalar_t__ waiters; int cs; void* event; void* hot_potato; } ;
typedef TYPE_1__ scond_t ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,int *) ;

scond_t *FUNC_6(void)
{
   scond_t *VAR_1 = (scond_t*)FUNC_3(1, sizeof(*VAR_1));

   if (!VAR_1)
      return ((void*)0);
   if (FUNC_5(&VAR_1->cond, ((void*)0)) != 0)
      goto error;


   return VAR_1;

error:
   FUNC_4(VAR_1);
   return ((void*)0);
}
