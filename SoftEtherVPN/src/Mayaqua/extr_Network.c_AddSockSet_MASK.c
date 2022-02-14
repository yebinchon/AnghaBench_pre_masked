
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ Type; int Connected; } ;
struct TYPE_5__ {scalar_t__ NumSocket; TYPE_2__** Sock; } ;
typedef TYPE_1__ SOCKSET ;
typedef TYPE_2__ SOCK ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_0(SOCKSET *VAR_2, SOCK *VAR_3)
{

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }
 if (VAR_3->Type == VAR_1 && VAR_3->Connected == 0)
 {
  return;
 }

 if (VAR_2->NumSocket >= VAR_0)
 {

  return;
 }
 VAR_2->Sock[VAR_2->NumSocket++] = VAR_3;
}
