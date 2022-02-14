
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {int NonSslList; } ;
struct TYPE_6__ {scalar_t__ Count; } ;
typedef TYPE_1__ NON_SSL ;
typedef int IP ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(CEDAR *VAR_0, IP *VAR_1, UINT VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0->NonSslList);
 {
  NON_SSL *VAR_3 = FUNC_1(VAR_0, VAR_1);

  if (VAR_3 != ((void*)0))
  {
   if (VAR_3->Count >= VAR_2)
   {
    VAR_3->Count -= VAR_2;
   }
  }
 }
 FUNC_2(VAR_0->NonSslList);
}
