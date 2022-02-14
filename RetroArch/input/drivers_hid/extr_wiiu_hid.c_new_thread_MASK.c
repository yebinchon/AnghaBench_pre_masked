
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tag; } ;
typedef TYPE_1__ OSThread ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;

__attribute__((used)) static OSThread *FUNC_1(void)
{
   OSThread *VAR_1 = FUNC_0(8, sizeof(OSThread));

   if (!VAR_1)
      return ((void*)0);

   VAR_1->tag = VAR_0;

   return VAR_1;
}
