
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct moveparams {scalar_t__ hcount; scalar_t__ lcount; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_0(struct moveparams *VAR_2)
{
 VAR_2->lcount = VAR_1;
 if (VAR_1 > VAR_0) {
  VAR_2->lcount = VAR_0;
  if (VAR_2->hcount)
   VAR_2->hcount = VAR_1 - VAR_0;
 } else {
  VAR_2->hcount = 0;
 }
}
