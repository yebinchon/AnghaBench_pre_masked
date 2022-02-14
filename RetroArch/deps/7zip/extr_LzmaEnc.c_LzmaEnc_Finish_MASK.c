
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int matchFinderMt; scalar_t__ mtMode; } ;
typedef scalar_t__ CLzmaEncHandle ;
typedef TYPE_1__ CLzmaEnc ;


 int FUNC_0 (int *) ;

void FUNC_1(CLzmaEncHandle VAR_0)
{

   CLzmaEnc *VAR_1 = (CLzmaEnc *)VAR_0;
   if (VAR_1->mtMode)
      FUNC_0(&VAR_1->matchFinderMt);

}
