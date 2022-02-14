
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int USHORT ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_5__ {TYPE_2__* TagVlanHeader; } ;
struct TYPE_7__ {int VlanId; TYPE_1__ L3; int TypeL3; } ;
struct TYPE_6__ {int Data; } ;
typedef TYPE_2__ TAGVLAN_HEADER ;
typedef TYPE_3__ PKT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

bool FUNC_1(PKT *VAR_1, UCHAR *VAR_2, UINT VAR_3)
{
 USHORT VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }


 if (VAR_3 < sizeof(TAGVLAN_HEADER))
 {
  return 0;
 }


 VAR_1->L3.TagVlanHeader = (TAGVLAN_HEADER *)VAR_2;
 VAR_1->TypeL3 = VAR_0;

 VAR_2 += sizeof(TAGVLAN_HEADER);
 VAR_3 -= sizeof(TAGVLAN_HEADER);

 VAR_4 = FUNC_0(VAR_1->L3.TagVlanHeader->Data);
 VAR_4 = VAR_4 & 0xFFF;

 VAR_1->VlanId = VAR_4;

 return 1;
}
