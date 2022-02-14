
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pStack; scalar_t__ defaultStack; } ;
struct TYPE_5__ {int userData; int (* free ) (int ,scalar_t__) ;} ;
typedef TYPE_1__ JSON_MemorySuite ;
typedef TYPE_2__* Grammarian ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(Grammarian VAR_0,
      const JSON_MemorySuite* VAR_1)
{
   if (VAR_0->pStack != VAR_0->defaultStack)
      VAR_1->free(VAR_1->userData, VAR_0->pStack);
}
