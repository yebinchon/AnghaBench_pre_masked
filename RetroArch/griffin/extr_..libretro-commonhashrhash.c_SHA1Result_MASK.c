
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Computed; scalar_t__ Corrupted; } ;
typedef TYPE_1__ SHA1Context ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(SHA1Context *VAR_0)
{
   if (VAR_0->Corrupted)
      return 0;

   if (!VAR_0->Computed)
   {
      FUNC_0(VAR_0);
      VAR_0->Computed = 1;
   }

   return 1;
}
