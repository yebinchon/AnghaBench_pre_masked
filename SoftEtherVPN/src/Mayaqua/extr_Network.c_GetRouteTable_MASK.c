
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t UINT ;
typedef int UCHAR ;
struct TYPE_10__ {int Size; int Buf; } ;
struct TYPE_9__ {size_t NumEntry; size_t** Entry; int HashedValue; } ;
typedef TYPE_1__ ROUTE_TABLE ;
typedef size_t ROUTE_ENTRY ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int ) ;
 TYPE_2__* FUNC_3 () ;
 TYPE_1__* FUNC_4 () ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (TYPE_2__*,size_t*,int) ;

ROUTE_TABLE *FUNC_7()
{
 ROUTE_TABLE *VAR_1 = ((void*)0);
 UINT VAR_2;
 BUF *VAR_3 = FUNC_3();
 UCHAR VAR_4[VAR_0];




 VAR_1 = FUNC_4();


 FUNC_6(VAR_3, &VAR_1->NumEntry, sizeof(VAR_1->NumEntry));

 for (VAR_2 = 0;VAR_2 < VAR_1->NumEntry;VAR_2++)
 {
  ROUTE_ENTRY *VAR_5 = VAR_1->Entry[VAR_2];

  FUNC_6(VAR_3, VAR_5, sizeof(ROUTE_ENTRY));
 }

 FUNC_2(VAR_4, VAR_3->Buf, VAR_3->Size);

 FUNC_1(VAR_3);

 FUNC_0(&VAR_1->HashedValue, VAR_4, sizeof(VAR_1->HashedValue));

 return VAR_1;
}
