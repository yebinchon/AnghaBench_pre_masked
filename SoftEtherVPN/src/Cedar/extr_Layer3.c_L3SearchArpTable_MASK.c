
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int t ;
typedef int UINT ;
struct TYPE_9__ {int IpAddress; } ;
struct TYPE_8__ {int ArpTable; } ;
typedef TYPE_1__ L3IF ;
typedef TYPE_2__ L3ARPENTRY ;


 TYPE_2__* FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;

L3ARPENTRY *FUNC_2(L3IF *VAR_0, UINT VAR_1)
{
 L3ARPENTRY *VAR_2, VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == 0 || VAR_1 == 0xffffffff)
 {
  return ((void*)0);
 }

 FUNC_1(&VAR_3, sizeof(VAR_3));
 VAR_3.IpAddress = VAR_1;

 VAR_2 = FUNC_0(VAR_0->ArpTable, &VAR_3);

 return VAR_2;
}
