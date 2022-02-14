
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * sliding; int * passes; } ;
typedef TYPE_1__ fft_t ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(fft_t *VAR_0)
{
   FUNC_0(VAR_0, 0, 0, 0);
   if (VAR_0->passes)
      FUNC_1(VAR_0->passes);
   VAR_0->passes = ((void*)0);
   if (VAR_0->sliding)
      FUNC_1(VAR_0->sliding);
   VAR_0->sliding = ((void*)0);
}
