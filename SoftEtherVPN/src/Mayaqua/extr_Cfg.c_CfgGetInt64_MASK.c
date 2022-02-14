
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT64 ;
struct TYPE_3__ {scalar_t__ Type; int size; scalar_t__ Buf; } ;
typedef TYPE_1__ ITEM ;
typedef int FOLDER ;


 TYPE_1__* FUNC_0 (int *,char*) ;
 scalar_t__ VAR_0 ;

UINT64 FUNC_1(FOLDER *VAR_1, char *VAR_2)
{
 ITEM *VAR_3;
 UINT64 *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 == ((void*)0))
 {
  return 0;
 }
 if (VAR_3->Type != VAR_0)
 {
  return 0;
 }
 if (VAR_3->size != sizeof(UINT64))
 {
  return 0;
 }

 VAR_4 = (UINT64 *)VAR_3->Buf;
 return *VAR_4;
}
