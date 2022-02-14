
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int streamPos; int pos; int posLimit; } ;
typedef TYPE_1__ CMatchFinder ;



void FUNC_0(CMatchFinder *VAR_0, uint32_t VAR_1)
{
  VAR_0->posLimit -= VAR_1;
  VAR_0->pos -= VAR_1;
  VAR_0->streamPos -= VAR_1;
}
