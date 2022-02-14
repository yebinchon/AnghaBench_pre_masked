
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ LastSelectedTime; int Str; } ;
typedef TYPE_1__ CANDIDATE ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(void *VAR_0, void *VAR_1)
{
 CANDIDATE *VAR_2, *VAR_3;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 VAR_2 = *(CANDIDATE **)VAR_0;
 VAR_3 = *(CANDIDATE **)VAR_1;
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }
 if (VAR_2->LastSelectedTime > VAR_3->LastSelectedTime)
 {
  return -1;
 }
 else if (VAR_2->LastSelectedTime < VAR_3->LastSelectedTime)
 {
  return 1;
 }
 else
 {
  return FUNC_0(VAR_2->Str, VAR_3->Str);
 }
}
