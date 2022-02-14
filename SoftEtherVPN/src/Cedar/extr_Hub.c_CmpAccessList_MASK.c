
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef int UINT ;
struct TYPE_2__ {scalar_t__ Priority; scalar_t__ Discard; int Active; int UniqueId; } ;
typedef TYPE_1__ ACCESS ;


 int FUNC_0 (int *,int *,int ) ;

int FUNC_1(void *VAR_0, void *VAR_1)
{
 ACCESS *VAR_2, *VAR_3;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 VAR_2 = *(ACCESS **)VAR_0;
 VAR_3 = *(ACCESS **)VAR_1;
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (VAR_2->Priority > VAR_3->Priority)
 {
  return 1;
 }
 else if (VAR_2->Priority < VAR_3->Priority)
 {
  return -1;
 }
 else if (VAR_2->Discard > VAR_3->Discard)
 {
  return 1;
 }
 else if (VAR_2->Discard < VAR_3->Discard)
 {
  return -1;
 }
 else
 {
  UINT64 VAR_4 = ((UINT64)(&VAR_2->UniqueId) - (UINT64)(&VAR_2->Active));
  UINT VAR_5 = (UINT)VAR_4;

  return FUNC_0(&VAR_2->Active, &VAR_3->Active, VAR_5);
 }
}
