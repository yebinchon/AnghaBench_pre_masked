
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
struct TYPE_10__ {int NonSslList; } ;
struct TYPE_9__ {scalar_t__ Count; scalar_t__ EntryExpires; int IpAddress; } ;
typedef TYPE_1__ NON_SSL ;
typedef int IP ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_4 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int) ;

bool FUNC_8(CEDAR *VAR_2, IP *VAR_3)
{
 NON_SSL *VAR_4;
 bool VAR_5 = 1;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 1;
 }

 FUNC_3(VAR_2->NonSslList);
 {
  FUNC_2(VAR_2);

  VAR_4 = FUNC_4(VAR_2, VAR_3);

  if (VAR_4 == ((void*)0))
  {
   VAR_4 = FUNC_7(sizeof(NON_SSL));
   FUNC_1(&VAR_4->IpAddress, VAR_3, sizeof(IP));
   VAR_4->Count = 0;

   FUNC_0(VAR_2->NonSslList, VAR_4);
  }

  VAR_4->EntryExpires = FUNC_5() + (UINT64)VAR_0;

  VAR_4->Count++;

  if (VAR_4->Count > VAR_1)
  {
   VAR_5 = 0;
  }
 }
 FUNC_6(VAR_2->NonSslList);

 return VAR_5;
}
