
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int t ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_12__ {int IpAddress; scalar_t__ Expire; int MacAddress; } ;
struct TYPE_11__ {int ArpTable; } ;
typedef TYPE_1__ L3IF ;
typedef TYPE_2__ L3ARPENTRY ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int *,int,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_6 (int) ;

void FUNC_7(L3IF *VAR_1, UINT VAR_2, UCHAR *VAR_3)
{
 L3ARPENTRY *VAR_4, VAR_5;

 if (VAR_1 == ((void*)0) || VAR_2 == 0 || VAR_2 == 0xffffffff || VAR_3 == ((void*)0))
 {
  return;
 }

 FUNC_5(&VAR_5, sizeof(VAR_5));
 VAR_5.IpAddress = VAR_2;

 VAR_4 = FUNC_3(VAR_1->ArpTable, &VAR_5);

 if (VAR_4 == ((void*)0))
 {

  VAR_4 = FUNC_6(sizeof(L3ARPENTRY));
  VAR_4->IpAddress = VAR_2;
  FUNC_0(VAR_4->MacAddress, VAR_3, 6);
  FUNC_1(VAR_1->ArpTable, VAR_4);
 }


 VAR_4->Expire = FUNC_4() + VAR_0;


 FUNC_2(VAR_1, VAR_3, VAR_2, VAR_4);
}
